#include <iostream>

int &getNumber();
int num = 10; // global variable 이렇게 사용하나..?

int main() {
  std::cout << getNumber() << std::endl; // 10
  std::cout << (getNumber() = 150) << std::endl; // num의 참조에 150 대입하므로, 150
  std::cout << getNumber() << std::endl; // 150
  return 0;
}

// getNumber 함수는 num이 아닌 num 에대한 참조를 반환!
int &getNumber(){
  return num;
}
