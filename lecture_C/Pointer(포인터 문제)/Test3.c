#include <stdio.h>

#define LENGTH		80

int main()
{
	// 사용자로부터 빈 칸을 포함한 문자열을 입력을 받고
	// 입력받은 문자열의 반대된 문자열을 저장하기 위한
	// 배열을 만든 다음 출력

	// Input  : Hello World!
	// 
	// Output : !dlroW olleH


	char str[LENGTH + 1] = { 0 };

	// 배열 str 에 저장된 문자열의 문자 순서를 역순으로 저장할 배열
	char revers[LENGTH + 1] = { 0 };

	// 입력된 문자열의 길이
	int len = 0;

	printf("Enter a string >>> ");
	scanf("%[^\n]s", str);


	// 입력된 문자열의 길이
	for (int i = 0; str[i] != 0 && i <= LENGTH; i++)
		len++;

	printf("str's length = %d\n", len);

	for (int i = len - 1, j = 0; i >= 0; i--, j++)
	{
		// i = 배열 str 의 인덱스, 입력된 문자열의 끝에서 1씩 감소
		// j = 배열 revers 의 인덱스, 0부터 1씩 증가
		revers[j] = str[i];
	}
	printf("revers = \"%s\"", revers);

	return 0;
}