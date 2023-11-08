#include<stdio.h>
extern int ADD(int x, int y);
extern void login();


int main()
{
	
	printf("외부함수 호출\n");
	int result = ADD(500, 1000);

	int count;
	for (count = 0; count <= 3; count++)
	{
		printf("%d회 실행 : ", count);
		login();
	}
	printf("\n총 %d회 수행 후 프로그램 종료\n", count - 1);

	return 0;
}
