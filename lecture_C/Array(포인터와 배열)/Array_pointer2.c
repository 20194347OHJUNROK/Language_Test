#include<stdio.h>

int main()
{
	// 배열 포인터
	//  배열을 가리키는(참조하는) 포인터
	int arr[3][3] = {
		{1,2,0},
		{3,4,0},
		{5,6,0}
	};

	int(*pArr2)[3] = arr; // 포인터 변수
	// int (* pArr2)[3] = arr;
	// *pArr2 의 타입 = int형 데이터 2개를 저장하는 배열을 가리키는 포인터

	printf("arr   -> %u\n", arr);
	printf("pArr2 -> %u\n", pArr2);

	printf("sizeof(arr) = %lld\n", sizeof(arr));
	// int 형 데이터를 6(3 * 2)개를 저장하는 배열이기 때문에 24byte의 크기를 가진다.
	printf("sizeof(pArr2) = %lld\n", sizeof(pArr2));
	// 메모리의 주소를 저장하는 포인터이기 때문에 8byte의 크기를 가진다.
	printf("--------------------------------------------------------------------------------------------------\n");
//-----------------------------------------------------------------------------------------------------------------

	printf("arr[1][1]   -> %d\n", arr[1][1]);
	printf("arr[1][1]   -> %d\n", *(*(arr + 1) + 1));
	printf("pArr2[1][1] -> %d\n", *(*(pArr2 + 1) + 1));
	// arr = int 형 배열 2개를 저장하는 배열을 3개 저장하는 2차원 배열

	return 0;
}
