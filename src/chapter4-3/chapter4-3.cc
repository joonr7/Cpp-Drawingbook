#include <iostream>

// 참조에 의한 전달을 이용하여 두 값을 교환하는 swap1 함수
void swap1 (int &a, int &b) {
  int tmp;
  tmp = a;
  a = b;
  b = tmp;
}

// 값에 의한 전달을 하는 swap2 함수
void swap2(int a, int b) {
  int tmp = a;
  a = b;
  b = tmp;
}

int main() {
  int x = 50, y = 100;
  std::cout << "x: " << x << ", y = " << y << std::endl;

  swap1(x, y);
  std::cout << "swap1 : x: " << x << ", y = " << y << std::endl; // 교환되므로, 100, 50

  swap2(x, y);
  std::cout << "swap2 : x: " << x << ", y = " << y << std::endl; // 교환되지 않으므로 100, 50

  return 0;
}
