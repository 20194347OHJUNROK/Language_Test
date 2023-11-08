/* 
	* strlen()함수 : 문자열의 길이를 반환해주는 함수
	* 함수의 원형 → size_t strlen(const char* str);
*/
#include<stdio.h>
#include<string.h>
#define LENGTH 100

int main()
{
	char* str = "hello world.";
	char* kstr = "안녕하세요";		// 한글은 한개의 글자를 2바이트로 취급

	char name[LENGTH] = "abc";
	char name2[LENGTH] = "0123456789";

	printf("== strlen 함수 이용 ==\n");
	// strlen( )함수의 반환형이 size_t자료형이므로 서식지정자 %d가아닌 %zd를 사용해야한다.
	printf("%s 길이 : %zd\n", str, strlen(str));
	printf("%s 길이 : %zd\n", kstr, strlen(kstr));
	printf("%s 길이 : %zd\n", name, strlen(name));
	printf("%s 길이 : %zd\n", name2, strlen(name2));
	printf("%s 길이 : %zd\n", str+3, strlen(str+3));

	return 0;
}