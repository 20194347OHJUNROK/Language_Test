#include<stdio.h>

int ADD(int x, int y)
{
	int sum = x + y;
	printf("���� ��� : %d\n\n", sum);

	return 0;
}

void login()
{
	static int login = 0;

	if (login == 0)
	{
		printf("�α��� ����\n");
		login = 1;
		// static ������ ������ ������ �Ҵ�Ǿ� ���� ���α׷� ����ñ��� ������.
	}
	else
	{
		printf("���� �α��� ����\n");
		printf("Ȯ��\n");
	}

}