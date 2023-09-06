#include <iostream>

struct MyStruct{
  char name[20];
  int age;
};

int main(){
  using namespace std;

  //동적 구조체 생성
  //temp* ps = new temp;

  MyStruct* temp = new MyStruct;

  cout << "당신의 이름을 입력하십시오\n.";
  cin >> temp->name;  // 화살표 함수

  cout << "Input your age\n";
  cin >> (*temp).age;
  
  cout << "Hello! " << temp->name << "Sir!\n";
  cout << "Your age is " << temp->age << "! Nice meet you!";

  return 0;
}