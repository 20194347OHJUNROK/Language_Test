#include<stdio.h>

int main()
{
	int n;
	int r;
	int result = 1;

	printf("n�� �� : ");
	scanf("%d", &n);
	printf("r�� �� : ");
	scanf("%d", &r);

	for (int i = n; i >=(n-r-1); i--)
	{
		result *= i;
	}
	printf("������ ���� %d�Դϴ�.\n", result);

	return 0;
}