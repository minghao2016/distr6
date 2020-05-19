#include <Rcpp.h>
using namespace Rcpp;
#define _USE_MATH_DEFINES
#include <cmath>

// It's quicker to redefine our own choose function than to import the Internal one.
// [[Rcpp::export]]
int C_Choose(int x, int y) {
  if (y == 0 | y == x) {
    return 1;
  } else if (y < 0 | y > x) {
    return 0;
  } else {
    int res = x;
    for(int i = 2; i <= y; i++){
      res *= (x-i+1);
      res /= i;
    }
    return res;
  }
}

// [[Rcpp::export]]
NumericMatrix C_NegativeBinomialPdf(NumericVector x, NumericVector size, NumericVector prob, StringVector form) {
  int sl = size.length();
  int pl = prob.length();
  int fl = form.length();

  int ParamLength = std::max({sl, pl, fl});
  int XLength = x.size();
  NumericMatrix mat(XLength, ParamLength);
  for (int i = 0; i < ParamLength; i++) {
    for (int j = 0; j < XLength; j++) {
      if (strcmp (form[i % fl], "fbs") == 0) {
        // Return 0 if x not in Naturals
        if (floor (x[j]) != x[j]) {
          mat(j, i) = 0;
        } else {
          mat(j, i) = C_Choose(x[j] + size[i % sl] - 1, size[i % sl] - 1) * pow(prob[i % pl], size[i % sl]) * pow(1-prob[i % pl], x[j]);
        }
      } else if (strcmp (form[i % fl], "sbf") == 0) {
        // Return 0 if x not in Naturals
        if (floor (x[j]) != x[j]) {
          mat(j, i) = 0;
        } else {
          mat(j, i) = C_Choose(x[j] + size[i % sl] - 1, x[j]) * pow(prob[i % pl], x[j]) * pow(1-prob[i % pl], size[i % sl]);
        }
      } else if (strcmp (form[i % fl], "tbf") == 0) {
        // Return 0 if x not in Naturals or < size
        if (floor (x[j]) != x[j] | x[j] < size[i % sl]) {
          mat(j, i) = 0;
        } else {
          mat(j, i) = C_Choose(x[j] - 1, size[i % sl] - 1) * pow(prob[i % pl], x[j] - size[i % sl]) * pow(1-prob[i % pl], size[i % sl]);
        }
      } else {
        // Return 0 if x not in Naturals or < size
        if (floor (x[j]) != x[j] | x[j] < size[i % sl]) {
          mat(j, i) = 0;
        } else {
          mat(j, i) = C_Choose(x[j] - 1, size[i % sl] - 1) * pow(prob[i % pl], size[i % sl]) * pow(1 - prob[i % pl], x[j] - size[i % sl]);
        }
      }
    }
  }
  return mat;
}


// [[Rcpp::export]]
NumericMatrix C_ArcsinePdf(NumericVector x, NumericVector min, NumericVector max, bool logp) {
  int ll = min.length();
  int ul = max.length();
  int ParamLength = std::max({ll, ul});

  int XLength = x.size();
  NumericMatrix mat(XLength, ParamLength);

  for (int i = 0; i < ParamLength; i++) {
    for (int j = 0; j < XLength; j++) {

      if (x[j] < min[i % ll] || x[j] > max[i % ul]) {
        if (logp) {
          mat(j, i) = R_NegInf;
        } else {
          mat(j, i) = 0;
        }
      } else if (x[j] == min[i % ll] || x[j] == max[i % ul]) {
        mat(j, i) = R_PosInf;
      } else {
        if (!logp) {
          mat(j, i) = 1/(M_PI * sqrt((x[j] - min[i % ll]) * (max[i % ul] - x[j])));
        } else {
          mat(j, i) = -log(M_PI) - (log(x[j] - min[i % ll]) / 2) - (log(max[i % ul] - x[j]) / 2);
        }
      }
    }
  }

  return mat;
}

// [[Rcpp::export]]
NumericMatrix C_ArcsineCdf(NumericVector x, NumericVector min, NumericVector max,
                           bool lower, bool logp) {
  int ll = min.length();
  int ul = max.length();
  int ParamLength = std::max({ll, ul});

  int XLength = x.size();
  NumericMatrix mat(XLength, ParamLength);

  for (int i = 0; i < ParamLength; i++) {
    for (int j = 0; j < XLength; j++) {
      if (x[j] < min[i % ll]) {
        mat(j, i) = 0;
      } else if (x[j] >= max[i % ul]) {
        mat(j, i) = 1;
      } else {
        mat(j, i) = (2 / M_PI) * (asin(sqrt((x[j] - min[i % ll]) / (max[i % ul] - min[i % ll]))));
      }

      if (!lower) {
        mat(j, i) = 1 - mat(j, i);
      }

      if (logp) {
        mat(j, i) = log(mat(j, i));
      }
    }
  }

  return mat;
}

// [[Rcpp::export]]
NumericMatrix C_ArcsineQuantile(NumericVector x, NumericVector min, NumericVector max,
                           bool lower, bool logp) {
  int ll = min.length();
  int ul = max.length();
  int ParamLength = std::max({ll, ul});

  int XLength = x.size();
  NumericMatrix mat(XLength, ParamLength);

  for (int i = 0; i < ParamLength; i++) {
    for (int j = 0; j < XLength; j++) {

      if (logp) {
        x[j] = exp(x[j]);
      }

      if (!lower) {
        x[j] = 1 - x[j];
      }

      if (x[j] < 0 || x[j] > 1) {
        mat(j, i) = R_NaN;
      } else if (x[j] == 0) {
        mat(j, i) = min[i % ll];
      } else if (x[j] == 1) {
        mat(j, i) = max[i % ul];
      } else {
        mat(j, i) = ((max[i % ul] - min[i % ll]) * pow(sin(x[j] * M_PI * 0.5), 2)) + min[i % ll];
      }
    }
  }

  return mat;
}


