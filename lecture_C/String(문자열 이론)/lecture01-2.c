#include<stdio.h>
#include<conio.h>

int main()
{
	int munja = 0;

	printf("_getch( )�Լ� ���\n");
	printf("���� �Է� : ");
	munja = getch();	// ���� ��� X
	printf("\n���� ��� : ");
	putch(munja);

	printf("\n\n_getche( )�Լ� ���\n");
	printf("���� �Է� : ");
	munja = getche(); // ���� ��� O
	printf("\n���� ��� : ");
	putch(munja);
//-------------------------------------------------------

	char op = ' ';
	printf("\n\n�ƽ�Ű �ڵ尪�� ����ϴ� ���α׷�\n");
	printf("<<EnterŰ�� ������ ����>>\n");

	while (op != '\r')
	{
		op = getch();
		printf("\n");

		printf("���� : %c\n", op);
		printf("�ƽ�Ű�ڵ尪 : %d\n", op);
	}

	printf("���α׷� ����!\n");

	return 0;
}