#include<stdio.h>

int ADD(int x, int y)
{
	int sum = x + y;
	printf("연산 결과 : %d\n\n", sum);

	return 0;
}

void login()
{
	static int login = 0;

	if (login == 0)
	{
		printf("로그인 성공\n");
		login = 1;
		// static 변수는 데이터 영역에 할당되어 값을 프로그램 종료시까지 유지함.
	}
	else
	{
		printf("현재 로그인 상태\n");
		printf("확인\n");
	}

}