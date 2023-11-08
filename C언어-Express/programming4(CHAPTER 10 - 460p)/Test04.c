#include<stdio.h>
#define L 10
void copy_array(int a[], int b[], int size);

int main()
{
	int arr1[L] = { 0 };
	int arr2[L] = { 0 };

	printf("arr1 : ");
	for (int i = 0; i < L; i++)
		scanf("%d", &arr1[i]);

	copy_array(arr1, arr2, L);

	printf("arr2 : ");
	for (int i = 0; i < L; i++)
		printf("%d ", arr2[i]);

	return 0;
}

void copy_array(int a[],int b[], int size)
{
	for (int i = 0; i < size; i++)
		b[i] = a[i];
}