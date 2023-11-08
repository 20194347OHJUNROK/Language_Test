// ������ȯ ���⸦ ������

#include<stdio.h>
#define MILE 0.621371		// �ӵ��� ǥ���ϴ� ����
#define LB	2.204623		// ���Ը� ǥ���ϴ� ����

// �Լ� ����(����)
void km_mile(double swap);
void kg_lb(double swap);

int main()
{
	char op = ' ';
	double input = 0.0;

	do
	{
		printf("A. km/h�� mile/h�� ȯ���ϴ� ���α׷�\n");
		printf("B. kg�� lb�� ȯ���ϴ� ���α׷�\n");
		printf("Q. ���α׷� ����.\n");
		
		printf("���� : ");
		scanf("%c", &op);
		getchar();

		if (op == 'A' || op == 'a')
		{
			printf("A. km/h�� mile/h�� ȯ���ϴ� ���α׷�\n");
			printf("�ӵ�(km/h)�� �Է��ϼ��� : ");
			scanf("%lf", &input);
			km_mile(input);
			getchar();
		}
		else if (op == 'B' || op == 'b')
		{
			printf("B. kg�� lb�� ȯ���ϴ� ���α׷�\n");
			printf("����(kg)�� �Է��ϼ��� : ");
			scanf("%lf", &input);
			kg_lb(input);
			getchar();
		}
		else if (op == 'Q' || op == 'q')	// Ż�� �ڵ�
		{
			printf("���α׷��� �����մϴ�.\n");
			break;
		}
		else								// ���� �ڵ�
		{
			printf("�Է¿���!!!\n");
			printf("�ٽ� �Է����ּ���.\n\n");
			continue;
		}
	} while (1);

	return 0;
}
void km_mile(double swap)
{
	float result = swap * MILE;
	printf("�ӵ� %.5f km/h�� %.5f mile/h�Դϴ�.\n", swap, result);
	printf("���������� ȯ���� �����Ͽ����ϴ�.\n\n");
}

void kg_lb(double swap)
{
	float result = swap * LB;
	printf("���� %.5f kg�� %.5f lb�Դϴ�.\n", swap, result);
	printf("���������� ȯ���� �����Ͽ����ϴ�.\n\n");
}
