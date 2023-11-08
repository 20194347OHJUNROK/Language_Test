#include<stdio.h>
#define L 3
double vector_add(double x[], double y[]);
double vector_dot_produnct(double x[], double y[]);

int main()
{
	int i;
	double x[L] = {0};
	double y[L] = {0};
	double x_total = 0.0;
	double y_total = 0.0;

	printf("x : ");
	for (i = 0; i < L; i++)
	{
		scanf("%lf", &x[i]);
		x_total += x[i];
	}

	printf("y : ");
	for (i = 0; i < L; i++)
	{
		scanf("%lf", &y[i]);
		y_total += y[i];
	}
	
	printf("백터의 합 = [%lf %lf %lf]\n", x_total, y_total, vector_add(x, y));
	printf("백터의 내적 = %lf\n", vector_dot_produnct(x, y));

	return 0;
}

double vector_add(double x[], double y[])
{
	double z = 0;

	for (int i = 0; i < L; i++)
		z += (x[i] + y[i]);

	return z;
}
double vector_dot_produnct(double x[], double y[])
{
	double z = 0;

	for (int i = 0; i < L; i++)
		z += x[i] * y[i];

	return z;
}