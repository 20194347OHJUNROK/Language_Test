#include<stdio.h>
#define LENGTH 7
void reverse_print(char** pc, int size);

int main()
{
	char* cities[LENGTH] = { "����", "����", "�뱸", "����", "��õ", "����", "�λ�" };;

	printf("���ڿ� �迭 ��� : ");
	printf("[");
	for (int i = 0; i < LENGTH; i++)
	{
		printf(" %s ", cities[i]);
	}
	printf("]");
	printf("\n--------------------------------------------------------------------\n");
	reverse_print(cities, LENGTH);



	return 0;
}

void reverse_print(char** pc, int size)
{
	int i;
	printf("�������� ��� : ");
	printf("[");
	/*
	for (int i = size-1; i >=0; i--)
	{
	// �迭�� �ε����� ������ �������� ���
		printf(" %s ",pc[i]);
	}
	*/

	// ���� �������� �ּҰ��� �迭�� �ǳ����� �̵�
	for (i = 0; i < size; i++) 
	{ pc++; }
	for (i = 1; i <= size; i++)
	{
		// ������������ �ּҰ��� ���ҽ�Ű�鼭 �迭���� �������� ���
		printf(" %s ", *(--pc));
	    // printf(" %s ", *(pc - i));
	}
	printf("]");

}