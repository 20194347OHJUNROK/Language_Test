#include<stdio.h>

int main()
{
	int input;
	int fibo0 = 0;
	int fibo1 = 1;
	int fibonacci = 0;

	printf("몇번째 항까지 구할까요? :");
	scanf("%d", &input);

	for (int i = 0; i <= input; i++)
	{
		printf("%d, ", fibo0);
		fibonacci = fibo0 + fibo1;
		fibo0 = fibo1;
		fibo1 = fibonacci;
	}

	printf("\n");
	printf("피보나치 수열의 값 : %d", fibonacci);

	return 0;
}