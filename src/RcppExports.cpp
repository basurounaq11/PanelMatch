// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

// sumCpp
int sumCpp(Rcpp::IntegerVector x);
RcppExport SEXP _PanelMatch_sumCpp(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::IntegerVector >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(sumCpp(x));
    return rcpp_result_gen;
END_RCPP
}
// FindMatches
NumericMatrix FindMatches(IntegerVector unitIdx, IntegerVector timeIdx, IntegerVector treat);
RcppExport SEXP _PanelMatch_FindMatches(SEXP unitIdxSEXP, SEXP timeIdxSEXP, SEXP treatSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< IntegerVector >::type unitIdx(unitIdxSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type timeIdx(timeIdxSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type treat(treatSEXP);
    rcpp_result_gen = Rcpp::wrap(FindMatches(unitIdx, timeIdx, treat));
    return rcpp_result_gen;
END_RCPP
}
// all_sug
bool all_sug(LogicalVector x);
RcppExport SEXP _PanelMatch_all_sug(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< LogicalVector >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(all_sug(x));
    return rcpp_result_gen;
END_RCPP
}
// rbind_c
NumericMatrix rbind_c(NumericMatrix x, NumericMatrix y);
RcppExport SEXP _PanelMatch_rbind_c(SEXP xSEXP, SEXP ySEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type x(xSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type y(ySEXP);
    rcpp_result_gen = Rcpp::wrap(rbind_c(x, y));
    return rcpp_result_gen;
END_RCPP
}
// findDDmatched2
List findDDmatched2(int L, int F, NumericMatrix x1);
RcppExport SEXP _PanelMatch_findDDmatched2(SEXP LSEXP, SEXP FSEXP, SEXP x1SEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type L(LSEXP);
    Rcpp::traits::input_parameter< int >::type F(FSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type x1(x1SEXP);
    rcpp_result_gen = Rcpp::wrap(findDDmatched2(L, F, x1));
    return rcpp_result_gen;
END_RCPP
}

RcppExport void CalDID(void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *);
RcppExport void comp_OmegaHAC(void *, void *, void *, void *, void *, void *, void *, void *, void *);
RcppExport void comp_OmegaHC(void *, void *, void *, void *, void *, void *, void *, void *, void *);
RcppExport void Demean(void *, void *, void *, void *, void *);
RcppExport void DemeanDID(void *, void *, void *, void *, void *, void *, void *, void *);
RcppExport void GenTime(void *, void *, void *, void *);
RcppExport void GenWeightsDID(void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *);
RcppExport void GenWeightsFD(void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *);
RcppExport void GenWeightsMDID(void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *);
RcppExport void GenWeightsTime(void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *);
RcppExport void GenWeightsUnit(void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *);
RcppExport void Index(void *, void *, void *, void *, void *);
RcppExport void LamdaDID1(void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *);
RcppExport void LamdaDID2(void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *);
RcppExport void MDummy(void *, void *, void *, void *);
RcppExport void OmegaDiDHAC(void *, void *, void *, void *, void *, void *, void *, void *);
RcppExport void OmegaDiDHAC2(void *, void *, void *, void *, void *, void *, void *, void *);
RcppExport void OmegaHatHAC(void *, void *, void *, void *, void *, void *, void *);
RcppExport void OmegaHatHC(void *, void *, void *, void *, void *, void *, void *);
RcppExport void ProjectionM(void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *);
RcppExport void Transform(void *, void *, void *, void *, void *);
RcppExport void TwayDemean(void *, void *, void *, void *, void *, void *, void *);
RcppExport void VectorizeC(void *, void *, void *, void *, void *, void *, void *);
RcppExport void WDemean(void *, void *, void *, void *, void *, void *);
RcppExport void WWDemean(void *, void *, void *, void *, void *, void *);
RcppExport void XWXiSum(void *, void *, void *, void *, void *, void *, void *);
RcppExport void XXiSum(void *, void *, void *, void *, void *, void *);

static const R_CallMethodDef CallEntries[] = {
    {"_PanelMatch_sumCpp", (DL_FUNC) &_PanelMatch_sumCpp, 1},
    {"_PanelMatch_FindMatches", (DL_FUNC) &_PanelMatch_FindMatches, 3},
    {"_PanelMatch_all_sug", (DL_FUNC) &_PanelMatch_all_sug, 1},
    {"_PanelMatch_rbind_c", (DL_FUNC) &_PanelMatch_rbind_c, 2},
    {"_PanelMatch_findDDmatched2", (DL_FUNC) &_PanelMatch_findDDmatched2, 3},
    {"CalDID",         (DL_FUNC) &CalDID,         12},
    {"comp_OmegaHAC",  (DL_FUNC) &comp_OmegaHAC,   9},
    {"comp_OmegaHC",   (DL_FUNC) &comp_OmegaHC,    9},
    {"Demean",         (DL_FUNC) &Demean,          5},
    {"DemeanDID",      (DL_FUNC) &DemeanDID,       8},
    {"GenTime",        (DL_FUNC) &GenTime,         4},
    {"GenWeightsDID",  (DL_FUNC) &GenWeightsDID,  11},
    {"GenWeightsFD",   (DL_FUNC) &GenWeightsFD,   11},
    {"GenWeightsMDID", (DL_FUNC) &GenWeightsMDID, 13},
    {"GenWeightsTime", (DL_FUNC) &GenWeightsTime, 11},
    {"GenWeightsUnit", (DL_FUNC) &GenWeightsUnit, 11},
    {"Index",          (DL_FUNC) &Index,           5},
    {"LamdaDID1",      (DL_FUNC) &LamdaDID1,      14},
    {"LamdaDID2",      (DL_FUNC) &LamdaDID2,      14},
    {"MDummy",         (DL_FUNC) &MDummy,          4},
    {"OmegaDiDHAC",    (DL_FUNC) &OmegaDiDHAC,     8},
    {"OmegaDiDHAC2",   (DL_FUNC) &OmegaDiDHAC2,    8},
    {"OmegaHatHAC",    (DL_FUNC) &OmegaHatHAC,     7},
    {"OmegaHatHC",     (DL_FUNC) &OmegaHatHC,      7},
    {"ProjectionM",    (DL_FUNC) &ProjectionM,    17},
    {"Transform",      (DL_FUNC) &Transform,       5},
    {"TwayDemean",     (DL_FUNC) &TwayDemean,      7},
    {"VectorizeC",     (DL_FUNC) &VectorizeC,      7},
    {"WDemean",        (DL_FUNC) &WDemean,         6},
    {"WWDemean",       (DL_FUNC) &WWDemean,        6},
    {"XWXiSum",        (DL_FUNC) &XWXiSum,         7},
    {"XXiSum",         (DL_FUNC) &XXiSum,          6},
    {NULL, NULL, 0}
};

RcppExport void R_init_PanelMatch(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}