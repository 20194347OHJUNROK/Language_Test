#include<stdio.h>
check_alpha(char x);

int main()
{
	char alpha;
	printf("���ڸ� �Է��Ͻÿ� : ");
	scanf("%c", &alpha);

	check_alpha(alpha);

	return 0;
}
check_alpha(char x)
{
	if('a' <= x && x <= 'z')
	{
		printf("%c�� ���ĺ� �����Դϴ�.\n", x);
	}

}