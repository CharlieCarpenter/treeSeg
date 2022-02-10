#include "treeseg.h"

// [[Rcpp::export]]
double mlCost_CC(arma::mat X, arma::mat K, NumericVector R,
                 double s2, double df, int fam){
  
  // Score Statistic
  
  // Projection Matrix
  arma::mat I = eye(mXm.n_row);
  arma::mat XtX = mXm.t() * mXm;
  arma::mat P0 = I - mXm * inv_sympd(XtX) * mXm.t();
  
  // if(fam == 0){
  //   for(int i = 0; i < n; i++){
  //     cost+= y[i];
  //   }
  // }
  
  if(fam == 1){
    arma::mat PKP = P0 * K * P0;
    double Q = transpose(R) * PKP * R / s2*df
  }
  
  return sqrt(Q);
}