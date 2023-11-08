#include<stdio.h>

double square(double x);

int main()
{
	double num;

	printf("정수를 입력하시오 : ");
	scanf("%lf", &num);

	double result = square(num);
	printf("주어진 정수 %lf의 제곱은 %lf입니다.\n", num, result);

	return 0;
}

double square(double x)
{
	return x * 2;
}