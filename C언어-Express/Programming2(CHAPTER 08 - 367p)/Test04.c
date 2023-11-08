#include<stdio.h>
int is_leap(int year);

int main()
{
	int input;
	printf("연도를 입력하시오 : ");
	scanf("%d", &input);
	
	is_leap(input);

	return 0;
}
int is_leap(int year)
{
	if (year % 4 == 0 && year%100!=0 || year%400==0)
	{
		printf("%d년은 366일(윤년)입니다.\n",year);
	}
	else
	{
		printf("%d년은 365일(평년)입니다.\n",year);
	}
	return 0;
}