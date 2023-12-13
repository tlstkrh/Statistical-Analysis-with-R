#include <Rcpp.h>

// Rcpp 함수 정의
// [[Rcpp::export]]
Rcpp::NumericVector modifyVector(Rcpp::NumericVector a) {
  // 벡터의 특정 원소 변경
  a[2] = 9;
  
  return a;
}