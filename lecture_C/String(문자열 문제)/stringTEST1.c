#include <stdio.h>
#define LENGTH		100
#define BASE		10

int main()
{
	// 최대 100자리 자연수를 입력을 받아서
	// 각 숫자의 개수를 출력하는 프로그램을 S작성

	// 입력받은 자연수를 저정할 문자열 배열
	char natural_number[LENGTH + 1] = { 0, };

	// 각 자리 정수를 저장하는 배열
	int reminder[BASE] = { 0, };

	printf("Enter a natural number >>> ");
	scanf("%s", natural_number);
	// > 1234
	//	 {'1', '2', '3', '4', '\0'}
	// '\0' 의 아스키 코드 = 0
	for (int i = 0; natural_number[i] != 0 && i <= LENGTH; i++)
	{
		char c = natural_number[i];
		// '0' = 48
		// '1' = 49
		// ..
		// '9' = 57
		reminder[c - 48]++;
	}
	printf("\n");
	for (int i = 0; i < BASE; i++)
	{
		printf("%d's count = %d\n", i, reminder[i]);
	}
	return 0;
}