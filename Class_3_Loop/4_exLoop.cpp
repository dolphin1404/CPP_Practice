#include <iostream>

using namespace std;

int main(){
  //배열 기반 반복문
  int a[10] = {1, 3, 5, 7, 9};

  for (int i = 0; i< 5; i++){
    cout << a[i];
  }
  cout << "\n";
  /*
  함수에서 초기화
  Foo(int num) { bar = num;}
  차이점은 생성자 함수{}내에서 초기화하는 것과, 이렇게 초기화 리스트를 쓰는 것의 차이는 초기화 리스트에서 초기화를 하는 경우, 
  생성자가 호출될 때 객체의 생성과 초기화가 한 번에 이루어진다.
  
  >> 초기화 리스트를 써야만 하는 상황
  1. 클래스가 레퍼런스를 멤버로 가질 때
  2. non static const멤버가 있을 때
  3. default 생성자가 없을 때
  4. bass class를 초기화할 때
  5. 생성자 파라미터의 이름이 데이터 멤버랑 같을 때(이 경우는 this를 써서 해결할 수도 있다.)
  */
  for (int i : a){  // foo(int num) : bar(num) {}; 초기화 리스트
 
    cout << i;
  }
}