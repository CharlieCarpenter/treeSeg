#include "treeseg.h"

// [[Rcpp::export]]
double mlCost_CC(NumericMatrix X, NumericMatrix K, NumericVector R,
                 double s2, double df, int fam){
  
  // Score Statistic
  
  // Projection Matrix
  NumericMatrix I(X.nrow(),X.nrow());
  I.fill_diag(1.0); // Identity Matrix

  NumericMatrix XtX = transpose(X) %*% X;
  NumericMatrix P0 = I - X * inv(XtX) * transpose(X);
  
  // if(fam == 0){
  //   for(int i = 0; i < n; i++){
  //     cost+= y[i];
  //   }
  // }
  
  if(fam == 1){
    arma::mat PKP = P0 * K * P0;
    double Q = R * PKP * R / s2*df;
    double sqrtQ = sqrt(Q)
  }
  
  return sqrtQ;
}