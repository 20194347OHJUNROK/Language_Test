#include<stdio.h>

int main()
{
	int num;
	int i = 1;

	printf("정수를 입력하시오 : ");
	scanf("%d", &num);

	do
	{
		int digit = num/i % 10;
		printf("%d", digit);
		i *= 10;

	} while (i<num);


	return 0;
}