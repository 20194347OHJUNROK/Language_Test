#include<stdio.h>
extern int ADD(int x, int y);
extern void login();


int main()
{
	
	printf("�ܺ��Լ� ȣ��\n");
	int result = ADD(500, 1000);

	int count;
	for (count = 0; count <= 3; count++)
	{
		printf("%dȸ ���� : ", count);
		login();
	}
	printf("\n�� %dȸ ���� �� ���α׷� ����\n", count - 1);

	return 0;
}
