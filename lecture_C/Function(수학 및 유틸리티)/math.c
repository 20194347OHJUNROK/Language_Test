#include<stdio.h>
#include<math.h> // ���� �Լ��� �̿��ϱ� ���� ǥ�� ���̺귯��

/* ���а��� �Լ�
 ceil( )  �Լ�	: �Ű������� ���� double ���� ������ �ø�ó��
 floor( ) �Լ�	: �Ű������� ���� double ���� ������ ����ó��
 fabs( )  �Լ�	: �Ű������� ���� ���� ������ ������ִ� �Լ�
 pow( )	  �Լ�	: �Ű������� 2��, �ϳ��� ������ �� ����� �ǰ� �� �ϳ��� ����(��)�� �ȴ�.
				  ��, �������� �����ִ� �Լ��̴�.
 sqrt( )  �Լ�	: �Ű������� ���� ���� �������� �����ִ� �Լ�
*/

int main()
{
	int choice = 0;
	double result, num1, num2 = 0.0;

	do
	{
		printf("1. �ø�ó��\n2. ����ó��\n3. ���� ���\n4. ������ ���\n5. ������ ���\n0. ���α׷� ����\n");
		printf("��ȣ ���� : ");
		scanf("%d", &choice);
		printf("\n");


		switch (choice)
		{
		case 1:
			printf("1. �ø�ó���� ����ϴ� ���α׷�\n");
			printf("�ø�ó�� ��� �Ǽ� �Է� : ");
			scanf("%lf", &num1);

			result = ceil(num1);
			printf("%lf�� �ø�ó�� ����� : %lf\n\n", num1, result);
			break;

		case 2:
			printf("2. ����ó���� ����ϴ� ���α׷�\n");
			printf("����ó�� ��� �Ǽ� �Է� : ");
			scanf("%lf", &num2);

			result = floor(num2);
			printf("%lf�� ����ó�� ����� : %lf\n\n", num2, result);
			break;

		case 3:
			printf("3. ������ ����ϴ� ���α׷�\n");
			printf("�Ǽ��Է� : ");
			scanf("%lf %lf", &num1,&num2);

			result = fabs(num1 - num2);
			printf("%lf - %lf�� [����] : %lf\n\n", num1, num2, result);
			break;

		case 4:
			printf("4. �������� ����ϴ� ���α׷�\n");
			printf("������� �Ǽ� �Է� : ");
			scanf("%lf", &num1);

			printf("����(��) �Է� : ");
			scanf("%lf", &num2);

			result = pow(num1, num2);
			printf("%lf�� %lf���� ����� : %lf\n\n", num1, num2, result);
			break;

		case 5:
			printf("5. �������� ����ϴ� ���α׷�\n");
			printf("�������� ���� �Ǽ� �Է� : ");
			scanf("%lf", &num1);

			result = sqrt(num1);
			printf("%lf�� �������� ����� : %lf\n\n", num1, result);
			break;

		case 0:
			printf("���α׷��� �����մϴ�.\n\n");
			exit(0);

		default :
			printf("���ÿ���!!! �߸��Է��ϼ̽��ϴ�.\n\n");
			continue;
			break;
		}
	} while (1);

	return 0;
}