#include<stdio.h>
int get_tax(int income);

int main()
{
	int income;
	printf("소득을 입력하시오(만원) : ");
	scanf("%d", &income);

	printf("소득세는 %d입니다.\n",get_tax(income));
	return 0;
}

int get_tax(int income)
{
	if (income > 1000)
	{
		// 1000만원 초과인 부분은 10% , 나머지 1000만원 이하인 부분은 8%의 소득세가 붙는다고 가정하자.
		return(income - 1000) * 0.1 + 1000 * 0.08;
	}
	else
	{
		return income * 0.08;
	}

	return 0;
}