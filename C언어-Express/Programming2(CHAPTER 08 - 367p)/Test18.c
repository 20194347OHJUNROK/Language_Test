#include<stdio.h>
void menu();
int add(int a, int b) { return a + b; }
int sub(int a, int b) { return a - b; }
int mul(int a, int b) { return a * b; }
int div(int a, int b) { return a / b; }
int rest(int a, int b) { return a % b; }

int main()
{
	int choice;
	int x, y;
	int result = 0;
	char input;
	while (1)
	{
		menu();
		printf("���Ͻô� �޴��� �����Ͻÿ�.(1 - 5) : ");
		scanf("%d", &choice);
		printf("���� 2���� �Է��Ͻÿ� : ");
		scanf("%d %d", &x, &y);

		switch (choice)
		{
		case 1:
			result = add(x, y);
			break;
		case 2:
			result = sub(x, y);
			break;
		case 3:
			result = mul(x, y);
			break;
		case 4:
			result = div(x, y);
			break;
		case 5:
			result = rest(x, y);
			break;
		}
		printf("������ : %d\n\n", result);
		printf("����Ϸ��� y�� �����ÿ� : ");
		scanf(" %c", &input);

		if (input == 'y') { continue; }
		else { break; }
	}
	return 0;
}

void menu()
{
	char* Menu[] = { "================================\n",
	"MENU\n",
	"================================\n",
	"1. ����\n",
	"2. ����\n",
	"3. ����\n",
	"4. ������\n",
	"5. ������\n\n"
	};
	
	int length = sizeof(Menu) / sizeof(Menu[0]);
	for(int i=0; i<length; i++)
	{
		printf("%s", Menu[i]);
	}
}