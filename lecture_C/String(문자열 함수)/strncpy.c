/*
	* strncpy()함수 
	 : 부분 문자열을 복사하는 함수(메모리 할당 X)
	 : char * strncpy(char* des, const char* src, size_t num);
	 : des  = 데이터를 복사할 주소
	 : src  = 복사할 데이터가 존재하는 위치의 주소
	 : num  = 복사할 데이터의 byte 수
	즉, strncpy( )함수는 src의 위치부터 num의 특정 바이트 수만큼 복사하여 des로 복사해주는 함수이다.

*/

#include<stdio.h>
#include<string.h>
#define LENGTH 50

int main()
{
	char* src = "1234567890";
	char des[LENGTH] = "aaaaaa";

	printf("== strncpy( ) 함수 사용 ==\n");
	printf("des : %s\n", strncpy(des, src, 5));
	printf("des : %s\n", strncpy(des, src + 2, 5));

	return 0;
}