/*
	* 순차 탐색(sequential search)
	: 배열 요소의 데이터 값을 처음부터 순서대로 하나씩 꺼내어 원하는 것을 찾을때까지
	  탐색하는 방법이다. 순차 탐색은 비교적 간단하지만, 배열의 모든 요소를 처음부터 끝까지 탐색하기때문에
	  다소 시간이 소요된다는 단점이 있다.


	* 이진 탐색(binary search)
	: 이진 탐색은 찾고자 하는값을 배열의 중앙에서부터 탐색하는 방법이다.
	  순차탐색은 탐색시간이 오래걸린다는 단점이있지만 이진탐색은 배열의 중앙을 기준으로
	  두 부분으로 나누어 찾는것이므로 소요시간이 짧다.
	  하지만 이진탐색은 배열의 요소가 순서대로 정리되어있어야만 탐색이 가능하다.
	  배열의 요소가 순차적으로 정리되어있지않다면 정렬을 먼저 수행해주어야한다!!

	// 즉, 데이터의 양이 많아질수록 이진탐색이 순차탐색보다 속도가 훨씬 더 빠르다는것을 알수있다. 
*/

#include<stdio.h>
#include"sequential_binary.h"
int main()
{
	long long i = 0, result = 0, search_value = 0;
	printf("배열값 저장중....\n");
	start = clock();
	for (i = 0; i < MAX_SIZE; i++)
	{
		list[i] = i;
	}
	finish = clock();
	calcTime();
	print_arr(&search_value);
//--------------------------------------------------------------------------

	// 순차탐색 소요시간 측정
	start = clock();
	result = sequential_search(list, MAX_SIZE, search_value);
	// 찾고자 하는 값이 존재하지 않는 경우
	if (result == -1)
	{
		printf("찾고자하는 값이 존재하지 않습니다.\n");
		printf("프로그램을 종료합니다.\n");
		exit(0);
	}
	finish = clock();
	calcTime();

//--------------------------------------------------------------------------

	// 이진탐색 소요시간 측정
	start = clock();
	result = binary_search(list, MAX_SIZE, search_value);
	// 찾고자 하는 값이 존재하지 않는 경우
	if (result == -1)
	{
		printf("찾고자하는 값이 존재하지 않습니다.\n");
		printf("프로그램을 종료합니다.\n");
		exit(0);
	}
	finish = clock();
	calcTime();

	return 0;
}

