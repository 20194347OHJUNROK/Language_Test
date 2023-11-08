/*
	* strcmp( )�Լ� : �ΰ��� ���ڿ��� ���ϴ� �Լ�
 	* �Լ��� ���� �� int strcmp(const char*str1, const char *str2);
	  ������ 0, str1�� str2���� ũ�� ���� ����(1), str2�� str1���� ũ�� ���� ����(-1)�� ��ȯ�Ѵ�.
	
	* strncmp( )�Լ�
 	* �Լ��� ���� �� int strncmp(const char*str1, const char *str2, size_t num);
	: �ΰ��� ���ڿ��� ���ϴµ�, �Է��� ���̸�ŭ�� ���Ѵ�
	  ���ڿ��� ������ 0��
	  ���ĺ� ������ str1�� str2���� �տ������� ���� ����(1)��
	  ���ĺ� ������ str2�� str1���� �տ������� ���� ����(-1)�� ��ȯ�Ѵ�
*/

#include<stdio.h>
#include<string.h>
#define LENGTH 50

int main()
{
	char* Msg = "HELLO WORLD!";
	char str[LENGTH] = " ";		// NULL�� �ʱ�ȭ�� �ǹ�
	int i;

	printf("�˻��� �ܾ� : ");
	scanf("%s", str);
	int length = strlen(str);

	printf("== strncmp �Լ� �̿� ==\n");
	for (i = 0; i < Msg[i]; i++)
	{
		if (strncmp(Msg+i, str, length) == 0)
		{
			break;
		}
	}

	if (Msg[i]) // ���� ��
	{
		printf("�ε��� %d���� %s�� �߰��Ͽ����ϴ�.\n", i, str);
	}
	else // ���� �϶�
	{
		printf("%s��(��) �����ϴ�.\n", str);
	}

	return 0;
}