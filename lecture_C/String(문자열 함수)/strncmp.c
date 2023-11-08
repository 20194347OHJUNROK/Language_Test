/*
	* strcmp( )함수 : 두개의 문자열을 비교하는 함수
 	* 함수의 원형 → int strcmp(const char*str1, const char *str2);
	  같으면 0, str1이 str2보다 크면 양의 정수(1), str2가 str1보다 크면 음의 정수(-1)을 반환한다.
	
	* strncmp( )함수
 	* 함수의 원형 → int strncmp(const char*str1, const char *str2, size_t num);
	: 두개의 문자열을 비교하는데, 입력한 길이만큼만 비교한다
	  문자열이 같으면 0을
	  알파벳 순서로 str1이 str2보다 앞에있으면 양의 정수(1)을
	  알파벳 순서로 str2가 str1보다 앞에있으면 음의 정수(-1)를 반환한다
*/

#include<stdio.h>
#include<string.h>
#define LENGTH 50

int main()
{
	char* Msg = "HELLO WORLD!";
	char str[LENGTH] = " ";		// NULL로 초기화를 의미
	int i;

	printf("검색할 단어 : ");
	scanf("%s", str);
	int length = strlen(str);

	printf("== strncmp 함수 이용 ==\n");
	for (i = 0; i < Msg[i]; i++)
	{
		if (strncmp(Msg+i, str, length) == 0)
		{
			break;
		}
	}

	if (Msg[i]) // 참일 때
	{
		printf("인덱스 %d에서 %s를 발견하였습니다.\n", i, str);
	}
	else // 거짓 일때
	{
		printf("%s는(은) 없습니다.\n", str);
	}

	return 0;
}