#include<stdio.h>
#include<stdlib.h>
#include<time.h>
/*
	* �迭 ��ҵ��� ���� �����Ű����������
	* const Ű���带 �������ָ�ȴ�.
	
	Q1.
	�迭�� 10��, 13���� �����ϰ�
	������ �߻����� ���� 20�� ���Ϸ� �������� ���� ä��� ���α׷��� �ۼ��϶�!
*/
void menu();
void heart();
#define R 10
#define C 13

int main()
{
	int choice;

	while (1)
	{
		menu();
		printf("��ȣ ���� : ");
		scanf("%d", &choice);

		switch (choice)
		{
		case 1:
			heart();
			break;
		case 2:
			printf("���α׷� ����!\n");
			exit(0);
		default:
			printf("���� �Է� ����!!\n");
			printf("�ٽ� �Է����ּ���.\n\n");
			continue;
		}
	}
	return 0;
}

void menu()
{
	printf("1. ���α׷� ����\n");
	printf("2. ���α׷� ����\n");
}

void heart()
{
	int symbol[R][C] = {0};
	int i, j;
	srand((unsigned)time(NULL));

	for (i = 0; i < R; i++)
	{
		for (j = 0; j < C; j++)
		{
			if (rand() % 100 < 20)
			{
				symbol[i][j] = 1;
			}
			else
			{
				symbol[i][j] = 0;
			}
		}
	}


	printf("----------------------------------------------------------\n");
	for (i = 0; i < R; i++)
	{
		for (j = 0; j < C; j++)
		{
			if (symbol[i][j] == 1)
			{
				printf(" �� ");
			}
			else 
			{
				printf(" �� ");
			}
		}
		printf("\n");
	}
	printf("----------------------------------------------------------\n");


	printf("----------------------------------------------------------\n");
	for (i = 0; i < R; i++)
	{
		for (j = 0; j < C; j++)
		{
			if (symbol[i][j] == 1)
			{
				printf(" %2d ",symbol[i][j]);
			}
			else
			{
				printf(" %2d ",symbol[i][j]);
			}
		}
		printf("\n");
	}
	printf("----------------------------------------------------------\n");
}