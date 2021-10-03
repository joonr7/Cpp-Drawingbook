#include <iostream>

void SetRoom(int &number, int floor);

int main() {
  int room = 3;
  int floor = 3;
  SetRoom(room, floor);
  std::cout << floor << "층 집이며, 방의 수는 " << room << "개 입니다." << std::endl;
return 0;
}

void SetRoom(int &number, int floor) {
  number = number * floor;
}
