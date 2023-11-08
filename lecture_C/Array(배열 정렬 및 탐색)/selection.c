/*
	* 선택 정렬(selection sort)
		: 선택 정렬이란 정렬 되지않고 섞여있는 배열 요소들의 값을 오름차순이든지 내림차순으로 정렬 시키는 알고리즘 방법이다.
		  선택정렬은 배열 요소의 데이터 값에서 가장 작은 값을 찾아서 맨 앞의 데이터와 교환을 해가며 정렬되는 방식이다.

	* 장점 : 데이터의 양이 적을때는 아주 좋은 성능을 나타낸다.
			작은 값을 선택하기 위해서 비교는 여러번 하지만
			교환 횟수 자체는 적다.

	* 단점 : 데이터의 양이 많아질수록 정렬 속도가 급격히 떨어지므로 사용되기가 힘들다.
*/

#include<stdio.h>
#define LENGTH 5

void selection_sort(int arr[], int size);

int main()
{
	int list[LENGTH] = { 0 };

	for (int i = 0; i < LENGTH; i++)
	{
		printf("입력 : ");
		scanf("%d", &list[i]);
	}

	printf("main 함수 영역\n");
	for (int i = 0; i < LENGTH; i++) { printf("%2d ", list[i]); }
	printf("\n----------------------------------------------------------\n");

	selection_sort(list, LENGTH);
	printf("selection_sort 함수 영역\n");
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
			// 부등호의 종류에 따라  <(오름차순), >(내림차순) 정렬이 된다.
		}
		temp = arr[i];
		arr[i] = *sort;
		*sort = temp;
	}

}