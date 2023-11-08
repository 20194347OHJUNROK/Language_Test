include <stdio.h>

#define LENGTH	80

#define ALPHA_DIFF	('a' - 'A')

/*
	File Name	: Example01-String.c
	Date		: 2022.06.26
*/

int main()
{
	// ����ڷκ��� �� ĭ�� ������ ���ڿ��� �Է��� �ް�
	// ���ĺ� ��ҹ��ڸ� ���� ��ȯ�ؼ� ���

	// Input  : Hello World!
	// Output : hELLO wORLD!

	// �ִ� 80�ڱ��� ���ڿ��� �Է¹ޱ� ���� �迭
	char str[LENGTH + 1] = { 0, };

	// �迭 str �� ����� ���ڿ��� ���ĺ��� ��ҹ��ڸ� ��ȯ��
	// ���ڿ��� ������ �迭
	// �� �ԷµǴ� ���� �ƴ� �迭 str�� ���ڵ� ���ڸ� �ű�� ���̱� ������
	//   �� ���ڰ� �ڵ����� ���� �ʴ´�.
	//   �줿�� �ݵ�� 0 ���� �ʱ�ȭ�� �ؾ��Ѵ�.
	char convert[LENGTH + 1] = { 0 };

	printf("Enter a string >>> ");
	scanf("%[^\n]s", str);
	// �迭�� ���� ������ & �����ڸ� �ۼ����� �ʴ´�.

	for (int i = 0; str[i] != 0 && i < LENGTH; i++)
	{
		// �빮�ں��� �ҹ��ڰ� �ƽ�Ű�ڵ� ���� ŭ

		// �빮���̸� �ҹ��ڷ� �����
		if (str[i] >= 'A' && str[i] <= 'Z')
			printf("%c", str[i] + ALPHA_DIFF);
		// �ҹ����̸� �빮�ڷ� �����
		else if (str[i] >= 'a' && str[i] <= 'z')
			printf("%c", str[i] - ALPHA_DIFF);
		// ���ĺ��� �ƴϸ� �״�� ����
		else
			printf("%c", str[i]);
	}

	printf("\n");

	for (int i = 0; str[i] != 0 && i < LENGTH; i++)
	{
		// �빮�ں��� �ҹ��ڰ� �ƽ�Ű�ڵ� ���� ŭ

		// �빮���̸� �ҹ��ڷ� �����
		if (str[i] >= 'A' && str[i] <= 'Z')
			convert[i] = str[i] + ALPHA_DIFF;
		// �ҹ����̸� �빮�ڷ� �����
		else if (str[i] >= 'a' && str[i] <= 'z')
			convert[i] = str[i] - ALPHA_DIFF;
		// ���ĺ��� �ƴϸ� �״�� ����
		else
			convert[i] = str[i];
	}

	printf("convert = \"%s\"\n", convert);
	// ���� ������ %s �� char �� �迭�� ù ��° ���Һ���
	// �� ���ڱ����� ���ڵ��� ���ʴ�� ����ϱ� ������
	// �迭 convert �� �ݵ�� 0 ���� �ʱ�ȭ�ؾ��Ѵ�.


	return 0;
}