#include<stdio.h>
#define LENGTH	80
//문자열의 길이를 반환하는 함수

int Around_Turn(const char*str)
{
	// 문자열의 마지막에는 널 문자('\0')가 있으므로
	// 문자열의 처음부터 널 문자 전까지의 개수를 카운팅
	int length = 0;

	// length 번째의 문자가 널 문자가 아니면 그다음 문자를 검사
	while (str[length] != '\0')
	{
		length++;
	}
	
	return length;
}

int main()
{
	char str[LENGTH+1] = { 0, };
	
	printf("Enter a string >>> ");
	scanf("%[^\n]s",str);
	
	int length = Around_Turn(str);

	printf("\"%s\" ' s length = %d\n", str, length);
	return 0;
}