#include<stdio.h>
//Q. �Լ� �������� �迭 �ǽ�
int hap(int x, int y);
int minus(int x, int y);
int mul(int x, int y);
int div(int x, int y);

int main()
{
	int(*ptr[4])(int, int) = { hap,minus,mul,div };
	/*
		�Ʒ��� ���� ��쿡�� �Լ� ������ ����! ���� ��쿡�� ����� ������,
		�Լ� �������� �迭 ���� ��쿡�� �迭�� ������ ����̱� ������
		�Ʒ� �ڵ�� ������ �߻��Ѵ�.
		int(*ptr[4])( ) = NULL;			// NULL������ �ʱ�ȭ
		ptr = { hap, minus, mul, div };
	*/

	printf("ptr�� �� ����Ʈ �� : %d\n\n", sizeof(ptr));
	printf("ptr�� ���� ���������� �Ҵ��� �Ǿ��ִ��� �˻�\n");
	for (int i = 0; i < 4; i++)
	{
		printf("ptr[%d]��° ���� �ּ� : %u\n",i, &ptr[i]);
	}
	printf("-----------------------------------------------------------\n");
	

	int choice;
	int result;
	int a, b;

re:
	printf("\nMenu : 0.����   1.����   2.����   3.������   4.������\n\n");
	printf("��ȣ�� �������ּ��� : ");
	scanf("%d", &choice);

	while (1)
	{
		if (choice < 0 || choice>4)
		{
			printf("���� ����!\n");
			printf("�ٽ� �Է����ּ���.\n\n");
			goto re;
		}
		else if (choice == 4) { break; }
		else
		{
			printf("�ΰ��� ������ �Է����ּ��� : ");
			scanf("%d %d", &a, &b);
			// ����ڰ� �Է��� ���� �ε����� ���Ͽ� �Լ��� ȣ��
			// �� �Ʒ��� �ڵ带 ��������ν� �ڵ��� ����ȭ(�б⹮ if~else�� �پ��)�� �̷������.
			result = ptr[choice](a, b);
			printf("����� : %d\n\n", result);
			goto re;
		}

	}
	printf("���α׷��� �����մϴ�.\n");

	return 0;
}

int hap(int x, int y) { return x + y; }
int minus(int x, int y) { return x - y; }
int mul(int x, int y) { return x * y; }
int div(int x, int y) { return x / y; }