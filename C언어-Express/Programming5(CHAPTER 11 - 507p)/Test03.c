#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define L 10
void array_fill(int* a);

int main()
{
	int list[L] = { 0 };

	srand((unsigned)time(NULL));
	array_fill(list);
	return 0;
}

void array_fill(int* a)
{
	for (int i = 0; i < L; i++)
	{
		a[i] = rand();
		printf("%d ", a[i]);
	}
	printf("\n");
}