#include<stdio.h>
void get_sum_diff(int x, int y, int* p_sum, int* p_diff);

int main()
{
	int x, y;

	printf("두 개의 정수를 큰순서대로 입력하시오 : ");
	scanf("%d %d", &x, &y);

	get_sum_diff(x, y, &x, &y);

	printf("원소들의 합 = %d\n", x);
	printf("원소들의 차 = %d\n", y);

	return 0;
}

void get_sum_diff(int x, int y, int* p_sum, int* p_diff)
{
	*p_sum = x + y;
	*p_diff = x - y;
}