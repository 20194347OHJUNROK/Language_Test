#include<stdio.h>
#include<math.h>
int main()
{
	double n = 0.0;
	double result = 0;
	int count = 0;

	printf("�Ǽ��� ���� �Է��Ͻÿ� : ");
	scanf("%lf", &n);
	printf("�ŵ����� Ƚ���� �Է��Ͻÿ� : ");
	scanf("%d", &count);

	result = pow(n, count);
	printf("�������: %lf\n", result);

	return 0;
}