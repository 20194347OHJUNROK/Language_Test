#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int b_rand(int n);

int main()
{
	int input;
	char choice;
	do
	{
		srand((unsigned)time(NULL));
		printf("앞면 또는 뒷면(1 또는 0) : ");
		scanf("%d", &input);

		b_rand(input);
		printf("계속하시겠습니까? (y 또는 n) : ");
		scanf(" %c", &choice);

	} while (choice != 'n');

	return 0;
}

int b_rand(int n)
{
	int random = rand() % 2;
	if (n == random) { printf("맞았습니다.\n\n"); }
	else { printf("틀렸습니다.\n\n"); }
	
	return 0;
}