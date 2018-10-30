#ifndef R_COLOURVALUES_FORMAT_H
#define R_COLOURVALUES_FORMAT_H

#include <Rcpp.h>
#include <iostream>
#include <boost/date_time.hpp>
// #include <boost/lexical_cast.hpp>

// [[Rcpp::depends(BH)]]

namespace colourvalues {
namespace format {

  Rcpp::StringVector date_to_string( SEXP v, int n ) {

    int i;
    Rcpp::NumericVector nv = Rcpp::as< Rcpp::NumericVector >( v );
    Rcpp::StringVector sv( n );

    for ( i = 0; i < n; i++ ) {
      Rcpp::Date d = nv[i];
      boost::gregorian::date gd = boost::gregorian::date(d.getYear(), d.getMonth(), d.getDay());
      std::string s = boost::gregorian::to_iso_extended_string( gd );
      sv[i] = s.c_str();
    }

    return sv;
  }

  Rcpp::StringVector number_to_string( SEXP v, int n, int dp) {
    int i;
    Rcpp::StringVector sv( n );
    Rcpp::NumericVector nv = Rcpp::as< Rcpp::NumericVector >( v );
    // TODO( implement decimal-places )
    for ( i = 0; i < n; i++) {
      std::ostringstream os;
      os << std::fixed << std::setprecision( dp ) << nv[i];
      std::string s = os.str();
      sv[i] = s.c_str();
    }

    return sv;
  }

  Rcpp::StringVector format_summary( SEXP summary_values, std::string format_type, int n_summaries, int digits ) {
    if (format_type == "number" ) {
      return colourvalues::format::number_to_string( summary_values, n_summaries, digits);
    } else if ( format_type == "date" ) {
      return colourvalues::format::date_to_string( summary_values, n_summaries );
    } else {
      Rcpp::stop("unsupported format type");
    }

    return ""; // never reacehd
  }
} // namespace format
} // namespace colourvalues



#endif
