#include<stdio.h>

int main()
{
	int num;
	printf("������ �Է��Ͻÿ� : ");
	scanf("%d", &num);

	for (int i = 1; i <= num; i++)
	{
		if (num % i == 0)
		{
			printf("%2d ", i);
		}
	}

	return 0;
}