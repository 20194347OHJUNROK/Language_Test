#include <stdio.h>

#define LENGTH		80

int main()
{
	// ����ڷκ��� �� ĭ�� ������ ���ڿ��� �Է��� �ް�
	// �Է¹��� ���ڿ��� �ݴ�� ���ڿ��� �����ϱ� ����
	// �迭�� ���� ���� ���

	// Input  : Hello World!
	// 
	// Output : !dlroW olleH


	char str[LENGTH + 1] = { 0 };

	// �迭 str �� ����� ���ڿ��� ���� ������ �������� ������ �迭
	char revers[LENGTH + 1] = { 0 };

	// �Էµ� ���ڿ��� ����
	int len = 0;

	printf("Enter a string >>> ");
	scanf("%[^\n]s", str);


	// �Էµ� ���ڿ��� ����
	for (int i = 0; str[i] != 0 && i <= LENGTH; i++)
		len++;

	printf("str's length = %d\n", len);

	for (int i = len - 1, j = 0; i >= 0; i--, j++)
	{
		// i = �迭 str �� �ε���, �Էµ� ���ڿ��� ������ 1�� ����
		// j = �迭 revers �� �ε���, 0���� 1�� ����
		revers[j] = str[i];
	}
	printf("revers = \"%s\"", revers);

	return 0;
}