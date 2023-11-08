/*
	* ���� ����(insert sort)
		: ���� �����̶� ���������� ���� ������ �������� ������� �����ϴ� �˰����̴�.
		  ���ο� ������ ���ԵǴ� ������ ���Ҹ� ������ �̵��ϸ鼭 �ڽź��� ���� ��Ҹ� ã�������� �̵��ϸ鼭 �ڸ��� ��ȯ�Ѵ�.
		  ��, �տ������� ���ʴ�� �̹� ���ĵ� �迭�� ��ҵ�� ���Ͽ� �ڽ��� ��ġ�� ���������ν� �����ϴ� �˰����̴�.

	* ���� : ���� �ӵ��� ����� ������.
	

	* ���� : ����(�迭 ��Ұ� ��������)���� �Ǿ��ִµ� ������������ �����Ѵٸ�
			��Ƚ���� ������ �������� �����ϱ⶧���� �ӵ��� �ſ� ���������ۿ� ����.
*/

#include<stdio.h>
#define LENGTH 10
#define SWAP(x,y){int temp = x; x = y; y= temp;}
void insert_sort(int arr[], int size);
void print_arr(int arr[], int size);

int main()
{
	int arr[LENGTH] = {0};
	printf("�Է� : ");
	for (int i = 0; i < LENGTH; i++)
	{
		scanf("%d", &arr[i]);
	}

	insert_sort(arr, LENGTH);

	return 0;
}

void insert_sort(int arr[], int size)
{
	int i=0, j=0;
	int cnt = 0;
	printf("���� �� : ");
	print_arr(arr,size);

	for (i = 1; i < size; i++)
	// �ܺ� �������� ������ ������ Ȯ���ϴ� ����� �ϰ��ִ�.
	// i�� ���� 1�� ������ ������ �ε����� 0�� ��ҿ� ���ϱ����ؼ��̴�.
	{
		for (j = i; j > 0; j--)
		{
			if (arr[j - 1] > arr[j])
			{ 
				SWAP(arr[j - 1], arr[j]);
				print_arr(arr, size);
				cnt++;
			}
			else
			{
				break;
			}
		}
	}
	printf("�� �� Ƚ�� : %d\n", cnt);
	printf("���� �� : ");
	print_arr(arr, size);
}

void print_arr(int arr[], int size)
{
	for (int i = 0; i < size; i++)
	{
		printf("%2d ", arr[i]);
	}
	printf("\n--------------------------------------------\n");
}