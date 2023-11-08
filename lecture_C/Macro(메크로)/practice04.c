#include<stdio.h>

int main()
{
	// 임의의 정수를 입력받아 각 자리의 정수를 출력하는 반복문을 작성

	int num; 

	printf("Enter an integer : ");
	scanf("%d", &num);
	printf("\n");


	// 변수 num의 k번째 자리
	// num에서 (10^(k-1))를 나눈 몫의 1의 자리를 구하자.
	for (int k = 1; k <= num; k *= 10)
	{
		int digit = (num / k) % 10;

		printf("%d의 자리 : %d\n", k, digit);
	}
	printf("\n");


	// num의 최대자릿수부터 1의 자리까지 출력

	// num 의 최대자릿수를 구해라
	int max_digit = 1;
	
	for (int i = 10; i<= num; i*=10)
	{
		max_digit *= 10;
	}

	// 최대 자릿수를 이용하여 1의 자리까지의 자릿수를 10씩나누어 표현
	for (int k = max_digit; k >= 1; k /= 10)
	{
		int digit = (num / k) % 10;

		printf("%d의 자리 : %d\n", k, digit);
	}
	printf("\n");



	return 0;
}