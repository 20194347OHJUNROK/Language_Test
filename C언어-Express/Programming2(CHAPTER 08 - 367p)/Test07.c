#include<stdio.h>
int get_tax(int income);

int main()
{
	int income;
	printf("�ҵ��� �Է��Ͻÿ�(����) : ");
	scanf("%d", &income);

	printf("�ҵ漼�� %d�Դϴ�.\n",get_tax(income));
	return 0;
}

int get_tax(int income)
{
	if (income > 1000)
	{
		// 1000���� �ʰ��� �κ��� 10% , ������ 1000���� ������ �κ��� 8%�� �ҵ漼�� �ٴ´ٰ� ��������.
		return(income - 1000) * 0.1 + 1000 * 0.08;
	}
	else
	{
		return income * 0.08;
	}

	return 0;
}