// Copyright (c) 2014
// Akira Takahashi, Fumiki Fukuda.
// Released under the CC0 1.0 Universal license.

struct X {
  typedef int result;
  result f();
//……
};

struct Y {
  static const int result = 5;
//……
};

int p;

template <class T>
void g(T arg)
{
  // XXX typenameを付与することでT::resultを型として扱うことを宣言
  // これを付加する理由:  Y::resultだと定数5になってしまうのでテンプレートが意図した動作にならない
  typename T::result* p;
//……
}

int main()
{
  g(X()); // OK
//g(Y()); // コンパイルエラー！Yはresult型を持っていない
}
