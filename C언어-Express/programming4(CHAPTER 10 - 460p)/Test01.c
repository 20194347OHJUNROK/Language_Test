#include<stdio.h>

int main()
{
	int days[] = { 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	int rows = sizeof(days) / sizeof(days[0]);

	for (int i = 0; i < rows; i++)
	{
		printf("%d���� %d�ϱ��� �ֽ��ϴ�.\n", i+1, days[i]);
	}

	return 0;
}