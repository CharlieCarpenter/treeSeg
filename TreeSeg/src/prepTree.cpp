#include "treeseg.h"

//' @useDynLib treeSeg
//' @importFrom Rcpp evalCpp

// [[Rcpp::export]]
List prepTree(List& tree){
  // tree preparation
  
  int i;
  int root=-1;
  
  StringVector tipLabel=tree["tip.label"];
  int Nnode=tree["Nnode"];
  NumericMatrix edge=tree["edge"];
  NumericVector childs=edge( _, 1);
  
  int pT1 = 1;
  printf("pT1 %i \n", pT1);
  
  //add root
  for(i=Nnode+1;i<=Nnode+ tipLabel.size();i++){
    if(std::find(childs.begin(),childs.end(),i)==childs.end()){
      root=i;
    }
  }
  int pT2 = 2;
  printf("pT2 %i \n", pT2);
  
  tree["root"]=root;
  
  //add ancestor matrix
  NumericMatrix ancM(1,tipLabel.size());
  NumericVector anc(tipLabel.size());
  bool flag=false;
  
  int pT3 = 3;
  printf("pT3 %i \n", pT3);
  
  for(i=0;i<tipLabel.size();i++){
    ancM(0,i)=i+1;
  }
  
  int pT4 = 4;
  printf("pT4 %i \n", pT4);
  
  int cnt = 0;
    
  while(!flag){
    cnt = cnt + 1;
    printf("cnt is %i\n", cnt);
    
    flag=true;
    for(i=0; i<tipLabel.size(); i++){
      
      // int p=1;
      // printf("prepTree %i", p);
      
      anc[i]= ancestor(ancM(0,i), tree);
      printf("anc[i] = %f", anc[i]);
      
      // int pp=2;
      // printf("prepTree %i", pp);
      
      flag=flag&&(anc[i]==root);
      
      // int ppp=3;
      // printf("prepTree %i", ppp);
    }
    
    int pppp=4;
    printf("prepTree %i", pppp);
    
    ancM=addInMatrix(anc,ancM);
    
    int ppppp=5;
    printf("prepTree %i", ppppp);
  }
  tree["ancM"]=ancM;
  
  return tree;
}
