/* 
	* strlen()�Լ� : ���ڿ��� ���̸� ��ȯ���ִ� �Լ�
	* �Լ��� ���� �� size_t strlen(const char* str);
*/
#include<stdio.h>
#include<string.h>
#define LENGTH 100

int main()
{
	char* str = "hello world.";
	char* kstr = "�ȳ��ϼ���";		// �ѱ��� �Ѱ��� ���ڸ� 2����Ʈ�� ���

	char name[LENGTH] = "abc";
	char name2[LENGTH] = "0123456789";

	printf("== strlen �Լ� �̿� ==\n");
	// strlen( )�Լ��� ��ȯ���� size_t�ڷ����̹Ƿ� ���������� %d���ƴ� %zd�� ����ؾ��Ѵ�.
	printf("%s ���� : %zd\n", str, strlen(str));
	printf("%s ���� : %zd\n", kstr, strlen(kstr));
	printf("%s ���� : %zd\n", name, strlen(name));
	printf("%s ���� : %zd\n", name2, strlen(name2));
	printf("%s ���� : %zd\n", str+3, strlen(str+3));

	return 0;
}