// Q. ����Լ��� �̿��Ͽ� �ŵ������� ���ϴ� ���α׷��� �ۼ��϶�

#include<stdio.h>
int input();
int power(int pow_target, int squar);
int n1, n2 = 0;

int main()
{
	input();
	int result = power(n1, n2);
	printf("%d�� %d���� %d�̴�.\n\n", n1, n2, result);

	return 0;
}

int input()
{
	printf("���� ����� �Է��ϼ��� : ");
	scanf("%d", &n1);
	printf("����(������)�� �Է��ϼ��� : ");
	scanf("%d", &n2);
	return n1, n2;
}

int power(int pow_target, int square)
{
	if (square == 0) 
	{
		// ��� ���� 0���� ������� 1�̴�.
		printf("%d�� %d��\n\n", pow_target, square);
		return 1;
	}
	printf("%d�� %d��\n", pow_target, square);
	return pow_target * power(pow_target, square - 1);
}