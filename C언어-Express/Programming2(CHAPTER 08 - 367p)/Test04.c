#include<stdio.h>
int is_leap(int year);

int main()
{
	int input;
	printf("������ �Է��Ͻÿ� : ");
	scanf("%d", &input);
	
	is_leap(input);

	return 0;
}
int is_leap(int year)
{
	if (year % 4 == 0 && year%100!=0 || year%400==0)
	{
		printf("%d���� 366��(����)�Դϴ�.\n",year);
	}
	else
	{
		printf("%d���� 365��(���)�Դϴ�.\n",year);
	}
	return 0;
}