#include<stdio.h>
// 최대공약수를 구하는 함수
int get_gcd(int x, int y);
// 최소공배수를 구하는 함수
void get_lcm_gcd(int x, int y, int* p_lcm, int* p_gcd);

int main()
{
	int n1, n2;
	int lcm, gcd;

	printf("두개의 정수를 입력하시오 : ");
	scanf("%d %d", &n1, &n2);

	get_gcd(n1, n2);
	get_lcm_gcd(n1, n2, &lcm, &gcd);

	printf("최소공배수는 %d입니다.\n", lcm);
	printf("최대공약수는 %d입니다.\n", gcd);

	return 0;
}

int get_gcd(int x, int y)
{
	while (y != 0)
	{
		int a = x % y;
		x = y;
		y = a;
	}
	return x;
}

void get_lcm_gcd(int x, int y, int* p_lcm, int* p_gcd)
{
	*p_gcd = get_gcd(x, y);
	*p_lcm = (x * y) / *p_gcd;
}