#include<stdio.h>
#include<time.h>
#define MAX_SIZE 100000000		// 1��

long long list[MAX_SIZE] = { 0 };
clock_t start = 0, finish = 0, used_time = 0;

long long sequential_search(long long list[], long long size, long long search_value)
{
	printf("\n����Ž�� �Լ� ȣ��\n");
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
	printf("\n����Ž�� �Լ� ȣ��\n");
	long long low = 0;
	// ���� �ε��� 0�� �ǹ�
	long long high = size - 1;
	// ���� �ε����� size-1�� ���־���Ѵ�. 
	// �ε����� 0���� �����ϱ⶧���̴�.
	long long md = 0;

	while (low <= high)
	{
		// �߾Ӱ� ���
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
	printf("�迭 ����� ���� : %lld��\n", size);
	printf("ã���� �ϴ� ���ڸ� �Է� : ");
	scanf("%d", ptr);
}

void calcTime()
{
	used_time = finish - start;
	printf("����Ϸ�\n");
	printf("�ҿ�� �ð� : %.16f ��\n\n", (double)used_time / CLOCKS_PER_SEC);
}