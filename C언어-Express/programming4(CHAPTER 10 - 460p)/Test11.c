#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define L 5

int main()
{
	int place[L] = { 1, 2, 3, 4, 5 };
	int item[10] = { 0 };
	int choice;
	srand((unsigned)time(NULL));

	for (int i = 0; i < L; i++)
	{
		item[i] = place[rand() % 5];
	}
	printf("상품번호 입력 : ");
	scanf("%d", &choice);
	printf("상품번호 %d의 위치는 %d입니다.\n", choice,item[choice]);

	return 0;
}