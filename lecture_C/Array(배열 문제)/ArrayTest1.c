#include<stdio.h>
#include<stdlib.h>
#include<time.h>
/*
	* 배열 요소들의 값을 변경시키지않으려면
	* const 키워드를 선언해주면된다.
	
	Q1.
	배열은 10행, 13열을 선언하고
	난수를 발생시켜 ♥는 20개 이하로 나머지는 ♡로 채우는 프로그램을 작성하라!
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
		printf("번호 선택 : ");
		scanf("%d", &choice);

		switch (choice)
		{
		case 1:
			heart();
			break;
		case 2:
			printf("프로그램 종료!\n");
			exit(0);
		default:
			printf("숫자 입력 오류!!\n");
			printf("다시 입력해주세요.\n\n");
			continue;
		}
	}
	return 0;
}

void menu()
{
	printf("1. 프로그램 실행\n");
	printf("2. 프로그램 종료\n");
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
				printf(" ♥ ");
			}
			else 
			{
				printf(" ♡ ");
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