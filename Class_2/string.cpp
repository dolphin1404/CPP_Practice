#include <iostream>

using namespace std;

int main(){
  //C++에서 문자열을 다루는 방법 중 하나인 string
  /*
  C스타일로 string 객체를 초기화할 수 있다.
  cin을 사용하여 string 객체에 키보드 입력을 저장할 수 있다.
  cout을 사용하여 string 객체를 디스플레이할 수 있다.
  배열 표기를 사용하여 string 객체에 저장되어 있는 개별적인 문자들에 접근할 수 있다.
  
  배열을 다른 배열에 통째로 대입할 수 없다.
  >> string에서는 이것이 가능!
  */

  char char1[20];
  char char2[20] = "jauar";
  string str1;
  string str2 = "panda";
  //char 1 = char2; //fail
  str1= str2; // success
  cout << str1 << endl;
  // str1[0]을 하게 되면 p 만 출력
  return 0;
}