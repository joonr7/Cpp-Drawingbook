#include <iostream>

int main(){
  for (int it = 1; it <= 5; ++it) {
    std::cout.width(10);
    std::cout << std::string(it, '*') << std::endl;
  }
  return 0;
}
