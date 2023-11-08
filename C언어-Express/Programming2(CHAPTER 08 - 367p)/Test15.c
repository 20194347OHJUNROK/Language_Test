#include<stdio.h>
int is_prime();
int main()
{
	is_prime();
	return 0;
}

int is_prime()
{
	for (int prime = 2; prime <= 100; prime++)
	{
		int is_prime = 1;
		for (int i = 2; i * i <= prime; i++)
		{
			if (prime % i == 0)
			{
				is_prime = 0;
				break;
			}
		}

		if (is_prime)
		{
			printf("%2d ", prime);
		}
	}
	return 0;
}