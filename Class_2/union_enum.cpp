#include <iostream>

int main (){
  // 공용체(union)
  //서로 다른 데이터형을 한 번에 한가지만 보관할 수 있음. 장점 : 메모리 절약

  union MyUnion{
    int intVal;
    long longVal;
    float floatVal;
  };

  MyUnion test;
  
  test.intVal = 3;
  std::cout << test.intVal << std::endl << std::endl; //3
  test.longVal = 33;
  std::cout << test.intVal << std::endl;              //33
  std::cout << test.longVal << std::endl << std::endl;  //33
  test.floatVal = 3.3;
  std::cout << test.intVal << std::endl;              //~?
  std::cout << test.longVal << std::endl;             //~?
  std::cout << test.floatVal << std::endl;            //3.3


  // 열거체(enum)
  // 기호 상수를 만드는 것에 대한 또다른 방법.

  enum spectrum { red = 0, orange = 2, yellow, green, blue, violet, indigo, ultraviolet}; // 열거자들을 초기화할 때는 정수로만 yellow는 1씩 더한 3을 가지게 됨
  /*
  1. spectrum을 새로운 데이터형 이름으로 만듭니다.
  2. red, orange, yellow.. 0에서부터 7까지 정수 값을 각각 나타내는 기호 상수로 만듭니다.
  */

  spectrum a = orange; // + yellow; 안된다.
  std::cout << a << std::endl;

  int b;
  b = blue; //4
  b = blue + 3; //7

  std::cout << b << std::endl;

  return 0;
}