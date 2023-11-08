#include<iostream>
#include<cstring>

using std::cin;
using std::cout;
using std::endl;

// �̸��� �ִ����
#define LENGTH 80

/*
* ����� ǥ���ϴ� Ŭ���� Person
*/
class Person
{
public:

	// �������(member variable)
	char name[LENGTH + 1];
	int age;

	// ��� �Լ�(member function)
	void Print_potter()
	{
		cout << "Name : " << name << endl;
		cout << "Age : " << age << endl;
	}

};

int main()
{
	// ��ü(object) ����
	Person potter;

	// ��� ���� ������(.)�� �̿���, ��ü�� ����� ����
	// strncpy �Լ��� �̿���, �迭�� ��� ���� name�� ���ڿ��� ����
	strncpy(potter.name, "Harry Potter", LENGTH);
	potter.age = 13;

	// Print ��� �Լ��� �̿��� potter ��ü�� ���
	potter.Print_potter();

	return 0;
}