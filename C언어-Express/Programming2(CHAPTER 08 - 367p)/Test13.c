#include<stdio.h>
int is_multiple(int n, int m);

int main()
{
	int n1, n2;
	int multiple;

	printf("첫번째 정수를 입력하시오 : ");
	scanf("%d", &n1);
	printf("두번째 정수를 입력하시오 : ");
	scanf("%d", &n2);

	multiple = is_multiple(n1, n2);

	if (multiple)
	{
		printf("%d는 %d의 배수입니다.\n",n1,n2);
	}
	else
	{
		printf("%d는 %d의 배수가 아닙니다.\n", n1, n2);
	}

	return 0;
}

int is_multiple(int n, int m)
{
	return n % m == 0 ? 1 : 0;
}