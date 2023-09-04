#include <iostream>

using namespace std;

int main (){
  /* + - * 
  / : 몫 % :나머지 부동소수점(실수) 사용할 수 없음
  */
  int a = 10;
  int b = 3;

  int c = a + b;
  int d = a - b;
  int e = a * b;
  int f = a / b;
  int g = a % b;
  
  cout << "c : " << c <<endl;
  cout << "d : " << d <<endl;
  cout << "e : " << e <<endl;
  cout << "f : " << f <<endl;
  cout << "g : " << g <<endl;
  
  //C++가 복잡한 산술 연산을 수행할 수 있을까?

  int multiple = a + b * c; //일반적 수학 방식을 따름
 
  cout << multiple << endl;
  
  float f1 = 9.0;
  int i1 = 9;
  cout << f1 / 2 << endl; // 4.5 로 반환
  cout << i1 / 2.0 << endl; // 4.5로 반환 실수 포함 여부가 중요.

  //auto   자동으로

  auto n = 100; // n은 int로
  auto x = 1.5; // x는 float
  auto y = 1.3e12L; // y는 long long으로
  
  //3개의 float형 변수
  auto x1 = 0.0;  // float형으로 변수지정
  float y1 = 0; // float으로 이미 지정
  auto z1 = 0;  // 0이라는 int값을 넣었기에 int로
  
  return 0;
  
}