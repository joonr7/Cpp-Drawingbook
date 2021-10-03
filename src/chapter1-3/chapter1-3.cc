#include <iostream>

class Point {
public:
  void Print(); // 멤버 함수
  void SetXY(int a, int b);
  Point(); // 생성자
private:
  int x, y; // 멤버 변수
};

Point::Point() : x(0), y(0) {} // 생성자에서 x=0, y=0 으로 초기화

void Point::Print() {
  std::cout << "x: " << x << std::endl;
  std::cout << "y: " << y << std::endl;
}

void Point::SetXY(int a, int b) {
  x = a;
  y = b;
}

int main() {
  Point point1;
  point1.SetXY(30, 100);
  point1.Print();
  return 0;
}
