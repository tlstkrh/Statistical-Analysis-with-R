#include <Rcpp.h>
#include <iostream>
using namespace Rcpp;


// 함수 정의
void exampleFunction() {
  Rcpp::NumericVector a = {1, 2, 3, 4, 5};
  
  // Rcpp::Rcout 사용
  Rcpp::Rcout << a.length() << std::endl;
  Rcpp::Rcout << a.size() << std::endl;
  Rcpp::Rcout << a << std::endl;  // 전체 벡터 출력
}

// 함수 내보내기 (void 반환 타입을 갖지 않도록 수정)
// [[Rcpp::export]]
void exportExampleFunction() {
  exampleFunction();
}
