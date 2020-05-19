// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// C_Choose
int C_Choose(int x, int y);
RcppExport SEXP _distr6_C_Choose(SEXP xSEXP, SEXP ySEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type x(xSEXP);
    Rcpp::traits::input_parameter< int >::type y(ySEXP);
    rcpp_result_gen = Rcpp::wrap(C_Choose(x, y));
    return rcpp_result_gen;
END_RCPP
}
// C_NegativeBinomialPdf
NumericMatrix C_NegativeBinomialPdf(NumericVector x, NumericVector size, NumericVector prob, StringVector form);
RcppExport SEXP _distr6_C_NegativeBinomialPdf(SEXP xSEXP, SEXP sizeSEXP, SEXP probSEXP, SEXP formSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type size(sizeSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type prob(probSEXP);
    Rcpp::traits::input_parameter< StringVector >::type form(formSEXP);
    rcpp_result_gen = Rcpp::wrap(C_NegativeBinomialPdf(x, size, prob, form));
    return rcpp_result_gen;
END_RCPP
}
// C_ArcsinePdf
NumericMatrix C_ArcsinePdf(NumericVector x, NumericVector min, NumericVector max, bool logp);
RcppExport SEXP _distr6_C_ArcsinePdf(SEXP xSEXP, SEXP minSEXP, SEXP maxSEXP, SEXP logpSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type min(minSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type max(maxSEXP);
    Rcpp::traits::input_parameter< bool >::type logp(logpSEXP);
    rcpp_result_gen = Rcpp::wrap(C_ArcsinePdf(x, min, max, logp));
    return rcpp_result_gen;
END_RCPP
}
// C_ArcsineCdf
NumericMatrix C_ArcsineCdf(NumericVector x, NumericVector min, NumericVector max, bool lower, bool logp);
RcppExport SEXP _distr6_C_ArcsineCdf(SEXP xSEXP, SEXP minSEXP, SEXP maxSEXP, SEXP lowerSEXP, SEXP logpSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type min(minSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type max(maxSEXP);
    Rcpp::traits::input_parameter< bool >::type lower(lowerSEXP);
    Rcpp::traits::input_parameter< bool >::type logp(logpSEXP);
    rcpp_result_gen = Rcpp::wrap(C_ArcsineCdf(x, min, max, lower, logp));
    return rcpp_result_gen;
END_RCPP
}
// C_ArcsineQuantile
NumericMatrix C_ArcsineQuantile(NumericVector x, NumericVector min, NumericVector max, bool lower, bool logp);
RcppExport SEXP _distr6_C_ArcsineQuantile(SEXP xSEXP, SEXP minSEXP, SEXP maxSEXP, SEXP lowerSEXP, SEXP logpSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type min(minSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type max(maxSEXP);
    Rcpp::traits::input_parameter< bool >::type lower(lowerSEXP);
    Rcpp::traits::input_parameter< bool >::type logp(logpSEXP);
    rcpp_result_gen = Rcpp::wrap(C_ArcsineQuantile(x, min, max, lower, logp));
    return rcpp_result_gen;
END_RCPP
}
// C_WeightedDiscretePdf
NumericVector C_WeightedDiscretePdf(NumericVector x, NumericVector data, NumericVector pdf, bool logp);
RcppExport SEXP _distr6_C_WeightedDiscretePdf(SEXP xSEXP, SEXP dataSEXP, SEXP pdfSEXP, SEXP logpSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type data(dataSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type pdf(pdfSEXP);
    Rcpp::traits::input_parameter< bool >::type logp(logpSEXP);
    rcpp_result_gen = Rcpp::wrap(C_WeightedDiscretePdf(x, data, pdf, logp));
    return rcpp_result_gen;
END_RCPP
}
// C_Vec_WeightedDiscretePdf
NumericMatrix C_Vec_WeightedDiscretePdf(NumericVector x, NumericMatrix data, NumericMatrix pdf, bool logp);
RcppExport SEXP _distr6_C_Vec_WeightedDiscretePdf(SEXP xSEXP, SEXP dataSEXP, SEXP pdfSEXP, SEXP logpSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type data(dataSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type pdf(pdfSEXP);
    Rcpp::traits::input_parameter< bool >::type logp(logpSEXP);
    rcpp_result_gen = Rcpp::wrap(C_Vec_WeightedDiscretePdf(x, data, pdf, logp));
    return rcpp_result_gen;
END_RCPP
}
// C_WeightedDiscreteCdf
NumericVector C_WeightedDiscreteCdf(NumericVector x, NumericVector data, NumericVector cdf, bool lower, bool logp);
RcppExport SEXP _distr6_C_WeightedDiscreteCdf(SEXP xSEXP, SEXP dataSEXP, SEXP cdfSEXP, SEXP lowerSEXP, SEXP logpSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type data(dataSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type cdf(cdfSEXP);
    Rcpp::traits::input_parameter< bool >::type lower(lowerSEXP);
    Rcpp::traits::input_parameter< bool >::type logp(logpSEXP);
    rcpp_result_gen = Rcpp::wrap(C_WeightedDiscreteCdf(x, data, cdf, lower, logp));
    return rcpp_result_gen;
END_RCPP
}
// C_Vec_WeightedDiscreteCdf
NumericMatrix C_Vec_WeightedDiscreteCdf(NumericVector x, NumericMatrix data, NumericMatrix cdf, bool lower, bool logp);
RcppExport SEXP _distr6_C_Vec_WeightedDiscreteCdf(SEXP xSEXP, SEXP dataSEXP, SEXP cdfSEXP, SEXP lowerSEXP, SEXP logpSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type data(dataSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type cdf(cdfSEXP);
    Rcpp::traits::input_parameter< bool >::type lower(lowerSEXP);
    Rcpp::traits::input_parameter< bool >::type logp(logpSEXP);
    rcpp_result_gen = Rcpp::wrap(C_Vec_WeightedDiscreteCdf(x, data, cdf, lower, logp));
    return rcpp_result_gen;
END_RCPP
}
// C_WeightedDiscreteQuantile
NumericVector C_WeightedDiscreteQuantile(NumericVector x, NumericVector data, NumericVector cdf, bool lower, bool logp);
RcppExport SEXP _distr6_C_WeightedDiscreteQuantile(SEXP xSEXP, SEXP dataSEXP, SEXP cdfSEXP, SEXP lowerSEXP, SEXP logpSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type data(dataSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type cdf(cdfSEXP);
    Rcpp::traits::input_parameter< bool >::type lower(lowerSEXP);
    Rcpp::traits::input_parameter< bool >::type logp(logpSEXP);
    rcpp_result_gen = Rcpp::wrap(C_WeightedDiscreteQuantile(x, data, cdf, lower, logp));
    return rcpp_result_gen;
END_RCPP
}
// C_Vec_WeightedDiscreteQuantile
NumericMatrix C_Vec_WeightedDiscreteQuantile(NumericVector x, NumericMatrix data, NumericMatrix cdf, bool lower, bool logp);
RcppExport SEXP _distr6_C_Vec_WeightedDiscreteQuantile(SEXP xSEXP, SEXP dataSEXP, SEXP cdfSEXP, SEXP lowerSEXP, SEXP logpSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type data(dataSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type cdf(cdfSEXP);
    Rcpp::traits::input_parameter< bool >::type lower(lowerSEXP);
    Rcpp::traits::input_parameter< bool >::type logp(logpSEXP);
    rcpp_result_gen = Rcpp::wrap(C_Vec_WeightedDiscreteQuantile(x, data, cdf, lower, logp));
    return rcpp_result_gen;
END_RCPP
}
// C_dpq
NumericMatrix C_dpq(std::string fun, NumericVector x, std::list<NumericVector> args, int lower, int log);
RcppExport SEXP _distr6_C_dpq(SEXP funSEXP, SEXP xSEXP, SEXP argsSEXP, SEXP lowerSEXP, SEXP logSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::string >::type fun(funSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< std::list<NumericVector> >::type args(argsSEXP);
    Rcpp::traits::input_parameter< int >::type lower(lowerSEXP);
    Rcpp::traits::input_parameter< int >::type log(logSEXP);
    rcpp_result_gen = Rcpp::wrap(C_dpq(fun, x, args, lower, log));
    return rcpp_result_gen;
END_RCPP
}
// C_r
NumericMatrix C_r(std::string fun, int x, std::list<NumericVector> args);
RcppExport SEXP _distr6_C_r(SEXP funSEXP, SEXP xSEXP, SEXP argsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::string >::type fun(funSEXP);
    Rcpp::traits::input_parameter< int >::type x(xSEXP);
    Rcpp::traits::input_parameter< std::list<NumericVector> >::type args(argsSEXP);
    rcpp_result_gen = Rcpp::wrap(C_r(fun, x, args));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_distr6_C_Choose", (DL_FUNC) &_distr6_C_Choose, 2},
    {"_distr6_C_NegativeBinomialPdf", (DL_FUNC) &_distr6_C_NegativeBinomialPdf, 4},
    {"_distr6_C_ArcsinePdf", (DL_FUNC) &_distr6_C_ArcsinePdf, 4},
    {"_distr6_C_ArcsineCdf", (DL_FUNC) &_distr6_C_ArcsineCdf, 5},
    {"_distr6_C_ArcsineQuantile", (DL_FUNC) &_distr6_C_ArcsineQuantile, 5},
    {"_distr6_C_WeightedDiscretePdf", (DL_FUNC) &_distr6_C_WeightedDiscretePdf, 4},
    {"_distr6_C_Vec_WeightedDiscretePdf", (DL_FUNC) &_distr6_C_Vec_WeightedDiscretePdf, 4},
    {"_distr6_C_WeightedDiscreteCdf", (DL_FUNC) &_distr6_C_WeightedDiscreteCdf, 5},
    {"_distr6_C_Vec_WeightedDiscreteCdf", (DL_FUNC) &_distr6_C_Vec_WeightedDiscreteCdf, 5},
    {"_distr6_C_WeightedDiscreteQuantile", (DL_FUNC) &_distr6_C_WeightedDiscreteQuantile, 5},
    {"_distr6_C_Vec_WeightedDiscreteQuantile", (DL_FUNC) &_distr6_C_Vec_WeightedDiscreteQuantile, 5},
    {"_distr6_C_dpq", (DL_FUNC) &_distr6_C_dpq, 5},
    {"_distr6_C_r", (DL_FUNC) &_distr6_C_r, 3},
    {NULL, NULL, 0}
};

RcppExport void R_init_distr6(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
