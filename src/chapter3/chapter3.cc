#include <iostream>

double GetCircleArea();
double GetCircleArea(int radius, double pi);

int main() {
  double area;
  area = GetCircleArea(1, 3.14);
  std::cout << area << std::endl;
  return 0;
}

double GetCircleArea() {
  return 50.0;
}
double GetCircleArea(int radius = 1, double pi = 3.14) {
  return radius * radius * pi;
}

