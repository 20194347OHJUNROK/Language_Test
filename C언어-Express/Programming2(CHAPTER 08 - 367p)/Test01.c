#include<stdio.h>

double square(double x);

int main()
{
	double num;

	printf("������ �Է��Ͻÿ� : ");
	scanf("%lf", &num);

	double result = square(num);
	printf("�־��� ���� %lf�� ������ %lf�Դϴ�.\n", num, result);

	return 0;
}

double square(double x)
{
	return x * 2;
}