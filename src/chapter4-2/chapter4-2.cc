#include <iostream>

class MyTest {
public:
  void Test(int i, int *p, int &r) {
    i = 1987;
    *p = 1950;
    r = 2006;
  }
};

int main() {
  int a= 0, b= 0, c = 0;
  MyTest test;
  test.Test(a, &b, c);
  std::cout << "a: " << a << ", b: " << b << ", c: " << c << std::endl;
  // 예측: 0, 1950, 2006
  return 0;
}
