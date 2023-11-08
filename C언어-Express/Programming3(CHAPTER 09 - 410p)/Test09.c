#include<stdio.h>
int get_digit_sum(int n)
{
	if (n != 0)
		return ((n % 10) + get_digit_sum(n / 10));
	return n;
}

int main()
{
	int integer;
	printf("정수를 입력하시오 : ");
	scanf("%d", &integer);

	printf("자리수의 합 : %d\n",get_digit_sum(integer));
	return 0;
}