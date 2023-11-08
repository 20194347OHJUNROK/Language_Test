#include<stdio.h>
int get_digit(int x)
{
	static int cnt = 1;
	if (x / 10 != 0)
	{
		get_digit(x / 10);
		cnt++;
	}
	return cnt;
}

int main()
{
	int integer;
	printf("정수를 입력하시오 : ");
	scanf("%d", &integer);

	printf("자리수의 개수 : %d\n" ,get_digit(integer));
	return 0;
}