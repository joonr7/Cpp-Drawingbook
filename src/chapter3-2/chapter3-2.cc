#include <iostream>

class MyHouse {
private:
  int room;
public:
  MyHouse();
  MyHouse(int num);
  int getRoom();
};

int MyHouse::getRoom() {
  return room;
}

MyHouse::MyHouse() : room(1) {
}

MyHouse::MyHouse(int num){
  room = num;
}

int main(){
  MyHouse house1;
  std::cout << house1.getRoom() << std::endl;

  MyHouse house2(3);
  std::cout << house2.getRoom() << std::endl;
  return 0;
}
