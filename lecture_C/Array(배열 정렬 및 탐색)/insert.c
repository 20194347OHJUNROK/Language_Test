/*
	* 삽입 정렬(insert sort)
		: 삽입 정렬이란 점진적으로 정렬 범위를 넓혀가는 방식으로 정렬하는 알고리즘이다.
		  새로운 범위에 포함되는 마지막 원소를 앞으로 이동하면서 자신보다 작은 요소를 찾을때까지 이동하면서 자리를 교환한다.
		  즉, 앞에서부터 차례대로 이미 정렬된 배열의 요소들과 비교하여 자신의 위치를 삽입함으로써 정렬하는 알고리즘이다.

	* 장점 : 정렬 속도가 상당히 빠르다.
	

	* 단점 : 역순(배열 요소가 내림차순)으로 되어있는데 오름차순으로 정렬한다면
			비교횟수가 루프를 돌때마다 증가하기때문에 속도가 매우 느려질수밖에 없다.
*/

#include<stdio.h>
#define LENGTH 10
#define SWAP(x,y){int temp = x; x = y; y= temp;}
void insert_sort(int arr[], int size);
void print_arr(int arr[], int size);

int main()
{
	int arr[LENGTH] = {0};
	printf("입력 : ");
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
	printf("정렬 전 : ");
	print_arr(arr,size);

	for (i = 1; i < size; i++)
	// 외부 루프에서 정렬할 범위를 확대하는 기능을 하고있다.
	// i의 값을 1로 설정한 이유는 인덱스가 0인 요소와 비교하기위해서이다.
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
	printf("총 비교 횟수 : %d\n", cnt);
	printf("정렬 후 : ");
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