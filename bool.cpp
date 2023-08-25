#include <iostream>

using namespace std;

int main(){
  // char : 작은 문자형 한 글자만 표현 , 한글은 아스키 코드 지원 X
  int a = 77;
  char c[] = { 'a', 'b', 'c'};
  // null 문자 '\0'
  // null 문자를 만날 때까지 메모리를 돌면서 우연찮게 null 만날 때까지 반복
  // "" >> 명시적으로 null 문자가 포함
  cout << c << endl;
  //char b = "a"; // a /0 두 문자가 저장된 것이므...

  //cout << b << endl;  // mm
  
  // bool : 0 = false 혹은 1 = true
  
  bool A = 0;
  bool B = 1;
  bool C = 10;

  cout << A << " " << B << " " << C << endl;
  
  return 0;//
}