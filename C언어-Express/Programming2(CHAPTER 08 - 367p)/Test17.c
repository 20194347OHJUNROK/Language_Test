#include<stdio.h>
#include<math.h>
#define E 0.000001
int f_equal(double a, double b);
double absolute(double a, double b);
double min(double a, double b);

int main()
{
	double f1, f2;

	printf("실수를 입력하시오 : ");
	scanf("%lf", &f1);
	printf("실수를 입력하시오 : ");
	scanf("%lf", &f2);

	f_equal(f1, f2);
	return 0;
}

int f_equal(double a, double b)
{
	if (absolute(a, b) / min(a, b) < E)
		printf("두 개의 실수는 근사적으로 서로 같음.\n");
	else
		printf("두 개의 실수는 서로 다름.\n");
}

double absolute(double a, double b)
{
	return fabs(a - b);
}

double min(double a, double b)
{
	return fabs(a) > fabs(b) ? fabs(a) : fabs(b);
}