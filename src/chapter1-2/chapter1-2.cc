#include <iostream>

class Point {
public:
  int x, y;
  void Print(); // 멤버 함수
  Point(); // 생성자
};

Point::Point() : x(100), y(100) {} // 생성자에서 x=100, y=100 으로 초기화

void Point::Print() {
  std::cout << "x: " << x << "\ty: " << y << std::endl;
}

int main() {
  Point point1;
  point1.x = 50;
  point1.Print();
  return 0;
}
