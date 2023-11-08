#include<stdio.h>
#include<stdlib.h>
#include<time.h>
double f_rand();

int main()
{
	srand(time(NULL));
	for (int i = 0; i < 5; i++)
	{
		printf("%-10lf", f_rand());
	}
	return 0;
}

double f_rand()
{
	return rand() / (double)RAND_MAX;
}