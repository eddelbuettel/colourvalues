#include <Rcpp.h>

#include "colourvalues/api.hpp"


// [[Rcpp::export]]
SEXP rcpp_colour_values_hex(
    SEXP x,
    SEXP palette,
    Rcpp::NumericVector& alpha,
    std::string na_colour = "#808080",
    bool include_alpha = true,
    bool format = false,
    std::string format_type = "numeric",
    int digits = 2,
    bool summary = false,
    int n_summaries = 0
  ) {

  //Rcpp::Rcout << "rcpp_colour_values_hex" << std::endl;
  //Rcpp::Rcout <<  "include_alpha: " << include_alpha << std::endl;
  //Rcpp::Rcout << "summary " << summary << std::endl;
  return colourvalues::api::colour_values_hex(
    x, palette, alpha, na_colour, include_alpha, format, format_type, digits, summary, n_summaries
  );
}


// [[Rcpp::export]]
SEXP rcpp_colour_values_rgb(
    SEXP x,
    SEXP palette,
    Rcpp::NumericVector& alpha,
    std::string na_colour = "#808080",
    bool include_alpha = true,
    bool format = false,
    std::string format_type = "numeric",
    int digits = 2,
    bool summary = false,
    int n_summaries = 0
) {

  //Rcpp::Rcout << "rcpp_colour_values_rgb" << std::endl;
  //Rcpp::Rcout <<  "include_alpha: " << include_alpha << std::endl;
  //Rcpp::Rcout << "summary " << summary << std::endl;
  return colourvalues::api::colour_values_rgb(
    x, palette, alpha, na_colour, include_alpha, format, format_type, digits, summary, n_summaries
  );
}


