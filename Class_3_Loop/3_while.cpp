#include <iostream>

using namespace std;

int main(){
  //while문, do while문
  string str = "Panda"; // 개행 문자 \0
  int i = 0;
  /*
  for (<//int i = 0;>i; i < 3; i++){
      //code
  }
  */
 while (str[i] != '\0'){
      cout << str[i] << endl;
      i++;  // 인수 증가하는 요소가 필요
  }

  bool a = true;
  bool b = false;
  while (b){
    cout << "hello\n";    // 거짓이면, 실행되지 않음
  }
  //  for와 while 차이점 
  // while 문은 조건이 하나만 필요. 단 인수가 코드 밖에서 선언되어야함. 
  // 대신 for문은 내부에서 선언된 인수를 밖에서 사용 불가능
  for (int x = 0; x<5; x++){
    cout << "for문입니다. " << x << endl;
  }
  
  int y = 0;
  while(y < 4){
    cout << "while문입니다. " << y << endl;
    y++;
  }

  // do while문은 실행하고 조건을 검사하고 참이면 계속 반복 즉 최소 1회 이상 반복
  int z = false;
  do {
    cout << "do while문입니다. " << z << '\n';
  } while (z);

  return 0;
}