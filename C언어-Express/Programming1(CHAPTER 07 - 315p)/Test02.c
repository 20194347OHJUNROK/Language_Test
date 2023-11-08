#include<stdio.h>

int main()
{
	int total = 0;

	for (int i = 1; i <= 100; i++)
	{
		if (i % 3 == 0)
		{
			total += i;
		}
	}
	printf("1부터 100사이의 모든 3의 배수의 합은 %d입니다.\n", total);
	
	return 0;
}