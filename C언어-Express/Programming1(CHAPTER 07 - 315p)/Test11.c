#include<stdio.h>

int main()
{
	int n;
	int total = 0;

	printf("n�� ���� �Է��Ͻÿ� : ");
	scanf("%d", &n);

	for (int i = 1; i <= n; i++)
	{
		total += i * i;
	}
	printf("��갪�� %d�Դϴ�.\n", total);

	return 0;
}