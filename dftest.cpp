#include <Rcpp.h>

// 데이터 프레임에 행 추가하는 함수
// [[Rcpp::export]]
Rcpp::DataFrame addDataToDataFrame(Rcpp::DataFrame df,
                                   int id,
                                   std::string name,
                                   double value) {
  // 데이터 프레임의 행 추가
  Rcpp::DataFrame new_row = Rcpp::DataFrame::create(Rcpp::Named("ID", id),
                                                    Rcpp::Named("Name", name),
                                                    Rcpp::Named("Value", value));
  
  // 현재 데이터 프레임의 행 개수 확인
  int n = df.nrow();
  
  // 새로운 행 추가
  df(n, Rcpp::_) = new_row;
  
  return df;
}
