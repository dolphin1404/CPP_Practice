#define _CRT_SECURE_NO_WARNINGS //경고 무시

#include <iostream>
#include <cstring>

#define SIZE 20

int main(){
  using namespace std;

  char animal[SIZE];
  char* ps;

  cout << "동물 이름을 입력하십시오.\n";
  cin >> animal;

  ps = new char[strlen(animal) + 1];  // 동적 구조체
  strcpy(ps, animal); // animal 값을 ps에 붙여넣어줌

  cout << "입력하신 동물 이름을 복사하였습니다." << endl;
  cout << "입력하신 동물 이름은 " << animal << "이고, 그 주소는 " << (int*)animal << " 입니다." << endl;
  cout << "복사된 동물 이름은 " << ps << " 이고, 그 주소는 " << (int*)ps << " 입니다." << endl;

  return 0;
}