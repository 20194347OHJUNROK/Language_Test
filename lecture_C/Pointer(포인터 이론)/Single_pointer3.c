#include <stdio.h>

/* 
* ������ �������� ����
	����   : �����͸� ����
	������ : ����(�Ǵ� �������)�� �ּҸ� ����

* �� ������ ����� ���� ���� ��ȯ
	- �����͸� ���޵Ǿ����� ������
      �� ������ ���� ���� ��ȯ�ص�
      �Լ��� ȣ���� ���� �������� �ƹ��� ������ ����.
	- "Call by Value"
*/

void swap(int a, int b)
{
	printf("function: swap before > a = %d, b = %d\n", a, b);
	// �ӽ� ����
	int tmp = a;
	a = b;
	b = tmp;
	printf("function: swap after  > a = %d, b = %d\n", a, b);
}

/*
* �� ������ ����� ���� ��ȯ
  - �� ������ �޸� �ּҸ� ����
    �Լ��� ȣ���� ���� ������
    �Լ����� �����ϰ� ����� �� �ִ� ȿ���� �� �� �ִ�.
  - "Call by Reference"
*/

void swap_p(int* a, int* b)
{
	printf("function: swap before > a = %d, b = %d\n", *a, *b);
	// �ӽ� ����
	int tmp = *a;
	*a = *b;
	*b = tmp;
	printf("function: swap after  > a = %d, b = %d\n", *a, *b);
}

int main()
{
	int n1 = 10;
	int n2 = n1; // �����͸� ���� = �����͸� ����
	printf("n1 = %d\n", n1);
	printf("n2 = %d\n", n2);
	n1 = 30;
	printf("n1 �� 30\n");
	printf("n1 = %d\n", n1);
	printf("n2 = %d\n", n2);
	printf("\n");
	//----------------------------------
	int n = 100;
	// ������ ���� ������ ����Ű�� ������ p1
	int* p1 = &n;
	int* p2 = p1; // �ּҸ� ���� = �ּҸ� ����

	printf("*p1 = %d\n", *p1);
	printf("*p2 = %d\n", *p2);
	*p1 = 200;
	printf("*p1 �� 200\n");
	// ������ �޸��� �ּҸ� ������ ������
	// ������ �޸� �ּҸ� ���� �����͸� ����
	// ������ ���� �����ϰԵǸ� �ٸ� �����Ϳ�����
	// ������ ���� ����ϰ� �ȴ�
	printf("*p1 = %d\n", *p1);
	printf("*p2 = %d\n", *p2);
	printf("\n");
	// ---------------------------------------------
	int a = 10, b = 20;

	printf("main: swap before > a = %d, b = %d\n", a, b);
	swap(a, b); // �Լ��� �����͸� ����
	printf("main: swap after  > a = %d, b = %d\n", a, b);
	printf("\n");
	printf("main: swap before > a = %d, b = %d\n", a, b);
	swap_p(&a, &b); // �Լ��� ������ �ּҸ� ����
	printf("main: swap after  > a = %d, b = %d\n", a, b);
	return 0;
}