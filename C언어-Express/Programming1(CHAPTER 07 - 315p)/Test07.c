#include<stdio.h>

int main()
{
	int n = 100;

	for (int prime = 2; prime <= n; prime++)
	{
		int isPrime = 1;

		// 제곱근까지만 검사
		for (int i = 2; i * i <= prime; i++)
		{
			// 약수인 경우
			if (prime % i == 0)
			{
				isPrime = 0;
				break;
			}
		}

		if (isPrime)
		{
			printf("%2d ", prime);
		}
	}
	return 0;
}