#include<stdio.h>

int main()
{
	int total = 0;

	for (int i = 1; i <= 100; i++)
	{
		if (i % 3 == 0)
		{
			total += i;
		}
	}
	printf("1���� 100������ ��� 3�� ����� ���� %d�Դϴ�.\n", total);
	
	return 0;
}