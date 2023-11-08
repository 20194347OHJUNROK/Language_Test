/*
	* ���� ����(selection sort)
		: ���� �����̶� ���� �����ʰ� �����ִ� �迭 ��ҵ��� ���� ���������̵��� ������������ ���� ��Ű�� �˰��� ����̴�.
		  ���������� �迭 ����� ������ ������ ���� ���� ���� ã�Ƽ� �� ���� �����Ϳ� ��ȯ�� �ذ��� ���ĵǴ� ����̴�.

	* ���� : �������� ���� �������� ���� ���� ������ ��Ÿ����.
			���� ���� �����ϱ� ���ؼ� �񱳴� ������ ������
			��ȯ Ƚ�� ��ü�� ����.

	* ���� : �������� ���� ���������� ���� �ӵ��� �ް��� �������Ƿ� ���ǱⰡ �����.
*/

#include<stdio.h>
#define LENGTH 5

void selection_sort(int arr[], int size);

int main()
{
	int list[LENGTH] = { 0 };

	for (int i = 0; i < LENGTH; i++)
	{
		printf("�Է� : ");
		scanf("%d", &list[i]);
	}

	printf("main �Լ� ����\n");
	for (int i = 0; i < LENGTH; i++) { printf("%2d ", list[i]); }
	printf("\n----------------------------------------------------------\n");

	selection_sort(list, LENGTH);
	printf("selection_sort �Լ� ����\n");
	for (int i = 0; i < LENGTH; i++) { printf("%2d ", list[i]); }

	return 0;
}

void selection_sort(int arr[], int size)
{
	int i, j;
	int temp;
	int *sort;
	
	for (i = 0; i < size - 1; i++)
	{
		sort = arr+i;
		for (j = i + 1; j < size; j++)
		{
			if (arr[j] < *sort) { sort = arr+j; }
			// �ε�ȣ�� ������ ����  <(��������), >(��������) ������ �ȴ�.
		}
		temp = arr[i];
		arr[i] = *sort;
		*sort = temp;
	}

}