#include<stdio.h>
check_alpha(char x);

int main()
{
	char alpha;
	printf("문자를 입력하시오 : ");
	scanf("%c", &alpha);

	check_alpha(alpha);

	return 0;
}
check_alpha(char x)
{
	if('a' <= x && x <= 'z')
	{
		printf("%c는 알파벳 문자입니다.\n", x);
	}

}