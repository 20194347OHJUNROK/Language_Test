#include<stdio.h>
int factorial(int n);
// 오일러 수 구하기
int main()
{
	int num;
	double result = 1.0;
	printf("어디까지 계산할까요? : ");
	scanf("%d", &num);

	for (int i = 1; i <= num; i++)
	{
		result += 1.0 / factorial(i);
	}
	printf("오일러의 수는 %lf입니다.\n", result);

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