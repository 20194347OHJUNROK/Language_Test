/*
	* stract()함수 : 문자열을 합하는 함수
	* 함수의 원형 → char* strcat(char* des, const char* src);
	: des 문자열의 끝에 src의 문자열을 복사한다.
	: 둘다 문자열의 끝에 널문자('\0')가 포함되어있어야한다.

	* strnact()함수 : 타켓 문자열에 부분 문자열을 합하는 함수
	: 함수의 원형 → char* strncat(char* des, const char* src, size_t num);
	: des = src 문자열을 복사할 위치(주소), des 문자열 뒤에 src 문자열이 복사된다 반드시 마지막에 널문자('\0')가 포함되어있어야한다.
	: src = des 뒤에 복사할 문자열의 주소
	: num = 복사할 데이터의 byte 수

*/
#include<stdio.h>
#include<string.h>

int main()
{
	char str1[100] = { "1234" };
	char str2[10] = { "56789" };

	printf("%s에 %s의 %d개 문자를 합하면\n", str1, str2, 2);
	printf("== strncat( )함수 사용 ==\n");
	printf("%s\n", strncat(str1, str2, 2));
	printf("%s\n", strncat(str1, str2+2, 2));

	return 0;
}
