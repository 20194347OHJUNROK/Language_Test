#include<stdio.h>
int add(int *a, int *b);
int sub(int *a, int *b);
int mul(int *a, int *b);
int div(int *a, int *b);

int main()
{
	int n1, n2;
	char input;
	while (1)
	{
		printf("������ �Է��Ͻÿ� : ");
		scanf("%d %c %d", &n1, &input, &n2);
		
		switch (input)
		{
		case '+':
			add(&n1, &n2);
			break;
		case '-':
			sub(&n1, &n2);
			break;
		case '*':
			mul(&n1, &n2);
			break;
		case '/':
			div(&n1, &n2);
			break;
		default:
			printf("�߸��Է�!\n");
			printf("�ٽ� �Է����ּ���.\n\n");
			getchar();
			break;
		}
	}

	return 0;
}
int add(int* a, int* b)
{
	static int count = 1;
	printf("������ �� %d�� ����Ǿ����ϴ�.\n", count);
	printf("������ : %d\n\n", *a + *b);
	count++;
	return 0;
}
int sub(int *a, int *b)
{
	static int count = 1;
	printf("������ �� %d�� ����Ǿ����ϴ�.\n", count);
	printf("������ : %d\n\n", *a - *b);
	count++;
	return 0;
}
int mul(int *a, int *b)
{
	static int count = 1;
	printf("������ �� %d�� ����Ǿ����ϴ�.\n", count);
	printf("������ : %d\n\n", *a * *b);
	count++;
	return 0;
}
int div(int *a, int *b)
{
	static int count = 1;
	printf("�������� �� %d�� ����Ǿ����ϴ�.\n", count);
	printf("������ : %d\n\n", *a / *b);
	count++;
	return 0;
}