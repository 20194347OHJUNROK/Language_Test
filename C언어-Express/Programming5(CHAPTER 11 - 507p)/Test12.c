#include<stdio.h>
void get_int(int* px, int* py)
{
	printf("정수의 합은 %d\n", *px + *py);
}

int main()
{
	int x, y;
	printf("2개의 정수를 입력하시오(예 : 10 20) : ");
	scanf("%d %d", &x, &y);

	get_int(&x, &y);
	return 0;
}