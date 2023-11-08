#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define L 10

int main()
{
	int arr[L] = { 0 };
	int max_index;
	int i, temp;
	srand((unsigned)time(NULL));

	printf("랜덤 숫자 출력 : ");
	for (i = 0; i < L; i++)
	{
		temp = rand() % 10;
		arr[temp]++;
		printf("%d ", temp);
	}
	printf("\n");


	printf("<<나온 횟수>>\n");
	for (i = 0; i < L; i++)
		printf("%d : %d번\n", i, arr[i]);

	max_index = 0;
	for (i = 1; i < L; i++)
	{
		if (arr[max_index] < arr[i])
			max_index = i;
	}

	printf("가장 많이 나온수 = %d\n",max_index);




	return 0;
}