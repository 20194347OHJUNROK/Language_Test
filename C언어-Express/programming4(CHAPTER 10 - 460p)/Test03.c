#include<stdio.h>
#define L 10
int array_equal(int a[], int b[], int size);
void print_array(int a[], int b[], int size);

int main()
{
	int arr1[L] = { 0 };
	int arr2[L] = { 0 };
	int flag;
	print_array(arr1, arr2, L);
	printf("\n--------------------------------------------------\n");

	flag = array_equal(arr1, arr2, L);

	if (flag)
		printf("2개의 배열은 서로 같음\n");
	else
		printf("2개의 배열은 서로 다름\n");

	return 0;
}

int array_equal(int a[], int b[], int size)
{

	for (int i = 0; i < size; i++)
	{
		if (a[i] != b[i])
			return 0;
	}
	return 1;
}

void print_array(int a[], int b[], int size)
{
	int i = 0;

	printf("arr1 : ");
	for (i = 0; i < L; i++)
		scanf("%d", &a[i]);

	printf("arr2 : ");
	for (i = 0; i < L; i++)
		scanf("%d", &b[i]);

}