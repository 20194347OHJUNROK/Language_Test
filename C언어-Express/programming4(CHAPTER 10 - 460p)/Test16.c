#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

int arr[10][10];

int p1 = 0, p2 = 0;						//player

int x1 = 4, y1 = 4, x2 = 5, y2 = 5;		//monster1,2

int g1 = 9, g2 = 9;						//gold

void init();
void print();
void moveMon();

int main()
{

	char ch;
	init();
	print();

	while (1) 
	{

		// 목적지 도달시 종료!
		if (p1 == g1 && p2 == g2) 
			break;

		ch = _getch();

		switch (ch)
		{

		case 'w':
			// 몬스터를 만날시 종료!
			if (p1 == 0 || p1 == x1 || p1 == x2) break;

			arr[p1][p2] = 0;

			p1--;

			break;

		case 's':

			if (p1 == 9 || p1 == x1 || p1 == x2) break;

			arr[p1][p2] = 0;

			p1++;

			break;

		case 'a':

			if (p2 == 0 || p2 == y1 || p2 == y2) break;

			arr[p1][p2] = 0;

			p2--;

			break;

		case 'd':

			if (p2 == 9 || p2 == y1 || p2 == y2) break;

			arr[p1][p2] = 0;

			p2++;

			break;
		}

		// 다음 반복을 위해 초기화 작업 수행
		arr[p1][p2] = 1;
		arr[x1][y1] = 0;
		arr[x2][y2] = 0;

		moveMon();

		arr[x1][y1] = 2;
		arr[x2][y2] = 2;

		system("cls");

		print();
	}

	return 0;
}


void init()
{

	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			arr[i][j] = 0;
		}
	}

	arr[p1][p2] = 1;	//player 

	arr[g1][g2] = 100;	//gold

	arr[x1][y1] = 2;	// monster 1

	arr[x2][y2] = 2;	// monster 2

}


void print()
{

	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			if (arr[i][j] == 1) printf("#");

			else if (arr[i][j] == 2) printf("M");

			else if (arr[i][j] == 100) printf("G");

			else printf(".");
		}

		printf("\n");
	}
}


void moveMon()
{
	for (;;)
	{

		x1 = rand() % 9;
		y1 = rand() % 9;

		x2 = rand() % 9;
		y2 = rand() % 9;

		if (x1 != p1 && x2 != p1 && y1 != p2 && y2 != p2 && x1 != x2 && y1 != y2) break;

	}

}