// Generated by cpp11: do not edit by hand
// clang-format off

#include <cpp11/R.hpp>
#include <Rcpp.h>
using namespace Rcpp;
#include "cpp11/declarations.hpp"

// update.cpp
cpp11::writable::strings C_local_tz();
extern "C" SEXP _lubridate_C_local_tz() {
  BEGIN_CPP11
    return cpp11::as_sexp(C_local_tz());
  END_CPP11
}
// update.cpp
Rcpp::LogicalVector C_valid_tz(const Rcpp::CharacterVector& tz_name);
extern "C" SEXP _lubridate_C_valid_tz(SEXP tz_name) {
  BEGIN_CPP11
    return cpp11::as_sexp(C_valid_tz(cpp11::as_cpp<cpp11::decay_t<const Rcpp::CharacterVector&>>(tz_name)));
  END_CPP11
}
// update.cpp
Rcpp::newDatetimeVector C_update_dt(const Rcpp::NumericVector& dt, const Rcpp::IntegerVector& year, const Rcpp::IntegerVector& month, const Rcpp::IntegerVector& yday, const Rcpp::IntegerVector& mday, const Rcpp::IntegerVector& wday, const Rcpp::IntegerVector& hour, const Rcpp::IntegerVector& minute, const Rcpp::NumericVector& second, const SEXP tz, const bool roll, const int week_start);
extern "C" SEXP _lubridate_C_update_dt(SEXP dt, SEXP year, SEXP month, SEXP yday, SEXP mday, SEXP wday, SEXP hour, SEXP minute, SEXP second, SEXP tz, SEXP roll, SEXP week_start) {
  BEGIN_CPP11
    return cpp11::as_sexp(C_update_dt(cpp11::as_cpp<cpp11::decay_t<const Rcpp::NumericVector&>>(dt), cpp11::as_cpp<cpp11::decay_t<const Rcpp::IntegerVector&>>(year), cpp11::as_cpp<cpp11::decay_t<const Rcpp::IntegerVector&>>(month), cpp11::as_cpp<cpp11::decay_t<const Rcpp::IntegerVector&>>(yday), cpp11::as_cpp<cpp11::decay_t<const Rcpp::IntegerVector&>>(mday), cpp11::as_cpp<cpp11::decay_t<const Rcpp::IntegerVector&>>(wday), cpp11::as_cpp<cpp11::decay_t<const Rcpp::IntegerVector&>>(hour), cpp11::as_cpp<cpp11::decay_t<const Rcpp::IntegerVector&>>(minute), cpp11::as_cpp<cpp11::decay_t<const Rcpp::NumericVector&>>(second), cpp11::as_cpp<cpp11::decay_t<const SEXP>>(tz), cpp11::as_cpp<cpp11::decay_t<const bool>>(roll), cpp11::as_cpp<cpp11::decay_t<const int>>(week_start)));
  END_CPP11
}
// update.cpp
Rcpp::newDatetimeVector C_force_tz(const Rcpp::NumericVector dt, const Rcpp::CharacterVector tz, const bool roll);
extern "C" SEXP _lubridate_C_force_tz(SEXP dt, SEXP tz, SEXP roll) {
  BEGIN_CPP11
    return cpp11::as_sexp(C_force_tz(cpp11::as_cpp<cpp11::decay_t<const Rcpp::NumericVector>>(dt), cpp11::as_cpp<cpp11::decay_t<const Rcpp::CharacterVector>>(tz), cpp11::as_cpp<cpp11::decay_t<const bool>>(roll)));
  END_CPP11
}
// update.cpp
Rcpp::newDatetimeVector C_force_tzs(const Rcpp::NumericVector dt, const Rcpp::CharacterVector tzs, const Rcpp::CharacterVector tz_out, const bool roll);
extern "C" SEXP _lubridate_C_force_tzs(SEXP dt, SEXP tzs, SEXP tz_out, SEXP roll) {
  BEGIN_CPP11
    return cpp11::as_sexp(C_force_tzs(cpp11::as_cpp<cpp11::decay_t<const Rcpp::NumericVector>>(dt), cpp11::as_cpp<cpp11::decay_t<const Rcpp::CharacterVector>>(tzs), cpp11::as_cpp<cpp11::decay_t<const Rcpp::CharacterVector>>(tz_out), cpp11::as_cpp<cpp11::decay_t<const bool>>(roll)));
  END_CPP11
}
// update.cpp
Rcpp::NumericVector C_local_time(const Rcpp::NumericVector dt, const Rcpp::CharacterVector tzs);
extern "C" SEXP _lubridate_C_local_time(SEXP dt, SEXP tzs) {
  BEGIN_CPP11
    return cpp11::as_sexp(C_local_time(cpp11::as_cpp<cpp11::decay_t<const Rcpp::NumericVector>>(dt), cpp11::as_cpp<cpp11::decay_t<const Rcpp::CharacterVector>>(tzs)));
  END_CPP11
}

extern "C" {
/* .Call calls */
extern SEXP _lubridate_C_force_tz(SEXP, SEXP, SEXP);
extern SEXP _lubridate_C_force_tzs(SEXP, SEXP, SEXP, SEXP);
extern SEXP _lubridate_C_local_time(SEXP, SEXP);
extern SEXP _lubridate_C_local_tz();
extern SEXP _lubridate_C_update_dt(SEXP, SEXP, SEXP, SEXP, SEXP, SEXP, SEXP, SEXP, SEXP, SEXP, SEXP, SEXP);
extern SEXP _lubridate_C_valid_tz(SEXP);
extern SEXP C_make_d(SEXP, SEXP, SEXP);
extern SEXP C_parse_dt(SEXP, SEXP, SEXP, SEXP, SEXP);
extern SEXP C_parse_hms(SEXP, SEXP);
extern SEXP C_parse_period(SEXP);

static const R_CallMethodDef CallEntries[] = {
    {"_lubridate_C_force_tz",   (DL_FUNC) &_lubridate_C_force_tz,    3},
    {"_lubridate_C_force_tzs",  (DL_FUNC) &_lubridate_C_force_tzs,   4},
    {"_lubridate_C_local_time", (DL_FUNC) &_lubridate_C_local_time,  2},
    {"_lubridate_C_local_tz",   (DL_FUNC) &_lubridate_C_local_tz,    0},
    {"_lubridate_C_update_dt",  (DL_FUNC) &_lubridate_C_update_dt,  12},
    {"_lubridate_C_valid_tz",   (DL_FUNC) &_lubridate_C_valid_tz,    1},
    {"C_make_d",                (DL_FUNC) &C_make_d,                 3},
    {"C_parse_dt",              (DL_FUNC) &C_parse_dt,               5},
    {"C_parse_hms",             (DL_FUNC) &C_parse_hms,              2},
    {"C_parse_period",          (DL_FUNC) &C_parse_period,           1},
    {NULL, NULL, 0}
};
}

extern "C" void R_init_lubridate(DllInfo* dll){
  R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
  R_useDynamicSymbols(dll, FALSE);
  R_forceSymbols(dll, TRUE);
}
