/*
	* strcpy( )함수 : 문자열을 복사하는 함수
	*	함수의 원형 → char * strcpy ( char * des, const char * src );

	 strcpy함수는 문자열을 복사하지만 메모리 할당을 따로 해주지 않기때문에 포인터를 사용하는 경우 에러가 발생한다.
	 즉 strcpy()함수는 복사할 매개변수의 메모리가 할당되어있는지 유의하여 사용해야한다.
	 strcpy( )함수의 내부에는 src에서 '\0' 요 녀석까지 des로 복사를 해줍니다.
	 가끔 '\0'요 녀석을 분실한 문자열들을 프로세스를 죽이는 중요한 요인이되기때문에
	 strncpy( )함수나 memcpy로 특정 size를 복사하는 것을 추천한다.

*/

#include<stdio.h>
#include<string.h>
#define LENGTH 20

int main()
{
	char str1[LENGTH] = "Hello WORLD!!";
	char str2[LENGTH];
	// 주소를 받는 포인터 변수
	char* des;

	des = strcpy(str2, str1);

	printf("Str1 addrress : %p\n", str1);
	printf("Str2 addrress : %p\n", str2);
	printf("des2 addrress : %p\n\n", des);

	printf("Str1 : [%s]\n", str1);
	printf("Str2 : [%s]\n", str2);
	printf("des2 : [%s]\n", des);

	return 0;
}