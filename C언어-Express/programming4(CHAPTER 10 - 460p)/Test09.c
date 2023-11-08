#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define R 10
#define C 3

void random(int (* arr)[C]);
int main()
{
	int student[R][C] = { 0 };
	int i, j, max, min;
	srand((unsigned)time(NULL));
	random(student);

	for (i = 0; i < R; i++)
	{
		max = student[i][0];
		min = student[i][0];
		for (j = 0; j < C; j++)
		{
			if (max < student[i][j]) { max = student[i][j]; }
			if (min > student[i][j]) { min = student[i][j]; }
		}
		printf("시험 #%d의 최대점수 = %d\n",i,max);
		printf("시험 #%d의 최저점수 = %d\n\n",i,min);
	}

	return 0;
}

void random(int (*arr)[C])
{
	int i, j;

	for (i = 0; i < R; i++)
	{
		for (j = 0; j < C; j++)
		{
			arr[i][j] = (rand() % 91) + 10;
		}
	}

	printf("학번\t시험#1\t시험#2\t시험#3\n");
	printf("-----------------------------------\n");
	for (i = 0; i < R; i++)
	{
		printf(" %d\t", i + 1);
		for (j = 0; j < C; j++)
		{
			printf(" %2d\t", arr[i][j]);
		}
		printf("\n-----------------------------------\n");
	}
}