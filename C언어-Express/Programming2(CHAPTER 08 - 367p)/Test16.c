#include<stdio.h>
int factorial(int n);
// ���Ϸ� �� ���ϱ�
int main()
{
	int num;
	double result = 1.0;
	printf("������ ����ұ��? : ");
	scanf("%d", &num);

	for (int i = 1; i <= num; i++)
	{
		result += 1.0 / factorial(i);
	}
	printf("���Ϸ��� ���� %lf�Դϴ�.\n", result);

	return 0;
}

int factorial(int n)
{
	long long factorial = 1;
	for (int i = 1; i <= n; i++)
	{
		factorial *= i;
	}
	return factorial;
}