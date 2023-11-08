#include<stdio.h>
#define PI 3.14
/*
* 함수 포인터 : 함수를 가리키는 포인터
			  함수 호출이 이루어지면 메모리 공간에 함수가 할당이되고 함수또한 메모리 주소를 가지고있게된다.
			  이 주소를 포인터에 넣어서 활용하는 것이 바로 "함수 포인터"이다.
			  함수명은 포인터 상수값이기때문에 다른 변수의 주소를 참조할수없지만
			  "함수 포인터"는 변수이기때문에 함수의 주소를 번갈아 가면서 얼마든지 저장을 할수있다.

* 함수 포인터 변수의 조건
	int(*pt)(int, int);
	데이터 타입이 반드시 반환값, 매개변수의 타입과 동일해야한다.
	또한 매개변수와 인수값의 개수가 일치해야한다.


* 함수 포인터의 배열 조건
   int(*pt[방의 개수])(int, int);
   인덱스 연산자'[]' 우선순위가 제일 높기때문에 먼저 주소를 저장할 방의 개수를 메모리에 할당하고 
   *(아스타리스크)가 적용되어 함수의 주소를 인덱스의 개수만큼 저장한다.
   우리는 인덱스를 통하여 함수의 주소(배열의 요소)에 접근한다.

*/

double circle_Area(double x, double y);

int main()
{
	double radius;
	double result;
	double(* area)(double, double) = NULL;
	area = circle_Area;

	printf("반지름을 입력하세요 : ");
	scanf("%lf", &radius);

	result = area(radius , PI);
	printf("원의 넓이 : %.2lf\n", result);
	return 0;

}

double circle_Area(double x, double y)
{
	double result = (x * x) * y;
	return result;
}