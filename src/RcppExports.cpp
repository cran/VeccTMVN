// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

#ifdef RCPP_USE_GLOBAL_ROSTREAM
Rcpp::Rostream<true>&  Rcpp::Rcout = Rcpp::Rcpp_cout_get();
Rcpp::Rostream<false>& Rcpp::Rcerr = Rcpp::Rcpp_cerr_get();
#endif

// find_nn_corr_internal
IntegerMatrix find_nn_corr_internal(const NumericMatrix& corrMat, int m);
RcppExport SEXP _VeccTMVN_find_nn_corr_internal(SEXP corrMatSEXP, SEXP mSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const NumericMatrix& >::type corrMat(corrMatSEXP);
    Rcpp::traits::input_parameter< int >::type m(mSEXP);
    rcpp_result_gen = Rcpp::wrap(find_nn_corr_internal(corrMat, m));
    return rcpp_result_gen;
END_RCPP
}
// mvndns
List mvndns(const NumericVector& a, const NumericVector& b, const IntegerMatrix& NN, const NumericVector& muCond, const NumericMatrix& muCoeff, const NumericVector& condSd, const NumericVector& beta, int NLevel1, int NLevel2);
RcppExport SEXP _VeccTMVN_mvndns(SEXP aSEXP, SEXP bSEXP, SEXP NNSEXP, SEXP muCondSEXP, SEXP muCoeffSEXP, SEXP condSdSEXP, SEXP betaSEXP, SEXP NLevel1SEXP, SEXP NLevel2SEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const NumericVector& >::type a(aSEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type b(bSEXP);
    Rcpp::traits::input_parameter< const IntegerMatrix& >::type NN(NNSEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type muCond(muCondSEXP);
    Rcpp::traits::input_parameter< const NumericMatrix& >::type muCoeff(muCoeffSEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type condSd(condSdSEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type beta(betaSEXP);
    Rcpp::traits::input_parameter< int >::type NLevel1(NLevel1SEXP);
    Rcpp::traits::input_parameter< int >::type NLevel2(NLevel2SEXP);
    rcpp_result_gen = Rcpp::wrap(mvndns(a, b, NN, muCond, muCoeff, condSd, beta, NLevel1, NLevel2));
    return rcpp_result_gen;
END_RCPP
}
// mvnrnd
List mvnrnd(const NumericVector& a, const NumericVector& b, const IntegerMatrix& NN, const NumericVector& muCond, const NumericMatrix& muCoeff, const NumericVector& condSd, const NumericVector& beta, int N);
RcppExport SEXP _VeccTMVN_mvnrnd(SEXP aSEXP, SEXP bSEXP, SEXP NNSEXP, SEXP muCondSEXP, SEXP muCoeffSEXP, SEXP condSdSEXP, SEXP betaSEXP, SEXP NSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const NumericVector& >::type a(aSEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type b(bSEXP);
    Rcpp::traits::input_parameter< const IntegerMatrix& >::type NN(NNSEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type muCond(muCondSEXP);
    Rcpp::traits::input_parameter< const NumericMatrix& >::type muCoeff(muCoeffSEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type condSd(condSdSEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type beta(betaSEXP);
    Rcpp::traits::input_parameter< int >::type N(NSEXP);
    rcpp_result_gen = Rcpp::wrap(mvnrnd(a, b, NN, muCond, muCoeff, condSd, beta, N));
    return rcpp_result_gen;
END_RCPP
}
// psi
double psi(const NumericVector& a, const NumericVector& b, const IntegerMatrix& NN, const NumericVector& muCond, const NumericMatrix& muCoeff, const NumericVector& condSd, const NumericVector& beta, const NumericVector& x);
RcppExport SEXP _VeccTMVN_psi(SEXP aSEXP, SEXP bSEXP, SEXP NNSEXP, SEXP muCondSEXP, SEXP muCoeffSEXP, SEXP condSdSEXP, SEXP betaSEXP, SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const NumericVector& >::type a(aSEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type b(bSEXP);
    Rcpp::traits::input_parameter< const IntegerMatrix& >::type NN(NNSEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type muCond(muCondSEXP);
    Rcpp::traits::input_parameter< const NumericMatrix& >::type muCoeff(muCoeffSEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type condSd(condSdSEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type beta(betaSEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(psi(a, b, NN, muCond, muCoeff, condSd, beta, x));
    return rcpp_result_gen;
END_RCPP
}
// mvtdns
List mvtdns(const NumericVector& a, const NumericVector& b, double nu, const IntegerMatrix& NN, const NumericVector& muCond, const NumericMatrix& muCoeff, const NumericVector& condSd, const NumericVector& beta, int NLevel1, int NLevel2);
RcppExport SEXP _VeccTMVN_mvtdns(SEXP aSEXP, SEXP bSEXP, SEXP nuSEXP, SEXP NNSEXP, SEXP muCondSEXP, SEXP muCoeffSEXP, SEXP condSdSEXP, SEXP betaSEXP, SEXP NLevel1SEXP, SEXP NLevel2SEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const NumericVector& >::type a(aSEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type b(bSEXP);
    Rcpp::traits::input_parameter< double >::type nu(nuSEXP);
    Rcpp::traits::input_parameter< const IntegerMatrix& >::type NN(NNSEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type muCond(muCondSEXP);
    Rcpp::traits::input_parameter< const NumericMatrix& >::type muCoeff(muCoeffSEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type condSd(condSdSEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type beta(betaSEXP);
    Rcpp::traits::input_parameter< int >::type NLevel1(NLevel1SEXP);
    Rcpp::traits::input_parameter< int >::type NLevel2(NLevel2SEXP);
    rcpp_result_gen = Rcpp::wrap(mvtdns(a, b, nu, NN, muCond, muCoeff, condSd, beta, NLevel1, NLevel2));
    return rcpp_result_gen;
END_RCPP
}
// mvtrnd
List mvtrnd(const NumericVector& a, const NumericVector& b, double nu, const IntegerMatrix& NN, const NumericMatrix& muCoeff, const NumericVector& condSd, const NumericVector& beta, int N);
RcppExport SEXP _VeccTMVN_mvtrnd(SEXP aSEXP, SEXP bSEXP, SEXP nuSEXP, SEXP NNSEXP, SEXP muCoeffSEXP, SEXP condSdSEXP, SEXP betaSEXP, SEXP NSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const NumericVector& >::type a(aSEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type b(bSEXP);
    Rcpp::traits::input_parameter< double >::type nu(nuSEXP);
    Rcpp::traits::input_parameter< const IntegerMatrix& >::type NN(NNSEXP);
    Rcpp::traits::input_parameter< const NumericMatrix& >::type muCoeff(muCoeffSEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type condSd(condSdSEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type beta(betaSEXP);
    Rcpp::traits::input_parameter< int >::type N(NSEXP);
    rcpp_result_gen = Rcpp::wrap(mvtrnd(a, b, nu, NN, muCoeff, condSd, beta, N));
    return rcpp_result_gen;
END_RCPP
}
// sp_mat_mul_query
NumericVector sp_mat_mul_query(const IntegerVector& queryRow, const IntegerVector& queryCol, const IntegerVector& idx, const IntegerVector& cidx, const NumericVector& val);
RcppExport SEXP _VeccTMVN_sp_mat_mul_query(SEXP queryRowSEXP, SEXP queryColSEXP, SEXP idxSEXP, SEXP cidxSEXP, SEXP valSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const IntegerVector& >::type queryRow(queryRowSEXP);
    Rcpp::traits::input_parameter< const IntegerVector& >::type queryCol(queryColSEXP);
    Rcpp::traits::input_parameter< const IntegerVector& >::type idx(idxSEXP);
    Rcpp::traits::input_parameter< const IntegerVector& >::type cidx(cidxSEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type val(valSEXP);
    rcpp_result_gen = Rcpp::wrap(sp_mat_mul_query(queryRow, queryCol, idx, cidx, val));
    return rcpp_result_gen;
END_RCPP
}
// univar_order_vecc
List univar_order_vecc(arma::vec a, arma::vec b, arma::mat corrMat, int m);
RcppExport SEXP _VeccTMVN_univar_order_vecc(SEXP aSEXP, SEXP bSEXP, SEXP corrMatSEXP, SEXP mSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::vec >::type a(aSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type b(bSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type corrMat(corrMatSEXP);
    Rcpp::traits::input_parameter< int >::type m(mSEXP);
    rcpp_result_gen = Rcpp::wrap(univar_order_vecc(a, b, corrMat, m));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_VeccTMVN_find_nn_corr_internal", (DL_FUNC) &_VeccTMVN_find_nn_corr_internal, 2},
    {"_VeccTMVN_mvndns", (DL_FUNC) &_VeccTMVN_mvndns, 9},
    {"_VeccTMVN_mvnrnd", (DL_FUNC) &_VeccTMVN_mvnrnd, 8},
    {"_VeccTMVN_psi", (DL_FUNC) &_VeccTMVN_psi, 8},
    {"_VeccTMVN_mvtdns", (DL_FUNC) &_VeccTMVN_mvtdns, 10},
    {"_VeccTMVN_mvtrnd", (DL_FUNC) &_VeccTMVN_mvtrnd, 8},
    {"_VeccTMVN_sp_mat_mul_query", (DL_FUNC) &_VeccTMVN_sp_mat_mul_query, 5},
    {"_VeccTMVN_univar_order_vecc", (DL_FUNC) &_VeccTMVN_univar_order_vecc, 4},
    {NULL, NULL, 0}
};

RcppExport void R_init_VeccTMVN(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
