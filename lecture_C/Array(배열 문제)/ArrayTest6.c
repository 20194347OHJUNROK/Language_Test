#include<stdio.h>

// 매크로 상수
#define BASE	10

int main()
{
	// 임의의 양의 정수를 입력을 받고
	// 각 숫자가 몇개인지 출력

	// >>> 680185772
	//  0의 개수 : 1
	//  1의 개수 : 1
	//  2의 개수 : 1
	//  ...		 : 
	//  9의 개수 : 0

	unsigned int num=0;		//	0~ 42억
	
	// 각 숫자의 개수를 저장하기위한 배열 선언
	int reminder[BASE] = { 0, };
	// 0의 개수는 인덱스 0인 원소에 저장
	// 1의 개수는 인덱스 1인 원소에 저장
	// . . . . . . .
	// 9의 개수는 인덱스 9인 원소에 저장

	printf("Enter an integer >>> ");
	scanf("%d", &num);


	for (int i = 1; i < num; i *= 10)
	{
		int mod = (num / i) % 10;
		reminder[mod]++;
	}

	for (int i = 0; i < BASE; i++)
	{
		printf("%d's count = %d\n", i, reminder[i]);
	}
	

	return 0;
}