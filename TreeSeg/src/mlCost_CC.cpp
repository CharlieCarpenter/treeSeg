#include "treeseg.h"

// [[Rcpp::export]]
double mlCost_CC(arma::mat X, arma::mat K, arma::vec R,
                 double s2, double df, int fam){
  
  // Score Statistic
  
  // Projection Matrix
  arma::mat I = eye(X.n_rows, X.n_rows);
  arma::mat XtX = X.t() * X;
  arma::mat P0 = I - X * inv_sympd(XtX) * X.t();
  
  // if(fam == 0){
  //   for(int i = 0; i < n; i++){
  //     cost+= y[i];
  //   }
  // }
  
  if(fam == 1){
    arma::mat PKP = P0 * K * P0;
    double Q = R * PKP * R / s2*df;
    double sqrtQ = sqrt(Q);
  }
  
  return sqrtQ;
}