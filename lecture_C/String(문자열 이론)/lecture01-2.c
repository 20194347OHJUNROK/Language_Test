#include<stdio.h>
#include<conio.h>

int main()
{
	int munja = 0;

	printf("_getch( )함수 사용\n");
	printf("문자 입력 : ");
	munja = getch();	// 에코 기능 X
	printf("\n문자 출력 : ");
	putch(munja);

	printf("\n\n_getche( )함수 사용\n");
	printf("문자 입력 : ");
	munja = getche(); // 에코 기능 O
	printf("\n문자 출력 : ");
	putch(munja);
//-------------------------------------------------------

	char op = ' ';
	printf("\n\n아스키 코드값을 출력하는 프로그램\n");
	printf("<<Enter키를 누르면 종료>>\n");

	while (op != '\r')
	{
		op = getch();
		printf("\n");

		printf("문자 : %c\n", op);
		printf("아스키코드값 : %d\n", op);
	}

	printf("프로그램 종료!\n");

	return 0;
}