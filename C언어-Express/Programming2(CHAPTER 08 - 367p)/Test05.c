#include<stdio.h>

int main()
{
	double x;

	printf("실수를 입력하시오 : ");
	scanf("%lf", &x);

	printf("반올림한 값은 %d입니다.\n",(int)x);

	return 0;
}