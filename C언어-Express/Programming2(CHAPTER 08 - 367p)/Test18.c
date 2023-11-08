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
		printf("원하시는 메뉴를 선택하시오.(1 - 5) : ");
		scanf("%d", &choice);
		printf("숫자 2개를 입력하시오 : ");
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
		printf("연산결과 : %d\n\n", result);
		printf("계속하려면 y를 누르시오 : ");
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
	"1. 덧셈\n",
	"2. 뺄셈\n",
	"3. 곱셈\n",
	"4. 나눗셈\n",
	"5. 나머지\n\n"
	};
	
	int length = sizeof(Menu) / sizeof(Menu[0]);
	for(int i=0; i<length; i++)
	{
		printf("%s", Menu[i]);
	}
}