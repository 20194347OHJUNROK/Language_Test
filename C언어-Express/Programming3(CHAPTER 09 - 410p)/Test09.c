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
	printf("������ �Է��Ͻÿ� : ");
	scanf("%d", &integer);

	printf("�ڸ����� �� : %d\n",get_digit_sum(integer));
	return 0;
}