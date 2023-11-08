#include<stdio.h>
#include<math.h>
#define L 10
double average(double x[], int n);
double standard(double x[], int n);
int main()
{
	double arr[L];
	int i;

	for (i = 0; i < L; i++)
	{
		printf("데이터를 입력하시오 : ");
		scanf("%lf", &arr[i]);
	}

	printf("평균 값은 %lf\n" ,average(arr, L));
	printf("표준 편차값은 %lf\n" ,sqrt(standard(arr, L)));

	return 0;
}

double average(double x[], int n)
{
	double sum = 0.0;
	int i;

	for (i = 0; i < n; i++)
	{
		sum += x[i];
	}
	return sum / n;
}
double standard(double x[], int n)
{
	double sum = 0.0;
	int i;

	for (i = 0; i < n; i++)
	{
		sum += pow((x[i] - average(x, n)), 2);
	}
	return sum / n;
}