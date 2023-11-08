#include<stdio.h>
#include<math.h>
#define E 0.000001
int f_equal(double a, double b);
double absolute(double a, double b);
double min(double a, double b);

int main()
{
	double f1, f2;

	printf("�Ǽ��� �Է��Ͻÿ� : ");
	scanf("%lf", &f1);
	printf("�Ǽ��� �Է��Ͻÿ� : ");
	scanf("%lf", &f2);

	f_equal(f1, f2);
	return 0;
}

int f_equal(double a, double b)
{
	if (absolute(a, b) / min(a, b) < E)
		printf("�� ���� �Ǽ��� �ٻ������� ���� ����.\n");
	else
		printf("�� ���� �Ǽ��� ���� �ٸ�.\n");
}

double absolute(double a, double b)
{
	return fabs(a - b);
}

double min(double a, double b)
{
	return fabs(a) > fabs(b) ? fabs(a) : fabs(b);
}