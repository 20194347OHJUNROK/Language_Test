#include<stdio.h>

int main()
{
	int num;
	printf("정수를 입력하시오 : ");
	scanf("%d", &num);

	for (int i = 1; i <= num; i++)
	{
		if (num % i == 0)
		{
			printf("%2d ", i);
		}
	}

	return 0;
}