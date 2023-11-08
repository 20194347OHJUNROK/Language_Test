#include<stdio.h>
#include<math.h>
#define PI 3.141592
double sin_degree(double degree);

int main()
{
	double num;
	double degree = 0.0;
	for (int i = 0; i < 18; i++)
	{
		printf("sin(%lf)의 값은 %lf\n",degree, sin_degree(degree));
		degree += 10.0;
	}

	printf("\n");
	printf("각도를 입력하시오 : ");
	scanf("%lf", &num);
	printf("sin(%lf)의 값은 %lf", num, sin_degree(num));

	return 0;
}

double sin_degree(double degree)
{
	return sin((PI * degree) / 180.0);
}