#include <iostream>

int main() {
  int sum = 0;
  for (int it=0; it <= 100; ++it) {
    sum += it;
  }
  std::cout << sum << std::endl;
  return 0;
}
