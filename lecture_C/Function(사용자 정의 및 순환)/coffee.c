// Ŀ�� ���Ǳ� ���α׷� ������
#include<stdio.h>

int coffee_machine(int coffee, char guest);

// �������� ���� �� �ʱ�ȭ
int coffee = 0;
char prim[5] = "����";	// �ѱ��� ���־� ��Ʃ��������� 2����Ʈ�� �ν�
char sugar[5] = "����";
char americano[11] = "�Ƹ޸�ī��";
char macchiato[9] = "�����ƶ�";
char guest = 'A';

int main()
{
	int choice = 0;
	int cnt = 0;

	printf("�� ���� Ŀ�Ǹ� ���Ͻʴϱ�? : ");
	scanf("%d", &cnt);
	
	for (int i = 0; i < cnt; i++, guest++)
	{
		printf("%c��, � Ŀ�Ǹ� �ֹ��Ͻðھ��? (1: ����, 2: ����, 3: �Ƹ޸�ī��, 4: �����ƶ�) : \n",guest);
		scanf_s("%d", &coffee);
		getchar();
		
		choice = coffee_machine(coffee, guest);
		if (choice == -1) { printf("ó������ �ٽ� �������ּ���!.\n\n"); break; }
	}

	return 0;
}

// Ŀ���� ������ �б��ϴ� �Լ�
int coffee_machine(int coffee, char guest)
{
	switch(coffee)
	{
	case 1:
		printf("%c��. Ŀ�� ���Խ��ϴ�.\n", guest);
		printf("%s Ŀ���Դϴ�.\n\n", prim);
		break;

	case 2:
		printf("%c��. Ŀ�� ���Խ��ϴ�.\n", guest);
		printf("%s Ŀ���Դϴ�.\n\n", sugar);
		break;

	case 3:
		printf("%c��. Ŀ�� ���Խ��ϴ�.\n", guest);
		printf("%s Ŀ���Դϴ�.\n\n", americano);
		break;

	case 4:
		printf("%c��. Ŀ�� ���Խ��ϴ�.\n", guest);
		printf("%s Ŀ���Դϴ�.\n\n", macchiato);
		break;

	default:
		printf("%c��. �ֹ��� ��ҵǼ̽��ϴ�.\n", guest);
		return -1;		
		// �ֹ� ��ҽ� ��ȯ���� -1�� �ְ� �����Լ��� ������ Ż�����
		//	����� �ϰԲ� �Ѵ�.
	}
}