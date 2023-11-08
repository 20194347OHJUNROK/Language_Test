#include<stdio.h>
#include<conio.h>
#include<ctype.h>

/*
	* 문자 라이브러리 함수
	: <ctype.h) 헤더파일에 존재
	  문자 검사 함수는 보통 함수이름의 괄호 앞에 is~로 시작한다.
	  문자 변환 함수는 보통 함수이름의 괄호 앞에 to~로 시작한다.
	  반환값은 int형이며 참이면 0이아닌값을 거짓이면 0을 반환한다.

	1) 문자 검사 함수
		isalnum( )
		isalpha( )
		isupper( )
		islower( )
		isdigit( )
		isxdigit( )
		isblank( )
		iscntrl( )
		isprint( )
		ispunct( )
		isascii( )


	2) 문자 변환 함수
		toupper( )
		tolower( )
		toascii( )
*/

int main()
{
	char op = ' ';

	printf("문자 입력 : ");
	op = _getche();
	printf("\n");

	if (isalpha(op))
	{
		printf("입력한 문자 '%c'(은)는 알파벳입니다.\n", op);

		if (isupper(op))
		{
			printf("'%c'는 대문자입니다.\n", op);
			op = tolower(op);
			printf("소문자로 변환합니다. >> %c\n",op);
		}
		else
		{
			printf("'%c'는 소문자입니다.\n", op);
			op = toupper(op);
			printf("대문자로 변환합니다. >> '%c'\n",op);
		}
	}
	else
		printf("입력한 문자 '%c'(은)는 알파벳이 아닙니다.\n", op);

	return 0;
}