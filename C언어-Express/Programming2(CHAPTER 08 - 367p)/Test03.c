#include<stdio.h>
#define PI 3.141592
double cal_area(double x);

int main()
{
	double radius;
	printf("���� �������� �Է��Ͻÿ� : ");
	scanf("%lf", &radius);

	double area = cal_area(radius);
	printf("���� ������ %lf�Դϴ�.\n", area);

	return 0;
}

double cal_area(double x)
{
	return x * x * PI;
}