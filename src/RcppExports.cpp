// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

#ifdef RCPP_USE_GLOBAL_ROSTREAM
Rcpp::Rostream<true>&  Rcpp::Rcout = Rcpp::Rcpp_cout_get();
Rcpp::Rostream<false>& Rcpp::Rcerr = Rcpp::Rcpp_cerr_get();
#endif

// generate_individuals
NumericVector generate_individuals(const IntegerVector& region, const IntegerVector& head_income, const IntegerVector& size, const IntegerVector& renting, const S4& space, const int& n_neighbors, const NumericVector& race_rates);
RcppExport SEXP _redistribute_generate_individuals(SEXP regionSEXP, SEXP head_incomeSEXP, SEXP sizeSEXP, SEXP rentingSEXP, SEXP spaceSEXP, SEXP n_neighborsSEXP, SEXP race_ratesSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const IntegerVector& >::type region(regionSEXP);
    Rcpp::traits::input_parameter< const IntegerVector& >::type head_income(head_incomeSEXP);
    Rcpp::traits::input_parameter< const IntegerVector& >::type size(sizeSEXP);
    Rcpp::traits::input_parameter< const IntegerVector& >::type renting(rentingSEXP);
    Rcpp::traits::input_parameter< const S4& >::type space(spaceSEXP);
    Rcpp::traits::input_parameter< const int& >::type n_neighbors(n_neighborsSEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type race_rates(race_ratesSEXP);
    rcpp_result_gen = Rcpp::wrap(generate_individuals(region, head_income, size, renting, space, n_neighbors, race_rates));
    return rcpp_result_gen;
END_RCPP
}
// process_distribute
NumericVector process_distribute(const NumericMatrix& s, const IntegerVector& method, const CharacterVector& tid, const NumericVector& weight, const List& map, const bool& agg, const bool& balance);
RcppExport SEXP _redistribute_process_distribute(SEXP sSEXP, SEXP methodSEXP, SEXP tidSEXP, SEXP weightSEXP, SEXP mapSEXP, SEXP aggSEXP, SEXP balanceSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const NumericMatrix& >::type s(sSEXP);
    Rcpp::traits::input_parameter< const IntegerVector& >::type method(methodSEXP);
    Rcpp::traits::input_parameter< const CharacterVector& >::type tid(tidSEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type weight(weightSEXP);
    Rcpp::traits::input_parameter< const List& >::type map(mapSEXP);
    Rcpp::traits::input_parameter< const bool& >::type agg(aggSEXP);
    Rcpp::traits::input_parameter< const bool& >::type balance(balanceSEXP);
    rcpp_result_gen = Rcpp::wrap(process_distribute(s, method, tid, weight, map, agg, balance));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_redistribute_generate_individuals", (DL_FUNC) &_redistribute_generate_individuals, 7},
    {"_redistribute_process_distribute", (DL_FUNC) &_redistribute_process_distribute, 7},
    {NULL, NULL, 0}
};

RcppExport void R_init_redistribute(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
