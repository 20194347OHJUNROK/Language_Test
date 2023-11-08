include <stdio.h>

#define LENGTH	80

#define ALPHA_DIFF	('a' - 'A')

/*
	File Name	: Example01-String.c
	Date		: 2022.06.26
*/

int main()
{
	// 사용자로부터 빈 칸을 포함한 문자열을 입력을 받고
	// 알파벳 대소문자를 서로 변환해서 출력

	// Input  : Hello World!
	// Output : hELLO wORLD!

	// 최대 80자까지 문자열을 입력받기 위한 배열
	char str[LENGTH + 1] = { 0, };

	// 배열 str 에 저장된 문자열의 알파벳의 대소문자를 변환한
	// 문자열을 저장할 배열
	// → 입력되는 값이 아닌 배열 str에 저자된 문자를 옮기는 것이기 때문에
	//   널 문자가 자동으로 붙지 않는다.
	//   띠ㅏ라서 반드시 0 으로 초기화를 해야한다.
	char convert[LENGTH + 1] = { 0 };

	printf("Enter a string >>> ");
	scanf("%[^\n]s", str);
	// 배열과 같은 변수는 & 연산자를 작성하지 않는다.

	for (int i = 0; str[i] != 0 && i < LENGTH; i++)
	{
		// 대문자보다 소문자가 아스키코드 값이 큼

		// 대문자이면 소문자로 만들고
		if (str[i] >= 'A' && str[i] <= 'Z')
			printf("%c", str[i] + ALPHA_DIFF);
		// 소문자이면 대문자로 만들고
		else if (str[i] >= 'a' && str[i] <= 'z')
			printf("%c", str[i] - ALPHA_DIFF);
		// 알파벳이 아니면 그대로 유지
		else
			printf("%c", str[i]);
	}

	printf("\n");

	for (int i = 0; str[i] != 0 && i < LENGTH; i++)
	{
		// 대문자보다 소문자가 아스키코드 값이 큼

		// 대문자이면 소문자로 만들고
		if (str[i] >= 'A' && str[i] <= 'Z')
			convert[i] = str[i] + ALPHA_DIFF;
		// 소문자이면 대문자로 만들고
		else if (str[i] >= 'a' && str[i] <= 'z')
			convert[i] = str[i] - ALPHA_DIFF;
		// 알파벳이 아니면 그대로 유지
		else
			convert[i] = str[i];
	}

	printf("convert = \"%s\"\n", convert);
	// 서식 지정자 %s 는 char 형 배열의 첫 번째 원소부터
	// 널 문자까지의 문자들을 차례대로 출력하기 때문에
	// 배열 convert 를 반드시 0 으로 초기화해야한다.


	return 0;
}