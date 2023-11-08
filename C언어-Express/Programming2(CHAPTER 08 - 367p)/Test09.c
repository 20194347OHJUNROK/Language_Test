#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int b_rand();

int main()
{
	srand((unsigned)time(NULL));

	for (int i = 0; i < 5; i++)
	{
		int result = b_rand();
		printf("%2d", result);
	}
	return 0;
}

int b_rand()
{
	return rand() % 2;
}