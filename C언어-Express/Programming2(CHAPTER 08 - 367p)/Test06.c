#include<stdio.h>
#include<math.h>
int even(int n);
int absolute(int n);
int sign(int n);

int main()
{
	int num;
	printf("정수를 입력하시오 : ");
	scanf("%d", &num);

	even(num);
	absolute(num);
	sign(num);

	return 0;

}
int even(int n)
{
	if (n % 2 == 0) { printf("even()의 결과 : 짝수\n"); }
	else { printf("even()의 결과 : 홀수\n"); }

	return 0;
}

int absolute(int n)
{
	printf("absolute()의 결과 : %d\n", (int)fabs(n));
	return 0;
}

int sign(int n)
{
	if (n > 0)
	{
		printf("sign()의 결과 : 양수\n");
	}
	else if (n < 0)
	{
		printf("sign()의 결과 : 음수\n");
	}
	else
	{
		printf("sign()의 결과 : %d\n",n);
	}
	return 0;
}