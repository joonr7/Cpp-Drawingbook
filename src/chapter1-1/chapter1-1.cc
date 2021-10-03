#include <iostream>

class Person {
public:
  int age;
  std::string name;
};

int main() {
  Person kim;
  kim.age = 23;
  kim.name = "Sunghoon";
  std::cout << "이름: " <<  kim.name << std::endl;
  std::cout << "나이: " << kim.age << std::endl;

  return 0;
}
