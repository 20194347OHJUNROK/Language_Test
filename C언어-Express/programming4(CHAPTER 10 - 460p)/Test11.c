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
	printf("��ǰ��ȣ �Է� : ");
	scanf("%d", &choice);
	printf("��ǰ��ȣ %d�� ��ġ�� %d�Դϴ�.\n", choice,item[choice]);

	return 0;
}