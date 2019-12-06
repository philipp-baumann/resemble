// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <RcppEigen.h>
#include <Rcpp.h>

using namespace Rcpp;

// fastDist
arma::mat fastDist(NumericMatrix X, NumericMatrix Y, String method);
RcppExport SEXP _resemble_fastDist(SEXP XSEXP, SEXP YSEXP, SEXP methodSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type X(XSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type Y(YSEXP);
    Rcpp::traits::input_parameter< String >::type method(methodSEXP);
    rcpp_result_gen = Rcpp::wrap(fastDist(X, Y, method));
    return rcpp_result_gen;
END_RCPP
}
// fastDistVV
NumericVector fastDistVV(NumericVector X, int cores);
RcppExport SEXP _resemble_fastDistVV(SEXP XSEXP, SEXP coresSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type X(XSEXP);
    Rcpp::traits::input_parameter< int >::type cores(coresSEXP);
    rcpp_result_gen = Rcpp::wrap(fastDistVV(X, cores));
    return rcpp_result_gen;
END_RCPP
}
// fastDistVVL
NumericVector fastDistVVL(NumericVector X);
RcppExport SEXP _resemble_fastDistVVL(SEXP XSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type X(XSEXP);
    rcpp_result_gen = Rcpp::wrap(fastDistVVL(X));
    return rcpp_result_gen;
END_RCPP
}
// minDissV
NumericVector minDissV(NumericVector X, int cores);
RcppExport SEXP _resemble_minDissV(SEXP XSEXP, SEXP coresSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type X(XSEXP);
    Rcpp::traits::input_parameter< int >::type cores(coresSEXP);
    rcpp_result_gen = Rcpp::wrap(minDissV(X, cores));
    return rcpp_result_gen;
END_RCPP
}
// eigenMapMatMult
SEXP eigenMapMatMult(const Eigen::Map<Eigen::MatrixXd> A, Eigen::Map<Eigen::MatrixXd> B);
RcppExport SEXP _resemble_eigenMapMatMult(SEXP ASEXP, SEXP BSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Eigen::Map<Eigen::MatrixXd> >::type A(ASEXP);
    Rcpp::traits::input_parameter< Eigen::Map<Eigen::MatrixXd> >::type B(BSEXP);
    rcpp_result_gen = Rcpp::wrap(eigenMapMatMult(A, B));
    return rcpp_result_gen;
END_RCPP
}
// movcorDist
NumericMatrix movcorDist(NumericMatrix X, NumericMatrix Y, int w);
RcppExport SEXP _resemble_movcorDist(SEXP XSEXP, SEXP YSEXP, SEXP wSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type X(XSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type Y(YSEXP);
    Rcpp::traits::input_parameter< int >::type w(wSEXP);
    rcpp_result_gen = Rcpp::wrap(movcorDist(X, Y, w));
    return rcpp_result_gen;
END_RCPP
}
// wcolSds
NumericVector wcolSds(arma::mat X);
RcppExport SEXP _resemble_wcolSds(SEXP XSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type X(XSEXP);
    rcpp_result_gen = Rcpp::wrap(wcolSds(X));
    return rcpp_result_gen;
END_RCPP
}
// colSds
NumericVector colSds(arma::mat X);
RcppExport SEXP _resemble_colSds(SEXP XSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type X(XSEXP);
    rcpp_result_gen = Rcpp::wrap(colSds(X));
    return rcpp_result_gen;
END_RCPP
}
// cms
NumericVector cms(arma::mat X);
RcppExport SEXP _resemble_cms(SEXP XSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type X(XSEXP);
    rcpp_result_gen = Rcpp::wrap(cms(X));
    return rcpp_result_gen;
END_RCPP
}
// cSums
NumericVector cSums(arma::mat X);
RcppExport SEXP _resemble_cSums(SEXP XSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type X(XSEXP);
    rcpp_result_gen = Rcpp::wrap(cSums(X));
    return rcpp_result_gen;
END_RCPP
}
// opls
List opls(arma::mat X, arma::mat Y, int ncomp, bool scale, double maxiter, double tol, bool regression, String pcSelmethod, double pcSelvalue);
RcppExport SEXP _resemble_opls(SEXP XSEXP, SEXP YSEXP, SEXP ncompSEXP, SEXP scaleSEXP, SEXP maxiterSEXP, SEXP tolSEXP, SEXP regressionSEXP, SEXP pcSelmethodSEXP, SEXP pcSelvalueSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type X(XSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type Y(YSEXP);
    Rcpp::traits::input_parameter< int >::type ncomp(ncompSEXP);
    Rcpp::traits::input_parameter< bool >::type scale(scaleSEXP);
    Rcpp::traits::input_parameter< double >::type maxiter(maxiterSEXP);
    Rcpp::traits::input_parameter< double >::type tol(tolSEXP);
    Rcpp::traits::input_parameter< bool >::type regression(regressionSEXP);
    Rcpp::traits::input_parameter< String >::type pcSelmethod(pcSelmethodSEXP);
    Rcpp::traits::input_parameter< double >::type pcSelvalue(pcSelvalueSEXP);
    rcpp_result_gen = Rcpp::wrap(opls(X, Y, ncomp, scale, maxiter, tol, regression, pcSelmethod, pcSelvalue));
    return rcpp_result_gen;
END_RCPP
}
// opls2
List opls2(arma::mat X, arma::mat Y, int ncomp, bool scale, double maxiter, double tol);
RcppExport SEXP _resemble_opls2(SEXP XSEXP, SEXP YSEXP, SEXP ncompSEXP, SEXP scaleSEXP, SEXP maxiterSEXP, SEXP tolSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type X(XSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type Y(YSEXP);
    Rcpp::traits::input_parameter< int >::type ncomp(ncompSEXP);
    Rcpp::traits::input_parameter< bool >::type scale(scaleSEXP);
    Rcpp::traits::input_parameter< double >::type maxiter(maxiterSEXP);
    Rcpp::traits::input_parameter< double >::type tol(tolSEXP);
    rcpp_result_gen = Rcpp::wrap(opls2(X, Y, ncomp, scale, maxiter, tol));
    return rcpp_result_gen;
END_RCPP
}
// opls3
List opls3(arma::mat X, arma::mat Y, int ncomp, bool scale, double maxiter, double tol);
RcppExport SEXP _resemble_opls3(SEXP XSEXP, SEXP YSEXP, SEXP ncompSEXP, SEXP scaleSEXP, SEXP maxiterSEXP, SEXP tolSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type X(XSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type Y(YSEXP);
    Rcpp::traits::input_parameter< int >::type ncomp(ncompSEXP);
    Rcpp::traits::input_parameter< bool >::type scale(scaleSEXP);
    Rcpp::traits::input_parameter< double >::type maxiter(maxiterSEXP);
    Rcpp::traits::input_parameter< double >::type tol(tolSEXP);
    rcpp_result_gen = Rcpp::wrap(opls3(X, Y, ncomp, scale, maxiter, tol));
    return rcpp_result_gen;
END_RCPP
}
// fopls
List fopls(arma::mat X, arma::mat Y, int ncomp, bool scale, double maxiter, double tol);
RcppExport SEXP _resemble_fopls(SEXP XSEXP, SEXP YSEXP, SEXP ncompSEXP, SEXP scaleSEXP, SEXP maxiterSEXP, SEXP tolSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type X(XSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type Y(YSEXP);
    Rcpp::traits::input_parameter< int >::type ncomp(ncompSEXP);
    Rcpp::traits::input_parameter< bool >::type scale(scaleSEXP);
    Rcpp::traits::input_parameter< double >::type maxiter(maxiterSEXP);
    Rcpp::traits::input_parameter< double >::type tol(tolSEXP);
    rcpp_result_gen = Rcpp::wrap(fopls(X, Y, ncomp, scale, maxiter, tol));
    return rcpp_result_gen;
END_RCPP
}
// predopls
Rcpp::NumericMatrix predopls(arma::mat bo, arma::mat b, int ncomp, arma::mat newdata, bool scale, arma::mat Xscale);
RcppExport SEXP _resemble_predopls(SEXP boSEXP, SEXP bSEXP, SEXP ncompSEXP, SEXP newdataSEXP, SEXP scaleSEXP, SEXP XscaleSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type bo(boSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type b(bSEXP);
    Rcpp::traits::input_parameter< int >::type ncomp(ncompSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type newdata(newdataSEXP);
    Rcpp::traits::input_parameter< bool >::type scale(scaleSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type Xscale(XscaleSEXP);
    rcpp_result_gen = Rcpp::wrap(predopls(bo, b, ncomp, newdata, scale, Xscale));
    return rcpp_result_gen;
END_RCPP
}
// projectpls
Rcpp::NumericMatrix projectpls(arma::mat projectionm, int ncomp, arma::mat newdata, bool scale, arma::mat Xcenter, arma::mat Xscale);
RcppExport SEXP _resemble_projectpls(SEXP projectionmSEXP, SEXP ncompSEXP, SEXP newdataSEXP, SEXP scaleSEXP, SEXP XcenterSEXP, SEXP XscaleSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type projectionm(projectionmSEXP);
    Rcpp::traits::input_parameter< int >::type ncomp(ncompSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type newdata(newdataSEXP);
    Rcpp::traits::input_parameter< bool >::type scale(scaleSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type Xcenter(XcenterSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type Xscale(XscaleSEXP);
    rcpp_result_gen = Rcpp::wrap(projectpls(projectionm, ncomp, newdata, scale, Xcenter, Xscale));
    return rcpp_result_gen;
END_RCPP
}
// waplswCpp
Rcpp::NumericMatrix waplswCpp(arma::mat projectionm, arma::mat xloadings, arma::mat coefficients, arma::mat newX, int minF, int maxF, bool scale, arma::mat Xcenter, arma::mat Xscale);
RcppExport SEXP _resemble_waplswCpp(SEXP projectionmSEXP, SEXP xloadingsSEXP, SEXP coefficientsSEXP, SEXP newXSEXP, SEXP minFSEXP, SEXP maxFSEXP, SEXP scaleSEXP, SEXP XcenterSEXP, SEXP XscaleSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type projectionm(projectionmSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type xloadings(xloadingsSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type coefficients(coefficientsSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type newX(newXSEXP);
    Rcpp::traits::input_parameter< int >::type minF(minFSEXP);
    Rcpp::traits::input_parameter< int >::type maxF(maxFSEXP);
    Rcpp::traits::input_parameter< bool >::type scale(scaleSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type Xcenter(XcenterSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type Xscale(XscaleSEXP);
    rcpp_result_gen = Rcpp::wrap(waplswCpp(projectionm, xloadings, coefficients, newX, minF, maxF, scale, Xcenter, Xscale));
    return rcpp_result_gen;
END_RCPP
}
// pplscv_cpp
List pplscv_cpp(arma::mat X, arma::mat Y, bool scale, String method, arma::mat mindices, arma::mat pindices, int minF, int ncomp, arma::mat newX, double maxiter, double tol, arma::mat waplsgrid);
RcppExport SEXP _resemble_pplscv_cpp(SEXP XSEXP, SEXP YSEXP, SEXP scaleSEXP, SEXP methodSEXP, SEXP mindicesSEXP, SEXP pindicesSEXP, SEXP minFSEXP, SEXP ncompSEXP, SEXP newXSEXP, SEXP maxiterSEXP, SEXP tolSEXP, SEXP waplsgridSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type X(XSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type Y(YSEXP);
    Rcpp::traits::input_parameter< bool >::type scale(scaleSEXP);
    Rcpp::traits::input_parameter< String >::type method(methodSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type mindices(mindicesSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type pindices(pindicesSEXP);
    Rcpp::traits::input_parameter< int >::type minF(minFSEXP);
    Rcpp::traits::input_parameter< int >::type ncomp(ncompSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type newX(newXSEXP);
    Rcpp::traits::input_parameter< double >::type maxiter(maxiterSEXP);
    Rcpp::traits::input_parameter< double >::type tol(tolSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type waplsgrid(waplsgridSEXP);
    rcpp_result_gen = Rcpp::wrap(pplscv_cpp(X, Y, scale, method, mindices, pindices, minF, ncomp, newX, maxiter, tol, waplsgrid));
    return rcpp_result_gen;
END_RCPP
}
// gprdp
List gprdp(arma::mat X, arma::mat Y, float noisev, bool scale);
RcppExport SEXP _resemble_gprdp(SEXP XSEXP, SEXP YSEXP, SEXP noisevSEXP, SEXP scaleSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type X(XSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type Y(YSEXP);
    Rcpp::traits::input_parameter< float >::type noisev(noisevSEXP);
    Rcpp::traits::input_parameter< bool >::type scale(scaleSEXP);
    rcpp_result_gen = Rcpp::wrap(gprdp(X, Y, noisev, scale));
    return rcpp_result_gen;
END_RCPP
}
// predgprdp
NumericVector predgprdp(arma::mat Xz, arma::mat alpha, arma::mat newdata, bool scale, arma::mat Xcenter, arma::mat Xscale, arma::mat Ycenter, arma::mat Yscale);
RcppExport SEXP _resemble_predgprdp(SEXP XzSEXP, SEXP alphaSEXP, SEXP newdataSEXP, SEXP scaleSEXP, SEXP XcenterSEXP, SEXP XscaleSEXP, SEXP YcenterSEXP, SEXP YscaleSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type Xz(XzSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type alpha(alphaSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type newdata(newdataSEXP);
    Rcpp::traits::input_parameter< bool >::type scale(scaleSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type Xcenter(XcenterSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type Xscale(XscaleSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type Ycenter(YcenterSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type Yscale(YscaleSEXP);
    rcpp_result_gen = Rcpp::wrap(predgprdp(Xz, alpha, newdata, scale, Xcenter, Xscale, Ycenter, Yscale));
    return rcpp_result_gen;
END_RCPP
}
// pgpcv_cpp
List pgpcv_cpp(arma::mat X, arma::mat Y, arma::mat mindices, arma::mat pindices, float noisev, bool scale);
RcppExport SEXP _resemble_pgpcv_cpp(SEXP XSEXP, SEXP YSEXP, SEXP mindicesSEXP, SEXP pindicesSEXP, SEXP noisevSEXP, SEXP scaleSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type X(XSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type Y(YSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type mindices(mindicesSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type pindices(pindicesSEXP);
    Rcpp::traits::input_parameter< float >::type noisev(noisevSEXP);
    Rcpp::traits::input_parameter< bool >::type scale(scaleSEXP);
    rcpp_result_gen = Rcpp::wrap(pgpcv_cpp(X, Y, mindices, pindices, noisev, scale));
    return rcpp_result_gen;
END_RCPP
}
// which_min
NumericVector which_min(NumericMatrix X, int cores);
RcppExport SEXP _resemble_which_min(SEXP XSEXP, SEXP coresSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type X(XSEXP);
    Rcpp::traits::input_parameter< int >::type cores(coresSEXP);
    rcpp_result_gen = Rcpp::wrap(which_min(X, cores));
    return rcpp_result_gen;
END_RCPP
}
// which_minV
NumericVector which_minV(NumericVector X, int cores);
RcppExport SEXP _resemble_which_minV(SEXP XSEXP, SEXP coresSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type X(XSEXP);
    Rcpp::traits::input_parameter< int >::type cores(coresSEXP);
    rcpp_result_gen = Rcpp::wrap(which_minV(X, cores));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_resemble_fastDist", (DL_FUNC) &_resemble_fastDist, 3},
    {"_resemble_fastDistVV", (DL_FUNC) &_resemble_fastDistVV, 2},
    {"_resemble_fastDistVVL", (DL_FUNC) &_resemble_fastDistVVL, 1},
    {"_resemble_minDissV", (DL_FUNC) &_resemble_minDissV, 2},
    {"_resemble_eigenMapMatMult", (DL_FUNC) &_resemble_eigenMapMatMult, 2},
    {"_resemble_movcorDist", (DL_FUNC) &_resemble_movcorDist, 3},
    {"_resemble_wcolSds", (DL_FUNC) &_resemble_wcolSds, 1},
    {"_resemble_colSds", (DL_FUNC) &_resemble_colSds, 1},
    {"_resemble_cms", (DL_FUNC) &_resemble_cms, 1},
    {"_resemble_cSums", (DL_FUNC) &_resemble_cSums, 1},
    {"_resemble_opls", (DL_FUNC) &_resemble_opls, 9},
    {"_resemble_opls2", (DL_FUNC) &_resemble_opls2, 6},
    {"_resemble_opls3", (DL_FUNC) &_resemble_opls3, 6},
    {"_resemble_fopls", (DL_FUNC) &_resemble_fopls, 6},
    {"_resemble_predopls", (DL_FUNC) &_resemble_predopls, 6},
    {"_resemble_projectpls", (DL_FUNC) &_resemble_projectpls, 6},
    {"_resemble_waplswCpp", (DL_FUNC) &_resemble_waplswCpp, 9},
    {"_resemble_pplscv_cpp", (DL_FUNC) &_resemble_pplscv_cpp, 12},
    {"_resemble_gprdp", (DL_FUNC) &_resemble_gprdp, 4},
    {"_resemble_predgprdp", (DL_FUNC) &_resemble_predgprdp, 8},
    {"_resemble_pgpcv_cpp", (DL_FUNC) &_resemble_pgpcv_cpp, 6},
    {"_resemble_which_min", (DL_FUNC) &_resemble_which_min, 2},
    {"_resemble_which_minV", (DL_FUNC) &_resemble_which_minV, 2},
    {NULL, NULL, 0}
};

RcppExport void R_init_resemble(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
