#include<stdio.h>

int main()
{
	int n;
	int total = 0;

	printf("n의 값을 입력하시오 : ");
	scanf("%d", &n);

	for (int i = 1; i <= n; i++)
	{
		total += i * i;
	}
	printf("계산값은 %d입니다.\n", total);

	return 0;
}