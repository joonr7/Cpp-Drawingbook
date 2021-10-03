#include <iostream>

int sum (int x, int y, int z0 = 0, int z1 = 0, int z2= 0) {
  return (x + y + z0 + z1 + z2);
}

int main() {
  int a = 1;
  int b = 2;
  int c = 3;
  int d = 4;
  int e = 5;

  std::cout << sum (a,b) << std::endl;
  std::cout << sum (a,b,c) << std::endl;
  std::cout << sum (a,b,c,d,e) << std::endl;
  return 0;
}
