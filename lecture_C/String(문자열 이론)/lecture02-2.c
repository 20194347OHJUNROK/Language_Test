/*
	* ���ڿ� ��ġ ��ȯ �Լ�
	* ������� <stdlib.h>�� �����ؾ��Ѵ�
		: �Է��� ���ڿ��� ������ �Ǵ� �Ǽ������� ��ȯ�ϴ� �Լ�
		  ���ڿ��� ��ġ�� ��ȯ�Ҷ� "12a13" ���� ��쿡�� ���ĺ� "a"�� �������� "12"�� ��ġ�� ��ȯ�Ѵ�.
		  "a12.34"�� ���� ���ĺ��� �Ǿտ� �ִ°�쿡�� 0�� ���� ��ȯ�Ѵ�.

	atoi() : ���ڿ� �� ������ int(��ȯ�Ҽ� ������ 0)
	atol() : ���ڿ� �� ������ long(��ȯ�Ҽ� ������ 0)
	atof() : ���ڿ� �� �Ǽ��� float(��ȯ�Ҽ� ������ 0)

*/

#include<stdio.h>
#include<stdlib.h>
int main()
{
	char str0[10] = " ";
	int str1 = 0;
	double str2 = 0.0;

	printf("gets_s( )�Լ� ��� : ");
	gets_s(str0, sizeof(str0));
	printf("�Է¹��� �� : ");
	puts(str0);

	str1 = atoi(str0);
	printf("int������ ��ȯ �� %d\n\n", str1);


	printf("gets_s( )�Լ� ��� : ");
	gets_s(str0, sizeof(str0));
	printf("�Է¹��� �� : ");
	puts(str0);
	
	str2 = atof(str0);
	printf("float������ ��ȯ �� %f\n", str2);



	return 0;
}