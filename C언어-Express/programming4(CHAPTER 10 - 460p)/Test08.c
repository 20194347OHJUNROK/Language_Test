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
		printf("�����͸� �Է��Ͻÿ� : ");
		scanf("%lf", &arr[i]);
	}

	printf("��� ���� %lf\n" ,average(arr, L));
	printf("ǥ�� �������� %lf\n" ,sqrt(standard(arr, L)));

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