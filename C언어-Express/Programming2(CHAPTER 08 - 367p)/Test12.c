#include<stdio.h>
int print_value(int n);

int main()
{
	int value;
	do 
	{
		printf("값을 입력하시오(종료는 음수) : ");
		scanf("%d", &value);
		print_value(value);

	} while(value > 0);

	return 0;
}

int print_value(int n)
{
	for (int i = 0; i < n; i++)
	{
		printf("*");
	}
	printf("\n");
	return 0;
}