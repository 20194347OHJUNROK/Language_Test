#include<stdio.h>
int recycle_sum(int a)
{
	if (a != 0)
		return a + recycle_sum(a-1);
	else
		return a;
}

int main()
{
	int integer;
	int result = 0;

	printf("������ �Է��Ͻÿ� : ");
	scanf("%d", &integer);

	result = recycle_sum(integer);
	printf("1���� 10������ �� : %d\n", result);

	return 0;
}
