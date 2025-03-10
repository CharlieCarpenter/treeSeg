// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

#ifdef RCPP_USE_GLOBAL_ROSTREAM
Rcpp::Rostream<true>&  Rcpp::Rcout = Rcpp::Rcpp_cout_get();
Rcpp::Rostream<false>& Rcpp::Rcerr = Rcpp::Rcpp_cerr_get();
#endif

// addInMatrix
NumericMatrix addInMatrix(NumericVector vec, NumericMatrix M);
RcppExport SEXP _treeSeg_addInMatrix(SEXP vecSEXP, SEXP MSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type vec(vecSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type M(MSEXP);
    rcpp_result_gen = Rcpp::wrap(addInMatrix(vec, M));
    return rcpp_result_gen;
END_RCPP
}
// allComb
arma::mat allComb(IntegerVector lengths);
RcppExport SEXP _treeSeg_allComb(SEXP lengthsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< IntegerVector >::type lengths(lengthsSEXP);
    rcpp_result_gen = Rcpp::wrap(allComb(lengths));
    return rcpp_result_gen;
END_RCPP
}
// ancestor
int ancestor(int node, List tree);
RcppExport SEXP _treeSeg_ancestor(SEXP nodeSEXP, SEXP treeSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type node(nodeSEXP);
    Rcpp::traits::input_parameter< List >::type tree(treeSEXP);
    rcpp_result_gen = Rcpp::wrap(ancestor(node, tree));
    return rcpp_result_gen;
END_RCPP
}
// bouPos
double bouPos(int li, int ri, int allInt, int liStart);
RcppExport SEXP _treeSeg_bouPos(SEXP liSEXP, SEXP riSEXP, SEXP allIntSEXP, SEXP liStartSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type li(liSEXP);
    Rcpp::traits::input_parameter< int >::type ri(riSEXP);
    Rcpp::traits::input_parameter< int >::type allInt(allIntSEXP);
    Rcpp::traits::input_parameter< int >::type liStart(liStartSEXP);
    rcpp_result_gen = Rcpp::wrap(bouPos(li, ri, allInt, liStart));
    return rcpp_result_gen;
END_RCPP
}
// boundsCall
List boundsCall(const Rcpp::NumericVector& x, const Rcpp::NumericVector& lengths, double alpha, double q, int fam);
RcppExport SEXP _treeSeg_boundsCall(SEXP xSEXP, SEXP lengthsSEXP, SEXP alphaSEXP, SEXP qSEXP, SEXP famSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Rcpp::NumericVector& >::type x(xSEXP);
    Rcpp::traits::input_parameter< const Rcpp::NumericVector& >::type lengths(lengthsSEXP);
    Rcpp::traits::input_parameter< double >::type alpha(alphaSEXP);
    Rcpp::traits::input_parameter< double >::type q(qSEXP);
    Rcpp::traits::input_parameter< int >::type fam(famSEXP);
    rcpp_result_gen = Rcpp::wrap(boundsCall(x, lengths, alpha, q, fam));
    return rcpp_result_gen;
END_RCPP
}
// boundsCall_CC
List boundsCall_CC(const arma::vec x, const Rcpp::NumericVector& lengths, double alpha, double q, int fam);
RcppExport SEXP _treeSeg_boundsCall_CC(SEXP xSEXP, SEXP lengthsSEXP, SEXP alphaSEXP, SEXP qSEXP, SEXP famSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::vec >::type x(xSEXP);
    Rcpp::traits::input_parameter< const Rcpp::NumericVector& >::type lengths(lengthsSEXP);
    Rcpp::traits::input_parameter< double >::type alpha(alphaSEXP);
    Rcpp::traits::input_parameter< double >::type q(qSEXP);
    Rcpp::traits::input_parameter< int >::type fam(famSEXP);
    rcpp_result_gen = Rcpp::wrap(boundsCall_CC(x, lengths, alpha, q, fam));
    return rcpp_result_gen;
END_RCPP
}
// colSums
NumericVector colSums(const arma::mat& X);
RcppExport SEXP _treeSeg_colSums(SEXP XSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::mat& >::type X(XSEXP);
    rcpp_result_gen = Rcpp::wrap(colSums(X));
    return rcpp_result_gen;
END_RCPP
}
// getNewCandidates
List getNewCandidates(int subroot, int aN, List tree, IntegerVector minIVar, LogicalMatrix isOffMat, bool without);
RcppExport SEXP _treeSeg_getNewCandidates(SEXP subrootSEXP, SEXP aNSEXP, SEXP treeSEXP, SEXP minIVarSEXP, SEXP isOffMatSEXP, SEXP withoutSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type subroot(subrootSEXP);
    Rcpp::traits::input_parameter< int >::type aN(aNSEXP);
    Rcpp::traits::input_parameter< List >::type tree(treeSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type minIVar(minIVarSEXP);
    Rcpp::traits::input_parameter< LogicalMatrix >::type isOffMat(isOffMatSEXP);
    Rcpp::traits::input_parameter< bool >::type without(withoutSEXP);
    rcpp_result_gen = Rcpp::wrap(getNewCandidates(subroot, aN, tree, minIVar, isOffMat, without));
    return rcpp_result_gen;
END_RCPP
}
// getOffspringTip
IntegerVector getOffspringTip(int node, List tree);
RcppExport SEXP _treeSeg_getOffspringTip(SEXP nodeSEXP, SEXP treeSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type node(nodeSEXP);
    Rcpp::traits::input_parameter< List >::type tree(treeSEXP);
    rcpp_result_gen = Rcpp::wrap(getOffspringTip(node, tree));
    return rcpp_result_gen;
END_RCPP
}
// getOffspringTipB
IntegerVector getOffspringTipB(int node, List tree);
RcppExport SEXP _treeSeg_getOffspringTipB(SEXP nodeSEXP, SEXP treeSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type node(nodeSEXP);
    Rcpp::traits::input_parameter< List >::type tree(treeSEXP);
    rcpp_result_gen = Rcpp::wrap(getOffspringTipB(node, tree));
    return rcpp_result_gen;
END_RCPP
}
// mlCost
double mlCost(NumericVector y, int fam);
RcppExport SEXP _treeSeg_mlCost(SEXP ySEXP, SEXP famSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type y(ySEXP);
    Rcpp::traits::input_parameter< int >::type fam(famSEXP);
    rcpp_result_gen = Rcpp::wrap(mlCost(y, fam));
    return rcpp_result_gen;
END_RCPP
}
// mlCost_CC
double mlCost_CC(arma::mat X, arma::mat K, arma::vec R, double s2, double df, int fam);
RcppExport SEXP _treeSeg_mlCost_CC(SEXP XSEXP, SEXP KSEXP, SEXP RSEXP, SEXP s2SEXP, SEXP dfSEXP, SEXP famSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type X(XSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type K(KSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type R(RSEXP);
    Rcpp::traits::input_parameter< double >::type s2(s2SEXP);
    Rcpp::traits::input_parameter< double >::type df(dfSEXP);
    Rcpp::traits::input_parameter< int >::type fam(famSEXP);
    rcpp_result_gen = Rcpp::wrap(mlCost_CC(X, K, R, s2, df, fam));
    return rcpp_result_gen;
END_RCPP
}
// mycombn
arma::umat mycombn(double n, double k);
RcppExport SEXP _treeSeg_mycombn(SEXP nSEXP, SEXP kSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< double >::type n(nSEXP);
    Rcpp::traits::input_parameter< double >::type k(kSEXP);
    rcpp_result_gen = Rcpp::wrap(mycombn(n, k));
    return rcpp_result_gen;
END_RCPP
}
// offspring
IntegerVector offspring(int node, List tree);
RcppExport SEXP _treeSeg_offspring(SEXP nodeSEXP, SEXP treeSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type node(nodeSEXP);
    Rcpp::traits::input_parameter< List >::type tree(treeSEXP);
    rcpp_result_gen = Rcpp::wrap(offspring(node, tree));
    return rcpp_result_gen;
END_RCPP
}
// offspringAll
IntegerVector offspringAll(int node, List tree);
RcppExport SEXP _treeSeg_offspringAll(SEXP nodeSEXP, SEXP treeSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type node(nodeSEXP);
    Rcpp::traits::input_parameter< List >::type tree(treeSEXP);
    rcpp_result_gen = Rcpp::wrap(offspringAll(node, tree));
    return rcpp_result_gen;
END_RCPP
}
// offspringDiff
NumericVector offspringDiff(int Node, NumericVector node, List tree);
RcppExport SEXP _treeSeg_offspringDiff(SEXP NodeSEXP, SEXP nodeSEXP, SEXP treeSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type Node(NodeSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type node(nodeSEXP);
    Rcpp::traits::input_parameter< List >::type tree(treeSEXP);
    rcpp_result_gen = Rcpp::wrap(offspringDiff(Node, node, tree));
    return rcpp_result_gen;
END_RCPP
}
// offspringDiffTip
NumericVector offspringDiffTip(int Node, NumericVector node, List tree);
RcppExport SEXP _treeSeg_offspringDiffTip(SEXP NodeSEXP, SEXP nodeSEXP, SEXP treeSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type Node(NodeSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type node(nodeSEXP);
    Rcpp::traits::input_parameter< List >::type tree(treeSEXP);
    rcpp_result_gen = Rcpp::wrap(offspringDiffTip(Node, node, tree));
    return rcpp_result_gen;
END_RCPP
}
// prepTree
List prepTree(List& tree);
RcppExport SEXP _treeSeg_prepTree(SEXP treeSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List& >::type tree(treeSEXP);
    rcpp_result_gen = Rcpp::wrap(prepTree(tree));
    return rcpp_result_gen;
END_RCPP
}
// segTree
List segTree(NumericVector y, NumericVector lengths, List& tree, double q, double alpha, int fam);
RcppExport SEXP _treeSeg_segTree(SEXP ySEXP, SEXP lengthsSEXP, SEXP treeSEXP, SEXP qSEXP, SEXP alphaSEXP, SEXP famSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type y(ySEXP);
    Rcpp::traits::input_parameter< NumericVector >::type lengths(lengthsSEXP);
    Rcpp::traits::input_parameter< List& >::type tree(treeSEXP);
    Rcpp::traits::input_parameter< double >::type q(qSEXP);
    Rcpp::traits::input_parameter< double >::type alpha(alphaSEXP);
    Rcpp::traits::input_parameter< int >::type fam(famSEXP);
    rcpp_result_gen = Rcpp::wrap(segTree(y, lengths, tree, q, alpha, fam));
    return rcpp_result_gen;
END_RCPP
}
// segTree_CC
List segTree_CC(arma::mat K, arma::vec R, arma::mat mX, double s2, double df, NumericVector lengths, List& tree, double q, double alpha, int fam);
RcppExport SEXP _treeSeg_segTree_CC(SEXP KSEXP, SEXP RSEXP, SEXP mXSEXP, SEXP s2SEXP, SEXP dfSEXP, SEXP lengthsSEXP, SEXP treeSEXP, SEXP qSEXP, SEXP alphaSEXP, SEXP famSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type K(KSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type R(RSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type mX(mXSEXP);
    Rcpp::traits::input_parameter< double >::type s2(s2SEXP);
    Rcpp::traits::input_parameter< double >::type df(dfSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type lengths(lengthsSEXP);
    Rcpp::traits::input_parameter< List& >::type tree(treeSEXP);
    Rcpp::traits::input_parameter< double >::type q(qSEXP);
    Rcpp::traits::input_parameter< double >::type alpha(alphaSEXP);
    Rcpp::traits::input_parameter< int >::type fam(famSEXP);
    rcpp_result_gen = Rcpp::wrap(segTree_CC(K, R, mX, s2, df, lengths, tree, q, alpha, fam));
    return rcpp_result_gen;
END_RCPP
}
// sortComb
List sortComb(List& ncomb, NumericVector& cost);
RcppExport SEXP _treeSeg_sortComb(SEXP ncombSEXP, SEXP costSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List& >::type ncomb(ncombSEXP);
    Rcpp::traits::input_parameter< NumericVector& >::type cost(costSEXP);
    rcpp_result_gen = Rcpp::wrap(sortComb(ncomb, cost));
    return rcpp_result_gen;
END_RCPP
}
// subsetSum
List subsetSum(arma::umat numbers, IntegerVector target, int maxSize);
RcppExport SEXP _treeSeg_subsetSum(SEXP numbersSEXP, SEXP targetSEXP, SEXP maxSizeSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::umat >::type numbers(numbersSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type target(targetSEXP);
    Rcpp::traits::input_parameter< int >::type maxSize(maxSizeSEXP);
    rcpp_result_gen = Rcpp::wrap(subsetSum(numbers, target, maxSize));
    return rcpp_result_gen;
END_RCPP
}
// vecmin
double vecmin(NumericVector x);
RcppExport SEXP _treeSeg_vecmin(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(vecmin(x));
    return rcpp_result_gen;
END_RCPP
}
// vecmax
double vecmax(NumericVector x);
RcppExport SEXP _treeSeg_vecmax(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(vecmax(x));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_treeSeg_addInMatrix", (DL_FUNC) &_treeSeg_addInMatrix, 2},
    {"_treeSeg_allComb", (DL_FUNC) &_treeSeg_allComb, 1},
    {"_treeSeg_ancestor", (DL_FUNC) &_treeSeg_ancestor, 2},
    {"_treeSeg_bouPos", (DL_FUNC) &_treeSeg_bouPos, 4},
    {"_treeSeg_boundsCall", (DL_FUNC) &_treeSeg_boundsCall, 5},
    {"_treeSeg_boundsCall_CC", (DL_FUNC) &_treeSeg_boundsCall_CC, 5},
    {"_treeSeg_colSums", (DL_FUNC) &_treeSeg_colSums, 1},
    {"_treeSeg_getNewCandidates", (DL_FUNC) &_treeSeg_getNewCandidates, 6},
    {"_treeSeg_getOffspringTip", (DL_FUNC) &_treeSeg_getOffspringTip, 2},
    {"_treeSeg_getOffspringTipB", (DL_FUNC) &_treeSeg_getOffspringTipB, 2},
    {"_treeSeg_mlCost", (DL_FUNC) &_treeSeg_mlCost, 2},
    {"_treeSeg_mlCost_CC", (DL_FUNC) &_treeSeg_mlCost_CC, 6},
    {"_treeSeg_mycombn", (DL_FUNC) &_treeSeg_mycombn, 2},
    {"_treeSeg_offspring", (DL_FUNC) &_treeSeg_offspring, 2},
    {"_treeSeg_offspringAll", (DL_FUNC) &_treeSeg_offspringAll, 2},
    {"_treeSeg_offspringDiff", (DL_FUNC) &_treeSeg_offspringDiff, 3},
    {"_treeSeg_offspringDiffTip", (DL_FUNC) &_treeSeg_offspringDiffTip, 3},
    {"_treeSeg_prepTree", (DL_FUNC) &_treeSeg_prepTree, 1},
    {"_treeSeg_segTree", (DL_FUNC) &_treeSeg_segTree, 6},
    {"_treeSeg_segTree_CC", (DL_FUNC) &_treeSeg_segTree_CC, 10},
    {"_treeSeg_sortComb", (DL_FUNC) &_treeSeg_sortComb, 2},
    {"_treeSeg_subsetSum", (DL_FUNC) &_treeSeg_subsetSum, 3},
    {"_treeSeg_vecmin", (DL_FUNC) &_treeSeg_vecmin, 1},
    {"_treeSeg_vecmax", (DL_FUNC) &_treeSeg_vecmax, 1},
    {NULL, NULL, 0}
};

RcppExport void R_init_treeSeg(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
