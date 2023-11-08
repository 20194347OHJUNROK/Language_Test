/*
	* strncpy()�Լ� 
	 : �κ� ���ڿ��� �����ϴ� �Լ�(�޸� �Ҵ� X)
	 : char * strncpy(char* des, const char* src, size_t num);
	 : des  = �����͸� ������ �ּ�
	 : src  = ������ �����Ͱ� �����ϴ� ��ġ�� �ּ�
	 : num  = ������ �������� byte ��
	��, strncpy( )�Լ��� src�� ��ġ���� num�� Ư�� ����Ʈ ����ŭ �����Ͽ� des�� �������ִ� �Լ��̴�.

*/

#include<stdio.h>
#include<string.h>
#define LENGTH 50

int main()
{
	char* src = "1234567890";
	char des[LENGTH] = "aaaaaa";

	printf("== strncpy( ) �Լ� ��� ==\n");
	printf("des : %s\n", strncpy(des, src, 5));
	printf("des : %s\n", strncpy(des, src + 2, 5));

	return 0;
}