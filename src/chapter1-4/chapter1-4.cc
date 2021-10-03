#include <iostream>

class Point {
public:
  void Print(); // 멤버 함수
  void SetXY(int a, int b);
  Point(); // 생성자
  void MoveLeft();
  void MoveRight();
private:
  int x, y; // 멤버 변수
};

Point::Point() : x(50), y(50) {
  Print();
}

void Point::Print() {
  std::cout << "x: " << x << std::endl;
  std::cout << "y: " << y << std::endl;
}

void Point::SetXY(int a, int b) {
  x = a;
  y = b;
}

void Point::MoveLeft() {
  x = x - 1;
  Print();
}

void Point::MoveRight() {
  x = x + 1;
  Print();
}

int main() {
  Point point1;
  point1.MoveLeft();
  point1.MoveLeft();
  point1.MoveRight();
  point1.MoveLeft();

  return 0;
}
