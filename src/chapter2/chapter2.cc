#include <iostream>

void DispNum1(int a) {
  a = 2;
}

void DispNum2(int &a) {
  a = 2;
}

void DispNum3(const int &a) {
  // a = 100; // 컴파일 에러, error: assignment of read-only reference ‘a’
}

enum Colors {Red, Green, Blue, Yellow, White};
// enum class Colors {Red, Green, Blue, Yellow, White};

// enum class PencilColors {Red, Black};
//

int main() {
  int t = 8;
  std::cout << t << std::endl;
  DispNum1(t);
  std::cout << t << std::endl; // t의 값이 변하지 않는다.
  DispNum2(t);
  std::cout << t << std::endl; // t의 값이 변한다.
  DispNum3(t);
  std::cout << t << std::endl; // t의 값이 변하지 않는다.

  Colors bookcolor;
  // bookcolor = Colors::Red;
  // PencilColors pencolor;

  std::cout << Red << std::endl;

  return 0;
}
