#include<stdio.h>

int main()
{
	int sum = 0;
	int i = 0;
	while (1)
	{
		sum += i;
		if (sum > 10000) { break; }
		i++;
	}

	printf("1부터 %d까지의 합이 %d입니다.\n", i-1, sum - i);
	return 0;
}