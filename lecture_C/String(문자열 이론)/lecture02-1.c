#include<stdio.h>
#include<conio.h>
#include<ctype.h>

/*
	* ���� ���̺귯�� �Լ�
	: <ctype.h) ������Ͽ� ����
	  ���� �˻� �Լ��� ���� �Լ��̸��� ��ȣ �տ� is~�� �����Ѵ�.
	  ���� ��ȯ �Լ��� ���� �Լ��̸��� ��ȣ �տ� to~�� �����Ѵ�.
	  ��ȯ���� int���̸� ���̸� 0�̾ƴѰ��� �����̸� 0�� ��ȯ�Ѵ�.

	1) ���� �˻� �Լ�
		isalnum( )
		isalpha( )
		isupper( )
		islower( )
		isdigit( )
		isxdigit( )
		isblank( )
		iscntrl( )
		isprint( )
		ispunct( )
		isascii( )


	2) ���� ��ȯ �Լ�
		toupper( )
		tolower( )
		toascii( )
*/

int main()
{
	char op = ' ';

	printf("���� �Է� : ");
	op = _getche();
	printf("\n");

	if (isalpha(op))
	{
		printf("�Է��� ���� '%c'(��)�� ���ĺ��Դϴ�.\n", op);

		if (isupper(op))
		{
			printf("'%c'�� �빮���Դϴ�.\n", op);
			op = tolower(op);
			printf("�ҹ��ڷ� ��ȯ�մϴ�. >> %c\n",op);
		}
		else
		{
			printf("'%c'�� �ҹ����Դϴ�.\n", op);
			op = toupper(op);
			printf("�빮�ڷ� ��ȯ�մϴ�. >> '%c'\n",op);
		}
	}
	else
		printf("�Է��� ���� '%c'(��)�� ���ĺ��� �ƴմϴ�.\n", op);

	return 0;
}