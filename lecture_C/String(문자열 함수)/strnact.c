/*
	* stract()�Լ� : ���ڿ��� ���ϴ� �Լ�
	* �Լ��� ���� �� char* strcat(char* des, const char* src);
	: des ���ڿ��� ���� src�� ���ڿ��� �����Ѵ�.
	: �Ѵ� ���ڿ��� ���� �ι���('\0')�� ���ԵǾ��־���Ѵ�.

	* strnact()�Լ� : Ÿ�� ���ڿ��� �κ� ���ڿ��� ���ϴ� �Լ�
	: �Լ��� ���� �� char* strncat(char* des, const char* src, size_t num);
	: des = src ���ڿ��� ������ ��ġ(�ּ�), des ���ڿ� �ڿ� src ���ڿ��� ����ȴ� �ݵ�� �������� �ι���('\0')�� ���ԵǾ��־���Ѵ�.
	: src = des �ڿ� ������ ���ڿ��� �ּ�
	: num = ������ �������� byte ��

*/
#include<stdio.h>
#include<string.h>

int main()
{
	char str1[100] = { "1234" };
	char str2[10] = { "56789" };

	printf("%s�� %s�� %d�� ���ڸ� ���ϸ�\n", str1, str2, 2);
	printf("== strncat( )�Լ� ��� ==\n");
	printf("%s\n", strncat(str1, str2, 2));
	printf("%s\n", strncat(str1, str2+2, 2));

	return 0;
}
