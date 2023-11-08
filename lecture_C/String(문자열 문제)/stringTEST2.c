#include<stdio.h>
#define LENGTH	80		//입력받을 문자의 길이
# define BASE	26		//알파벳을 담아줄 문자의 길이

int main()
{
	// 사용자로부터 공백을 포함한 문자열을 입력받아
	// 알파벳의 개수를 출력하는 프로그램을 작성하라
	// - 단, 사용자로부터는 소문자만 입력받는다
	// - 공백의 개수는 카운트하지 않는다

	char str[LENGTH + 1] = { 0, };
	int count[BASE] = { 0, };

	printf("Enter a string >>>");
	scanf("%[^\n]s", str);

	for (int i = 0; str[i] != 0 && i <= LENGTH; i++)
	{
		// 알파벳 소문자가 아니면 다음 문자를 읽어온다.
		if(str[i]<'a'||str[i]>'z')continue;

		// i 번째 문자의 알파벳 순서
		int index = str[i] - 'a';
		count[index]++;
	}

	for (int i = 0; i < BASE; i++)
	{
		printf("%c's count = %d\n", 'a' + i, count[i]);
	}

	return 0;
}