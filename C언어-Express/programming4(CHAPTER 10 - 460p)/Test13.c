#include<stdio.h>
#define L 32
int main()
{
	int i, num;
	int binary[L] = { 0 };
	printf("10진수 입력 : ");
	scanf("%d", &num);

	printf("%d → ",num);
	for (i = 0; i < L && num>0; i++)
	{
		binary[i] = num % 2;
		num /= 2;
	}

	for (i = L-1; i >= 0; i--)
	{
		printf("%d", binary[i]);
	}

	return 0;
}