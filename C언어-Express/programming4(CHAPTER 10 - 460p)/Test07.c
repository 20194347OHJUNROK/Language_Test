#include<stdio.h>
#define R 3
#define C 10

int main()
{
	int arr[R][C] = { 0 };
	int i, num;
	for (i = 0; i < C; i++)
	{
		arr[0][i] = i + 1;
		arr[1][i] = (i + 1) * (i + 1);
		arr[2][i] = (i + 1) * (i + 1) * (i + 1);
	}
		
	printf("정수를 입력하시오 : ");
	scanf("%d", &num);

	for (i = 0; i < C; i++)
	{
		if (arr[2][i] == num)
			printf("%d의 세제곱근은 %d\n", num, arr[0][i]);
		else if (arr[1][i] == num)
			printf("%d의 제곱근은 %d\n", num, arr[0][i]);
	}
	

	return 0;
}