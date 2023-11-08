// Q. 재귀함수를 이용하여 거듭제곱을 구하는 프로그램을 작성하라

#include<stdio.h>
int input();
int power(int pow_target, int squar);
int n1, n2 = 0;

int main()
{
	input();
	int result = power(n1, n2);
	printf("%d의 %d승은 %d이다.\n\n", n1, n2, result);

	return 0;
}

int input()
{
	printf("제곱 대상을 입력하세요 : ");
	scanf("%d", &n1);
	printf("지수(제곱값)을 입력하세요 : ");
	scanf("%d", &n2);
	return n1, n2;
}

int power(int pow_target, int square)
{
	if (square == 0) 
	{
		// 모든 수의 0승의 결과값은 1이다.
		printf("%d의 %d승\n\n", pow_target, square);
		return 1;
	}
	printf("%d의 %d승\n", pow_target, square);
	return pow_target * power(pow_target, square - 1);
}