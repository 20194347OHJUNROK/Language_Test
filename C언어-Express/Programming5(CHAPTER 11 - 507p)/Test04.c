#include<stdio.h>
void array_print(int* a, int size);

int main()
{
	int array[] = { 1, 2, 3, 4, 5 };
	int length = sizeof(array) / sizeof(int);

	array_print(array, length);
	return 0;
}

void array_print(int* a, int size)
{
	printf("A[] = { ");
	for (int i = 0; i < size; i++)
	{
		printf("%d ",*(a+i));
	}
	printf("}");
}