#include<stdio.h>
#define LENGTH	80
//���ڿ��� ���̸� ��ȯ�ϴ� �Լ�

int Around_Turn(const char*str)
{
	// ���ڿ��� ���������� �� ����('\0')�� �����Ƿ�
	// ���ڿ��� ó������ �� ���� �������� ������ ī����
	int length = 0;

	// length ��°�� ���ڰ� �� ���ڰ� �ƴϸ� �״��� ���ڸ� �˻�
	while (str[length] != '\0')
	{
		length++;
	}
	
	return length;
}

int main()
{
	char str[LENGTH+1] = { 0, };
	
	printf("Enter a string >>> ");
	scanf("%[^\n]s",str);
	
	int length = Around_Turn(str);

	printf("\"%s\" ' s length = %d\n", str, length);
	return 0;
}