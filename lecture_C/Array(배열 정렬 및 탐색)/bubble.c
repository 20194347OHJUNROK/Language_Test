/*
	* 버블 정렬(bubble sort)
		: 버블 정렬은 앞에서부터 인접하는 원소의 값을 비교하며 정렬하는 알고리즘 방법이다. 이를 끝까지 수행하면
		  제일 큰 값이 맨뒤에 위치하게된다. 그리고 정렬할 개수를 1씩 줄인후에 다시 반복한다.
		  정렬할 원소의 개수가 1이면 정렬 작업이 완료된다.
		  즉, 안전성의 보장을 원하고 데이터의 양이 너무 크지 않는다면 버블정렬을 사용하기를 권장한다!

	* 장점 : 인접해 있는 두개의 값을 비교하여 자료의 위치를 이동시키므로 단순하다.
			 여러 차례 값을 비교하므로 안정성 있게 값을 정렬시킬수있다.

	* 단점 : 다른 정렬에 비해서 연산시간이 오래 걸린다.

*/

#include<stdio.h>
#define LENGTH 10
void bubble_sort(int arr[], int size);
void print_array(int arr[], int size);

int main()
{
	int array[LENGTH] = {99,55,10,-7,0,3,28,381,75,30};
	printf("정렬 전 : ");
	print_array(array, LENGTH);
	printf("---------------------------------------------------------\n");

	
	bubble_sort(array, LENGTH);

	printf("정렬 후 :");
	print_array(array, LENGTH);
	return 0;
}

void bubble_sort(int arr[], int size)
{
	// 버블 정렬을 하기 위해서는 반드시 더블루프를 사용해야 하며,
	// 내부루프 안에는 반드시 조건문이 있어줘야한다.
	int temp;
	int i, j;
	int cnt = 0;

	printf("bubble 정렬 함수 호출함\n");

	/* (1)
	* 외부루프에서 1씩 줄어드게 만드는 경우(자기 자신은 제외)
	for (i = size; i > 1; i--)
	{
		for (j = 1; j < i; j++)
		{
			if (arr[j-1] > arr[j])
			// 뒤에있는 요소가 앞의 요소보다 크다면...
			// 부등호의 방향에 따라 ('>' : 오름차순 정렬 , '<' : 내림차순 정렬)으로 구분된다.
			{
				temp = arr[j];
				arr[j] = arr[j-1];
				arr[j-1] = temp;
				print_array(arr, size);
				cnt++;
				printf("-----------------------------------------------\n");
			}
		}
	}
	*/


	//(2)
	
	for (i = 0; i < size-1; i++)
	{
	// 총 비교단계는 (배열의 길이 - 1)만큼이다. (자기자신은 제외)
	// 각 단계별로 비교횟수는 '항목의 갯수 - 1'에서 시작해서
	// 1씩 줄어들게 내부루프를 구현하면 된다.
		for (j = 0; j < size-1-i; j++)
		{
			if (arr[j] > arr[j + 1])	// 뒤에 있는 요소가 앞의 요소보다 크다면...(오름차순 정렬)
			{
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
				print_array(arr, size);
				cnt++;
				printf("-----------------------------------------------\n");
			}
		}
	}

	printf("총 비교 횟수 : %d\n", cnt);
	

}

void print_array(int arr[], int size)
{
	for (int i = 0; i < size; i++)
	{
		printf("%3d ", arr[i]);
	}
	printf("\n");
}