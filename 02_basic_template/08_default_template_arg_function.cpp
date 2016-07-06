// Copyright (c) 2014
// Akira Takahashi, Fumiki Fukuda.
// Released under the CC0 1.0 Universal license.

#include <iostream>
#include <iomanip>

// XXX 引数テンプレート。型にあった値を返却してくれる仕組み
template <class T = double> // 省略時はdoubleとみなす
T pi() { return T(3.1415926536); }

int main()
{
  // XXX <xxx>に記述すると明示した型の値を取得する。
  float  x = pi<float>(); // 型の明示
  double y = pi<>();      // 省略時 : pi<double>()
  double z = pi();        // 同上

  std::cout << std::setprecision(10) << std::fixed;
  std::cout << x << std::endl;
  std::cout << y << std::endl;
  std::cout << z << std::endl;
}
