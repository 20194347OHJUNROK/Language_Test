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
		printf("sin(%lf)�� ���� %lf\n",degree, sin_degree(degree));
		degree += 10.0;
	}

	printf("\n");
	printf("������ �Է��Ͻÿ� : ");
	scanf("%lf", &num);
	printf("sin(%lf)�� ���� %lf", num, sin_degree(num));

	return 0;
}

double sin_degree(double degree)
{
	return sin((PI * degree) / 180.0);
}