#include <stdio.h>

/* 
* 변수와 포인터의 차이
	변수   : 데이터를 저장
	포인터 : 변수(또는 저장공간)의 주소를 저장

* 두 변수에 저장된 값을 서로 교환
	- 데이터만 전달되어지기 때문에
      두 변수의 값을 서로 교환해도
      함수를 호출한 곳의 변수에는 아무런 영향이 없다.
	- "Call by Value"
*/

void swap(int a, int b)
{
	printf("function: swap before > a = %d, b = %d\n", a, b);
	// 임시 변수
	int tmp = a;
	a = b;
	b = tmp;
	printf("function: swap after  > a = %d, b = %d\n", a, b);
}

/*
* 두 변수에 저장된 값을 교환
  - 두 변수의 메모리 주소를 전달
    함수를 호출한 곳의 변수를
    함수에서 동일하게 사용할 수 있는 효과를 볼 수 있다.
  - "Call by Reference"
*/

void swap_p(int* a, int* b)
{
	printf("function: swap before > a = %d, b = %d\n", *a, *b);
	// 임시 변수
	int tmp = *a;
	*a = *b;
	*b = tmp;
	printf("function: swap after  > a = %d, b = %d\n", *a, *b);
}

int main()
{
	int n1 = 10;
	int n2 = n1; // 데이터를 전달 = 데이터를 복사
	printf("n1 = %d\n", n1);
	printf("n2 = %d\n", n2);
	n1 = 30;
	printf("n1 → 30\n");
	printf("n1 = %d\n", n1);
	printf("n2 = %d\n", n2);
	printf("\n");
	//----------------------------------
	int n = 100;
	// 정수형 저장 공간을 가리키는 포인터 p1
	int* p1 = &n;
	int* p2 = p1; // 주소를 전달 = 주소를 복사

	printf("*p1 = %d\n", *p1);
	printf("*p2 = %d\n", *p2);
	*p1 = 200;
	printf("*p1 → 200\n");
	// 동일한 메모리의 주소를 가지기 때문에
	// 동일한 메모리 주소를 가진 포인터를 통해
	// 데이터 값을 수정하게되면 다른 포인터에서도
	// 수정된 값을 사용하게 된다
	printf("*p1 = %d\n", *p1);
	printf("*p2 = %d\n", *p2);
	printf("\n");
	// ---------------------------------------------
	int a = 10, b = 20;

	printf("main: swap before > a = %d, b = %d\n", a, b);
	swap(a, b); // 함수에 데이터만 전달
	printf("main: swap after  > a = %d, b = %d\n", a, b);
	printf("\n");
	printf("main: swap before > a = %d, b = %d\n", a, b);
	swap_p(&a, &b); // 함수에 변수의 주소를 전달
	printf("main: swap after  > a = %d, b = %d\n", a, b);
	return 0;
}