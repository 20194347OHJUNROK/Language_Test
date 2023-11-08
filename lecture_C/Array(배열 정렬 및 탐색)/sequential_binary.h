#include<stdio.h>
#include<time.h>
#define MAX_SIZE 100000000		// 1억

long long list[MAX_SIZE] = { 0 };
clock_t start = 0, finish = 0, used_time = 0;

long long sequential_search(long long list[], long long size, long long search_value)
{
	printf("\n순차탐색 함수 호출\n");
	long long i = 0;
	for (i = 0; i < size; i++)
	{
		if (search_value == list[i]) { return i; }
		else { continue; }
	}
	return -1;
}

long long binary_search(long long list[], long long size, long long search_value)
{
	printf("\n이진탐색 함수 호출\n");
	long long low = 0;
	// 하한 인덱스 0을 의미
	long long high = size - 1;
	// 상한 인덱스는 size-1을 해주어야한다. 
	// 인덱스는 0부터 시작하기때문이다.
	long long md = 0;

	while (low <= high)
	{
		// 중앙값 계산
		md = (low + high) / 2;

		if (search_value == list[md]) { return md; }
		else if (search_value > list[md]) { low = md + 1; }
		else { high = md - 1; }
	}
	return -1;
}

void print_arr(int* ptr)
{
	long long size = MAX_SIZE;
	printf("배열 요소의 개수 : %lld개\n", size);
	printf("찾고자 하는 숫자를 입력 : ");
	scanf("%d", ptr);
}

void calcTime()
{
	used_time = finish - start;
	printf("실행완료\n");
	printf("소요된 시간 : %.16f 초\n\n", (double)used_time / CLOCKS_PER_SEC);
}