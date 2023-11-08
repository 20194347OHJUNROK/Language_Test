#include<stdio.h>
#define LENGTH	80		//�Է¹��� ������ ����
# define BASE	26		//���ĺ��� ����� ������ ����

int main()
{
	// ����ڷκ��� ������ ������ ���ڿ��� �Է¹޾�
	// ���ĺ��� ������ ����ϴ� ���α׷��� �ۼ��϶�
	// - ��, ����ڷκ��ʹ� �ҹ��ڸ� �Է¹޴´�
	// - ������ ������ ī��Ʈ���� �ʴ´�

	char str[LENGTH + 1] = { 0, };
	int count[BASE] = { 0, };

	printf("Enter a string >>>");
	scanf("%[^\n]s", str);

	for (int i = 0; str[i] != 0 && i <= LENGTH; i++)
	{
		// ���ĺ� �ҹ��ڰ� �ƴϸ� ���� ���ڸ� �о�´�.
		if(str[i]<'a'||str[i]>'z')continue;

		// i ��° ������ ���ĺ� ����
		int index = str[i] - 'a';
		count[index]++;
	}

	for (int i = 0; i < BASE; i++)
	{
		printf("%c's count = %d\n", 'a' + i, count[i]);
	}

	return 0;
}