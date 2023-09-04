#include <iostream>

using namespace std;

int main(){
  //구조체 : 다른 데이터형이 허용되는 데이터의 집합
  //cf) 배열 : 같은 데이터형의 집합

  //축구선수
  
  struct MyStruct{
    string name;
    string position;
    int weight;
    float height;  
  } B;

  /*MyStruct A;
  A.name = "Son";
  A.position = "Striker";
  A.height = 183.0;
  A.weight = 77;
  */

 MyStruct A = {
  "Son",
  "Striker",
  77,
  183
 };

  MyStruct C[2] = {
    {"C", "C",1,1},
    {"D", "D",2,2}
  };

  B.height = 180;

  B = {

  };  // 빈값은 모두 0으로 저장

  
  cout << C[0].height << endl;

  cout << B.height << endl;

  cout << A.height << endl;

  return 0;
}