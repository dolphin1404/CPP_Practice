#include <iostream>
#define PIE 3.14159   // C 언어식 상수 선언

using namespace std;

int main(){
  // 원의 넓이를 구하는 프로그램
  // 반지름 * 반지름 * 파이
  const float p = 3.14;


  int r = 3; 
  float s = r * r * p;
  //1. 바뀔 필요가 없는 수 
  //2. 바뀌어서는 안되는 수
  // 상수

  int r2 = 3;
  float s2 = r2 * r2 * p;

  cout << s << endl;

  return 0;
}