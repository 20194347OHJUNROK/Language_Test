#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define L 10
void random(int*ptr);

int main()
{
	int arr[L] = { 0 };
	int i = 0;
	srand((unsigned)time(NULL));
	random(arr);

	int max = arr[0];
	int min = arr[0];

	for (i = 0; i < L; i++)
	{
		if (max < arr[i]) { max = arr[i]; }
		else if (min > arr[i]) { min = arr[i]; }
	}

	printf("�ִ밪�� %d\n", max);
	printf("�ּҰ��� %d\n", min);

	return 0;
}

void random(int *ptr)
{
	for (int i = 0; i < L; i++)
	{
		*(ptr + i) = rand();
	}
}