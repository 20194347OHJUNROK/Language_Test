#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int b_rand(int n);

int main()
{
	int input;
	char choice;
	do
	{
		srand((unsigned)time(NULL));
		printf("�ո� �Ǵ� �޸�(1 �Ǵ� 0) : ");
		scanf("%d", &input);

		b_rand(input);
		printf("����Ͻðڽ��ϱ�? (y �Ǵ� n) : ");
		scanf(" %c", &choice);

	} while (choice != 'n');

	return 0;
}

int b_rand(int n)
{
	int random = rand() % 2;
	if (n == random) { printf("�¾ҽ��ϴ�.\n\n"); }
	else { printf("Ʋ�Ƚ��ϴ�.\n\n"); }
	
	return 0;
}