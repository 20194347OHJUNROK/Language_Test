#include<stdio.h>

int main()
{
	int num;
	printf("카운터의 초기값을 입력하시요 : ");
	scanf("%d", &num);

	for (int i = num; i > 0; i--)
	{
		printf("%2d", i);
	}
	// 벨소리를 내주는 제어문자
	printf("\a");

	return 0;
}