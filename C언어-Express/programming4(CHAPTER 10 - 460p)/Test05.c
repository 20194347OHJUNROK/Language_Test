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

	printf("���� ���� ��� : ");
	for (i = 0; i < L; i++)
	{
		temp = rand() % 10;
		arr[temp]++;
		printf("%d ", temp);
	}
	printf("\n");


	printf("<<���� Ƚ��>>\n");
	for (i = 0; i < L; i++)
		printf("%d : %d��\n", i, arr[i]);

	max_index = 0;
	for (i = 1; i < L; i++)
	{
		if (arr[max_index] < arr[i])
			max_index = i;
	}

	printf("���� ���� ���¼� = %d\n",max_index);




	return 0;
}