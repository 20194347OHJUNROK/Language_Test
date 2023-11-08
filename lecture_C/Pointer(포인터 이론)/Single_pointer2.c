#include<stdio.h>

int main()
{
	/*
	 포인터(pointer)
		- 저장 공간(변수)의 주소를 참조하기 위한 변수
		  참조 변수(Reference Varaible)
	*/
	int n1 = 10;
	double f1 = 1.234;
	char c1 = 'A';

	/* 참조 연산자(&)
	  - 변수에 할당된 저장 공간의 주소를 반환하는 연산자
	  - 참조 연산자를 통해 변수의 주소를 반환하여 포인터에 저장
	*/
	int* iptr = &n1;
	double* fptr = &f1;
	char* cptr = &c1;
	/*
	포인터 연산자(*, 역참조 연산자)
	  - 포인터에 저장된 주소에 접근을 하기 위한 연산자
	  - 변수를 통하지 않고 메모리 공간에 바로 접근할 수 있다.
	 */

	printf("*iptr = %d\n", *iptr);
	printf("*fptr = %.2f\n", *fptr);
	printf("*cptr = %c\n", *cptr);

	/*
	double* fptr2 = &c1;
	printf("*fptr2 = %.2f\n", *fptr2);			// ERROR!!

	 변수는 선언할 때 변수의 타입에 맞춰 메모리 공간을 할당 받고
	 변수를 통해 해당 메모리 공간을 바로 사용할 수 있다.

	 포인터는 메모리의 주소를 가지고 있고, 포인터 연산자를 통해서
	 접근할 때 포인터의 타입에 따라 읽어들이는 크기도 달라진다.
	 즉, 포인터변수의 자료형 크기만큼 포인터 변수에 저장된 변수를 읽어들인다.

	  int = 4byte
	  char = 1byte
	  double = 8byte
	  int*  → 저장된 주소에서부터 4byte 만큼 읽어들인다.
	  char* → 저장된 주소에서부터 1byte 만큼 읽어들인다.
	  double* → 저장된 주소에서부터 8byte 만큼 읽어들인다. 
	-------------------------------------------------------------------------------------------

	포인터 변수를 초기화하지않으면 미초기화로인해 발생하는 에러(C4700)와 역참조에러(C6011)가 일어날수있다. 
	위의 문제를 해결하기위해서 우리는 반드시 초기화를 해주어야한다. 
	이때 '아무것도 없는 빈 공간'를 의미하는 값 = NULL 값으로 초기화해준다.
	NULL 값은 stdio.h파일에 포함된 #define NULL((void*)0)인 메크로 함수이다.
	즉, NULL 값은 아무런 주소를 저장하지않고있기때문에 0번지를 가리킨다.


	int* iptr2 = NULL;
	printf("iptr2의 주소값 = %p\n", iptr2);
	→ NULL 값은 포인터 변수 iptr2의 주소값을 0번지로 지정해준다.

	-------------------------------------------------------------------------------------------
	* 포인터 상수

	정수형태의 상수
	const double PI = 3.14;
	const double MAX = 10.1592;

	상수를 참조하는 포인터(pointer to constant)
	const double* pi_ptr = &PI;
	 = int const* pi_ptr = &PI;

	printf("PI = %.2f\n", PI);
	printf("*pi_ptr = %.2f\n", *pi_ptr);

	 *pi_ptr = 3.141592; // 컴파일 에러
	 PI 가 상수이므로 역참조로 값을 변경할 수 없다.

	pi_ptr = &MAX;
	 상수를 참조하는 포인터이기 때문에
	 다른 상수를 참조할 수 있다.

	 double 포인터 상수(constant pointer)
	  - 포인터 자체가 상수인 경우
	  - 다른 주소로 수정할 수 없는 포인터
		= 메모리 주소의 변경이 불가능한 포인터

	double pi = 3.14;
	double max = 10.1492;
	double* const pi_ptr2 = &pi;
	 pi_ptr2 = &max; // 컴파일 에러

	 상수를 참조하는 포인터 상수(constant pointer to constant)
	  - 포인터의 주소 변경 불가능
	  - 역참조로 값을 변경 불가능

	const double* const pi_ptr3 = &PI;
	 = double const * const pi_ptr3;

	*/
	return 0;
}