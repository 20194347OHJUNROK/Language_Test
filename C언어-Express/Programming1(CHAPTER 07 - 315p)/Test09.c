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

	printf("1���� %d������ ���� %d�Դϴ�.\n", i-1, sum - i);
	return 0;
}