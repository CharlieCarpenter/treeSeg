#include "treeseg.h"
#include <cmath>



// [[Rcpp::export]]
List boundsCall_CC(const arma::vec x, const Rcpp::NumericVector& lengths, double alpha, double q, int fam){
  // calls the bounds function from the stepR package
  
  
  // Obtain environment containing function
  Rcpp::Environment base("package:stepR"); 
  
  
  // Make function callable from C++
    Rcpp::Function bounds_r = base["bounds"];    
    
    
    List bounds(1);
    
    if(fam == 0){
      if(q == NA){
        bounds = bounds_r(Rcpp::_["y"] = x,
                          Rcpp::_["family"]  = "binomial",
                          Rcpp::_["param"]  = 1, Rcpp::_["alpha"]  = alpha, 
                          Rcpp::_["lengths"]  = lengths, 
                          Rcpp::_["penalty"] = "sqrt"); // example of additional param
      }
      else{
        bounds = bounds_r(Rcpp::_["y"] = x,
                          Rcpp::_["family"]  = "binomial",
                          Rcpp::_["param"]  = 1, Rcpp::_["q"]  = q, 
                          Rcpp::_["lengths"]  = lengths,
                          Rcpp::_["penalty"] = "sqrt"); // example of additional param
      }
      
      
    }else{
      
      int zzz = 1;
      int zz = 2;
      
      printf("In boundsCall_CC %i", zzz);
      
      if(q == NA){
        bounds = bounds_r(Rcpp::_["y"] = x,
                          Rcpp::_["alpha"]  = alpha, 
                          Rcpp::_["lengths"]  = lengths, 
                          Rcpp::_["penalty"] = "sqrt"); // example of additional param
       
        printf("In boundsCall_CC %i", zz);
        
      }
      else{
        bounds = bounds_r(Rcpp::_["y"] = x,
                          Rcpp::_["q"]  = q, 
                          Rcpp::_["lengths"]  = lengths,
                          Rcpp::_["penalty"] = "sqrt"); // example of additional param
      }
      
    }
    
    int z = 3;
    printf("In boundsCall_CC %i", z);
    
    // Return test object in list structure
    return bounds[0];
}