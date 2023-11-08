/*
	* strcpy( )�Լ� : ���ڿ��� �����ϴ� �Լ�
	*	�Լ��� ���� �� char * strcpy ( char * des, const char * src );

	 strcpy�Լ��� ���ڿ��� ���������� �޸� �Ҵ��� ���� ������ �ʱ⶧���� �����͸� ����ϴ� ��� ������ �߻��Ѵ�.
	 �� strcpy()�Լ��� ������ �Ű������� �޸𸮰� �Ҵ�Ǿ��ִ��� �����Ͽ� ����ؾ��Ѵ�.
	 strcpy( )�Լ��� ���ο��� src���� '\0' �� �༮���� des�� ���縦 ���ݴϴ�.
	 ���� '\0'�� �༮�� �н��� ���ڿ����� ���μ����� ���̴� �߿��� �����̵Ǳ⶧����
	 strncpy( )�Լ��� memcpy�� Ư�� size�� �����ϴ� ���� ��õ�Ѵ�.

*/

#include<stdio.h>
#include<string.h>
#define LENGTH 20

int main()
{
	char str1[LENGTH] = "Hello WORLD!!";
	char str2[LENGTH];
	// �ּҸ� �޴� ������ ����
	char* des;

	des = strcpy(str2, str1);

	printf("Str1 addrress : %p\n", str1);
	printf("Str2 addrress : %p\n", str2);
	printf("des2 addrress : %p\n\n", des);

	printf("Str1 : [%s]\n", str1);
	printf("Str2 : [%s]\n", str2);
	printf("des2 : [%s]\n", des);

	return 0;
}