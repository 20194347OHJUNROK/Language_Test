#include<stdio.h>
#include<stdlib.h>		// srand(), rand()�Լ� ���
#include<time.h>		// time()�Լ� ���

int sonata2000();
int sonata2400();
// ������ ���� �����ȣ�� ��ȯ���ִ� �Լ�
int body_num();

char color[5][10] = { "���", "������", "�Ķ���", "����", "������" };

int sonata2000()
{
	int engine = 2000;
	static int num = 10000;
	// sonata������ ������ȣ�� �Ǿ���ϱ⶧���� ���� �ʱ�ȭ�����ʴ�
	// ���������� �����ؾ���

	printf("\n 2000cc �ҳ�Ÿ ���� ������ȣ : %d  ", ++num);
	printf("�ҳ�Ÿ ��ü ���� ��ȣ : %d\n", body_num());
	printf("���� : %dcc �Ŀ� ����,  ", engine);
	printf("���� : %s\n", color[rand() % 5]);

	return 0;
}
int sonata2400()
{
	int engine = 2400;
	static int num = 20000;
	printf("\n 2400cc �ҳ�Ÿ ���� ������ȣ : %d  ", ++num);
	printf("�ҳ�Ÿ ��ü ���� ��ȣ : %d\n", body_num());
	printf("���� : %dcc ���̺긮�� ����,  ", engine);
	// �ε��� 0~ 4������ ������ ������ ���
	printf("���� : %s\n", color[rand() % 5]);
	return 0;
}

int body_num()
{
	static int body = 100000;
	return ++body;
}