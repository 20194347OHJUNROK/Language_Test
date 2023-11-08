#include<stdio.h>
#define LENGTH 7
void reverse_print(char** pc, int size);

int main()
{
	char* cities[LENGTH] = { "서울", "대전", "대구", "광주", "인천", "제주", "부산" };;

	printf("문자열 배열 출력 : ");
	printf("[");
	for (int i = 0; i < LENGTH; i++)
	{
		printf(" %s ", cities[i]);
	}
	printf("]");
	printf("\n--------------------------------------------------------------------\n");
	reverse_print(cities, LENGTH);



	return 0;
}

void reverse_print(char** pc, int size)
{
	int i;
	printf("역순으로 출력 : ");
	printf("[");
	/*
	for (int i = size-1; i >=0; i--)
	{
	// 배열의 인덱스를 가지고 역순으로 출력
		printf(" %s ",pc[i]);
	}
	*/

	// 이중 포인터의 주소값을 배열의 맨끝으로 이동
	for (i = 0; i < size; i++) 
	{ pc++; }
	for (i = 1; i <= size; i++)
	{
		// 이중포인터의 주소값을 갑소시키면서 배열값을 역순으로 출력
		printf(" %s ", *(--pc));
	    // printf(" %s ", *(pc - i));
	}
	printf("]");

}