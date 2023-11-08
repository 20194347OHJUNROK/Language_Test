#include<stdio.h>
// 이항 계수 구하기
int recursive(int n, int k)
{
	if (k == 0 || k == n)
		return 1;
	else
		return recursive(n - 1, k - 1) + recursive(n - 1, k);
}

int main()
{
	int n, k;
	printf("n = ");
	scanf("%d", &n);
	printf("k = ");
	scanf("%d", &k);

	printf("%d\n",recursive(n, k));
	return 0;
}