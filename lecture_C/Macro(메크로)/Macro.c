#include<stdio.h>

// 메크로(macro) 정의
// → 메크로는 컴파일 이전에 전처리과정에서
// → 전처리기에 의해 코드가 치환된다.
// → 메모리를 따로 만들지 않는다.
#define PI 3.141592
#define TRUE 1
#define FALSE 0
#define RESULT_OK	1
#define RESULT_FAIL 0
#define PRINT_HELLO printf("Hello world!\n");

// 메크로(macro) 함수(function)
// → 메크로로 치환할 표현식을 작성
#define ADD(a,b) ((a)+(b))
// 함수를 정의하여 호출하면
// 함수를 정의한 곳으로 프로그램의 흐름이 이동되기 때문에 오버헤드가 발생된다.
// 메크로함수를 사용하면 이를 방지할수있다

// → 연산자 우선순위 때문에 문제가 발생할수있다!!!
// → 이를 해결하기 위해서 메크로 함수의 표현식 전체와 각인수를 괄호로 묶어야한다!!!


int main()
{
	printf("PI = %0.2f\n", PI);
	// → printf("PI = %0.2f", 3.141592);
	// → 프로그램 실행 중에 바뀌는 것이 아닌
	// → 컴파일 전에 3.141592로 치환된다.

	int result = RESULT_FAIL;

	if (result == RESULT_OK)
	{
		printf("SUCEESS!!");
	}
	else if (result == RESULT_FAIL)
	{
		printf("FAIL!!\n");
	}

	PRINT_HELLO;
	//------------------------------------------------------------------------------------------------

	// 상수(contant)는 메크로를 통해서 뿐만아니라 변수를 이용해서도
	// 변수를 이용해서도 상수를 정의할수있다.
	// 프로그램 실행 중에 메모리에 만들어진다.
	// 프로그램 실행중 해당값을 끝까지 유지해야하는 경우에 사용된다.
	const int MAX_LEMGT = 10;	// 상수 = 변하지 않는 수

	// MAX_LEMGTH = 20;		WORNING!!!

	//------------------------------------------------------------------------------------------------------------
	printf("Add(10,5) = %d\n", ADD(10, 5));
	// 치환된다!!
	// printf("Add(10,5) = %d\n", a+b);
	// printf("Add(10,5) = %d\n", 10+5);

	int x = 5, y = 3;
	printf("Add(x,y) = %d\n", ADD(x, y));
	// printf("Add(10,5) = %d\n", x + y);
	// printf("Add(10,5) = %d\n", 5 + 3);


	printf("ADD(x, y) * ADD(10, 5) = %d\n", ADD(x, y) * ADD(10, 5));
// 괄호를 작성하기 전
	// ADD(x, y) * ADD(10, 5)
	// x + y * 10 + 5
	// 5 + 3 * 10 + 5  → 3 * 10 부터 연산
	// 5 + 30 + 5
	// 40
	

	// 괄호를 작성한 후
	// ADD(x, y) * ADD(10, 5)
	// (x + y) * (10 + 5)
	// (5 + 3) * (10 + 5) 
	// 8 * 15
	// 120

	return 0;


}