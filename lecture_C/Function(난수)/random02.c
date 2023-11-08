// 라이브러리 함수에 대한 실습02(srand( ), rand( )함수)
/*
 srand() 함수는 1970년 1월 1일 0시부터 지금까지의 흘러온 시간을 잡아서 다른 난수를 발생시키는 함수
 즉 , 시드값이 다르기때문에 계속 다른 난수를 발생시킬수있다.
 
  srand 함수의 원형
 :	void srand(int)
	{

	};
*/

#include<stdio.h>
#include<stdlib.h>
#include<time.h>	// time()함수를 사용하기 위한 표준 라이브러리
#define NUM	45

int main()
{
	int cnt = 0;

	printf("1 ~ 45까지의 임의의 숫자 6개를 출력합니다.\n");
	// srand((unsigned)1);
	// srand((unsigned)2);
	// 시간은 음수가 될수가없기때문에 unsigned 해준다.
	// 위의 문장은 사용자가 시드값을 직접 준 상황이다.

	srand((unsigned)time(NULL));
	// time( )함수에 NULL값을 집어넣어 time( )함수가 반환하는 값을 서로 차별화 둔다.
	// 즉 , 시간은 계속 흐르기때문에 특정 시간대를 잡아서 서로 다른 시드값을 가지는 난수를 발생

	printf("srnad( )함수를 이용하여 임의의 수를 출력합니다.\n");
	for (cnt = 1; cnt <= 6; cnt++)
	{
		printf(" %d", 1 + (rand() % NUM));
	}
	printf("\n");

	return 0;
}