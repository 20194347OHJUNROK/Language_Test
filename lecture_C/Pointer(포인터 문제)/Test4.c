#include <stdio.h>

// 정수형 배열의 모든 원소를 출력하는 함수
//  → 함수의 인자가 배열인 경우, 매개변수의 타입을 반드시 포인터로 선언하고
//	  배열의 크기고 인자 값으로 받아오는 것이 좋다.
//  → 함수 중에서 포인터를 매개변수로 하는 경우
//    값이 수정되는 것을 막기 위해 const 를 반드시 같이 선언
void print_array(const int* ptr, int length)
{
	for (int i = 0; i < length; i++)
	{
		// ptr[i] = i * 100;
		printf("array[%d] = %d\n", i, ptr[i]);
		// printf("array[%d] = %d\n", i, *(ptr + i));
	}
}

void print_data(int data)
{
	data += 100;
}

int main()
{
	// 배열은 주소를 변경할 수 없는 포인터 상수
	// 포인터는 주소를 참조하는 포인터 변수
	//  → 둘 다 포인터 산술 연산자를 통해서 원하는 위치의 메모리에 접근이 가능.

	int arr1[] = { 10, 20, 30, 40, 50 };
	int arr2[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };

	print_array(arr1, sizeof(arr1) / sizeof(int));
	printf("----------------\n");
	print_array(arr2, sizeof(arr2) / sizeof(int));

	printf("----------------\n");
	printf("arr1[3] = %d\n", arr1[3]);

	int data = 100;
	printf("data = %d\n", data);
	print_data(data);
	printf("data = %d\n", data);
	return 0;
}

