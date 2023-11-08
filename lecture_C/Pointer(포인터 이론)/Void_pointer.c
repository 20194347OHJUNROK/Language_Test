#include<stdio.h>
/*
	* void형 포인터 : void형 포인터는 어떠한 데이터 타입이라도 상관없이 데이터를 처리할수있는 포인터
	* 문자형 포인터, 정수형 포인터, 실수형 포인터를  void형 포인트 형태로 취급하고, 자료형이 다른 데이터 타입을 얼마든지 저장할수있다.
	* 다양한 타입의 포인터를 선언하는것보다는 메모리적인 측면에서 장점을 보인다.
	* 하지만, 명시적인 대상을 가리키는 포인터 타입으로 자료형을 캐스팅 해주어야하는 단점이 있다.
	
	* 선언 및 초기화
	void* vp = NULL;
*/

int main()
{
	int num = 123;
	float f_num = 58.77f;
	char ch = 'A';

	// void형 포인터를 선언 및 초기화
	void* vp = NULL;
	printf("void형 포인터의 바이트 크기  : %dbyte\n", sizeof(vp));
	// NULL로 초기화 했기대문에 0번지 주소를 가진다.
	printf("void형 포인터의 주소 : %p\n", vp);
	printf("-----------------------------------------------------------\n\n");

	/*
	   아래 코드는 에러가 발생한다
	   그이유는 void* 타입이기 때문에 현재 가리키고 있는 값이 존재하지 않기때문이다.
	   printf("void형 포인터가 가지고있는 값 : %d\n", *vp);			ERROR!
	*/

	vp = &num;
	printf("void형 포인터가 가지고있는 값 : %d\n", *(int*)vp);
	printf("num의 주소 : %p\n", &num);
	printf("void형 포인터가 가지고있는 값의 주소 : %p\n", (int*)vp);
	printf("-----------------------------------------------------------\n\n");


	vp = &f_num;
	printf("void형 포인터가 가지고있는 값 : %lf\n", *(float*)vp);
	printf("f_num의 주소 : %p\n", &f_num);
	printf("void형 포인터가 가지고있는 값의 주소 : %p\n", (float*)vp);
	printf("-----------------------------------------------------------\n\n");
	

	vp = &ch;
	printf("void형 포인터가 가지고있는 값 : %c\n", *(char*)vp);
	printf("ch의 주소 : %p\n", &ch);
	printf("void형 포인터가 가지고있는 값의 주소 : %p\n", (char*)vp);
	printf("-----------------------------------------------------------\n\n");
// -----------------------------------------------------------------------------------------------------

	int arr[5] = { 1,2,3,4,5 };
	// 배열명(주소)를 void형 포인터에 대입함
	vp = arr;

	for (int i = 0; i < 5; i++)
	{
		printf("arr[%d] = %d\n", i, *(int*)vp);
		printf("void형 포인터의 주소 : %u\n", vp);
		/*
		  가리키고있는 대상의 캐스팅 처리가 안되어서
		  크기를 알수없어 에러가 발생
		  vp++;
		
		  연산자의 우선순위로 인해 ++연산이 캐스팅보다 먼저 실행되기때문에 에러가 발생 
		  vp = (int*)vp++;
		*/
		vp = (int*)vp + 1;
		//→((int*)vp)++;
	}

	return 0;
}