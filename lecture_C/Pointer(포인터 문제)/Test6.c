#include<stdio.h>
#define LENGTH 5
// Q. ���� ������ �ǽ�

void max_min(int* arr, int size, int** mxPtr, int** mnPtr);
int main()
{
	int* maxPtr = NULL;
	int* minPtr = NULL;
	int arr[LENGTH] = { 0 };

	for (int i = 0; i < LENGTH; i++)
	{
		printf("������ �Է��ϼ��� : ");
		scanf("%d", &arr[i]);
	}
	max_min(arr, LENGTH, &maxPtr, &minPtr);
	printf("�ִ밪 : %d , �ּҰ� : %d\n", *maxPtr, *minPtr);
	return 0;
}
void max_min(int* arr, int size, int** mxPtr, int** mnPtr)
{
	*mxPtr = &arr[0];
	*mnPtr = &arr[0];

	for (int i = 0; i < size; i++)
	{
		if (**mxPtr < arr[i]) { *mxPtr = &arr[i]; }
		if (**mnPtr > arr[i]) { *mnPtr = &arr[i]; }
	}


}