#include<stdio.h>

int main()
{
	int n = 100;

	for (int prime = 2; prime <= n; prime++)
	{
		int isPrime = 1;

		// �����ٱ����� �˻�
		for (int i = 2; i * i <= prime; i++)
		{
			// ����� ���
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