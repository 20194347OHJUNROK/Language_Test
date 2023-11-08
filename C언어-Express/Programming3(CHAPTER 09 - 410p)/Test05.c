#include<stdio.h>
int recycle_sum(int a)
{
	if (a != 0)
		return a + recycle_sum(a-1);
	else
		return a;
}

int main()
{
	int integer;
	int result = 0;

	printf("정수를 입력하시오 : ");
	scanf("%d", &integer);

	result = recycle_sum(integer);
	printf("1부터 10까지의 합 : %d\n", result);

	return 0;
}
