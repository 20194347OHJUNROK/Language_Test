// Q1. 무작위로 별 생성

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
	int num[10] = { 0 };
	srand((unsigned)time(NULL));

	int length = sizeof(num) / sizeof(int);


	for (int i = 0; i < length; i++)
	{
		printf("a[%d] : ",i);
		num[i] = 1 + (rand() % 10);

		for (int j = 0; j < num[i]; j++)
		{
			printf("*");
		}
		printf("\n");
	}

	return 0;
}