#include<stdio.h>

int main()
{
	char* menu[] = { "********************",
	"A---- Add",
	"S---- Subtract",
	"M---- Multiply",
	"D---- Divide",
	"Q---- Quit",
	"********************" };
	int length = sizeof(menu) / sizeof(menu[0]);
	char choice = ' ';
	int a, b;
	int result = 0;

	do
	{
		for (int i = 0; i < length; i++)
			printf("%s\n", menu[i]);

		re:
		printf("������ �����Ͻÿ� : ");
		// ���� ���� 2��° ���
		scanf(" %c", &choice);

		switch (choice)
		{
		case 'A':
			printf("�� ���� �������� �и��Ͽ� �Է��Ͻÿ� : ");
			scanf("%d %d", &a, &b);

			result = a + b;
			break;
		case 'S':
			printf("�� ���� �������� �и��Ͽ� �Է��Ͻÿ� : ");
			scanf("%d %d", &a, &b);

			result = a - b;
			break;
		case 'M':
			printf("�� ���� �������� �и��Ͽ� �Է��Ͻÿ� : ");
			scanf("%d %d", &a, &b);

			result = a * b;
			break;
		case 'D':
			printf("�� ���� �������� �и��Ͽ� �Է��Ͻÿ� : ");
			scanf("%d %d", &a, &b);

			result = a / b;
			break;
		case 'Q':
			return 0;

		default:
			printf("\n");
			goto re;
		}
		printf("%d\n\n", result);
		// ���� ���� 1��° ���
		getchar();
	} while(1);



	return 0;
}
