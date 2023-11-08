#include <stdio.h>
#include<string.h>
#define LENGTH 80
/*
* ����� ǥ���ϴ� ����ü person
*/

typedef struct person
{
	// ��� ����(member Variable)
	char name[LENGTH + 1];
	int age;
}p;

void Print_Person(const p* ptr)
{
	// ���� ��� ���� ������(->)�� �̿���, �����Ͱ� ����Ű�� ����ü ������ ��� ������ ����
	printf("Name : %s\n", ptr->name);
	printf("Age : %d\n", ptr->age);
}
//----------------------------------------------------------------------------------------------------------------------------------------------

int main()
{
	// ����ü ���� ����
	p jackson;


	// ����ü ���� jackson�� ���� ����
	strcpy(jackson.name, "Michael Jackson", LENGTH);
	jackson.age = 25;

	// Print_Person �Լ��� �̿��� ����ü ���� jackson�� ���
	Print_Person(&jackson);

	return 0;
}