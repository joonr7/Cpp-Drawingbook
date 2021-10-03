#include <iostream>
#include <string.h>
#include <vector>

class Student{
public:
  void SetID (int num) {
    id = num;
  }
  void SetName (std::string str) {
    name = str;
  }
  int GetID(){
    return id;
  }
  std::string GetName() const {
    return name;
  }
private:
  int id;
  std::string name;
};

enum Subjects {Math, English, Science};

class Exam {
public:
  void SetInfo (int id, std::string name, Subjects s, int num);
  int GetPoint() const {return point;}
  void GetResult(std::string &buf) const;

  Student student;
private:
  Subjects subject;
  int point;
};

void Exam::SetInfo(int id, std::string name, Subjects s, int num) {
  student.SetID(id);
  student.SetName(name);
  subject = s;
  point = num;
}

void Exam::GetResult(std::string &buf) const {
  std::vector<std::string> subname = {"수학", "영어", "과학"};
  buf = subname[subject] + ": " + std::to_string(point) + "점";
}

void PrintResult(const Exam &Exam) {
  std::cout << Exam.student.GetName() << std::endl;
  std::string buf;
  Exam.GetResult(buf);
  std::cout << buf << std::endl;
}

double GetAvg (const Exam *Exam, int num) {
  double sum = 0;
  for (int i = 0; i < num; ++i) {
    sum += Exam[i].GetPoint();
  }
  return sum / num;
}

int main(){
  Exam Exam[3];
  Exam[0].SetInfo(1, "홍길동", Math, 60);
  Exam[1].SetInfo(1, "홍길동", English, 75);
  Exam[2].SetInfo(1, "홍길동", Science, 88);

  PrintResult( Exam[0]);
  PrintResult( Exam[1]);
  PrintResult( Exam[2]);
  std::cout << std::endl;
  std::cout << "평균: " << GetAvg(Exam, 3) << "점" << std::endl;
  return 0;
}
