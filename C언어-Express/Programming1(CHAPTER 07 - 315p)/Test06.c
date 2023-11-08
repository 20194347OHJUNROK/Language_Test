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
		printf("연산을 선택하시오 : ");
		// 버퍼 비우기 2번째 방법
		scanf(" %c", &choice);

		switch (choice)
		{
		case 'A':
			printf("두 수를 공백으로 분리하여 입력하시요 : ");
			scanf("%d %d", &a, &b);

			result = a + b;
			break;
		case 'S':
			printf("두 수를 공백으로 분리하여 입력하시요 : ");
			scanf("%d %d", &a, &b);

			result = a - b;
			break;
		case 'M':
			printf("두 수를 공백으로 분리하여 입력하시요 : ");
			scanf("%d %d", &a, &b);

			result = a * b;
			break;
		case 'D':
			printf("두 수를 공백으로 분리하여 입력하시요 : ");
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
		// 버퍼 비우기 1번째 방법
		getchar();
	} while(1);



	return 0;
}
