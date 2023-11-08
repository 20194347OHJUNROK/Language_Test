/*
	* 문자열 수치 변환 함수
	* 헤더파일 <stdlib.h>를 포함해야한다
		: 입력한 문자열을 정수형 또는 실수형으로 변환하는 함수
		  문자열을 수치로 반환할때 "12a13" 같은 경우에는 알파벳 "a"의 이전숫자 "12"만 수치로 변환한다.
		  "a12.34"와 같이 알파벳이 맨앞에 있는경우에는 0의 값을 반환한다.

	atoi() : 문자열 → 정수형 int(반환할수 없으면 0)
	atol() : 문자열 → 정수형 long(반환할수 없으면 0)
	atof() : 문자열 → 실수형 float(반환할수 없으면 0)

*/

#include<stdio.h>
#include<stdlib.h>
int main()
{
	char str0[10] = " ";
	int str1 = 0;
	double str2 = 0.0;

	printf("gets_s( )함수 사용 : ");
	gets_s(str0, sizeof(str0));
	printf("입력받은 값 : ");
	puts(str0);

	str1 = atoi(str0);
	printf("int형으로 변환 → %d\n\n", str1);


	printf("gets_s( )함수 사용 : ");
	gets_s(str0, sizeof(str0));
	printf("입력받은 값 : ");
	puts(str0);
	
	str2 = atof(str0);
	printf("float형으로 변환 → %f\n", str2);



	return 0;
}