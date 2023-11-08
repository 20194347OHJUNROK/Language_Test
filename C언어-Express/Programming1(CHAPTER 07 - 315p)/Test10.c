#include<stdio.h>
#include<math.h>
int main()
{
	double n = 0.0;
	double result = 0;
	int count = 0;

	printf("실수의 값을 입력하시오 : ");
	scanf("%lf", &n);
	printf("거듭제곱 횟수를 입력하시오 : ");
	scanf("%d", &count);

	result = pow(n, count);
	printf("결과값은: %lf\n", result);

	return 0;
}