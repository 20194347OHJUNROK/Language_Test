#include<stdio.h>
int array_sum(int* a, int size);
int main()
{
	int arr[10] = { 0 };
	int total;

	printf("월급 입력 : ");
	for (int i = 0; i < 10; i++)
		scanf("%d", &arr[i]);

	total = array_sum(arr, 10);
	printf("월급의 합 = %d\n", total);

	return 0;
}

int array_sum(int* a, int size)
{
	int i;
	int sum = 0;

	printf("A[] = ");
	for (i = 0; i < size; i++)
	{
		printf("%d ", a[i]);
		sum += a[i];
	}
	printf("\n");

	return sum;
}