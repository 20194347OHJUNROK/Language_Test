#include<iostream>
#include<cstring>

using std::cin;
using std::cout;
using std::endl;
#define LENGTH	80

class Person
{

private:

	// ��� ����
	int age;
	char name[LENGTH + 1];


public:

	// ������(setter)
	
	// �̸��� �����ϴ� ��� �Լ�
	void SetName(const char* str)
	{
		// �����ڿ����� ��� ������ ���� �����ϱ� ���� ������ ���� �˻��ؾ��Ѵ�.
		if (!str)return;

		// �Ű����� str�� ���޵� ���ڿ��� ��� ���� name�� ����
		// �� �迭�� ���ڿ��� �����ϱ� ���� ���ڿ��� "����"�ؾ��Ѵ�!
		strncpy(name, str, LENGTH);
	}


	// ���̸� �����ϴ� ��� �Լ�
	void SetAge(int n)
	{
		// �Ű����� n�� ���޵� ������ ��� ���� age�� ����
		// �� �����ڿ����� ��� ������ ���� �����ϱ� ���� ������ ���� �˻��ؾ� �Ѵ�!
		age=n < 0?  0 : n;
	}
	//---------------------------------------------------------------------------------------------
	
	// ������(getter)
	
	/*
		�̸��� �����ϴ� ��� �Լ�
	inline char* GetName()
	{
		�� ��ȯ���� �ڷ����� char* �̹Ƿ� �迭�� �Ҵ�� ���� ������ �ּҸ� ���޹޾�
			private ����� name�� �Ҵ�� ���� ������ �����Ҽ� �ְԵȴ�.

		�� �迭 name�� ��ȯ�Ѵٴ� ���� �迭�� �Ҵ�� ���� ������ �ּҸ� ��ȯ�Ѵٴ� ���̴�!
			�迭�� �ּҸ� ��ȯ�ϸ�, ���ּҸ� ���� �迭�� �Ҵ�� ��������� �����Ҽ� �ִ�!
			�� private ����� name�� �Ҵ�� ���� ������ ������ �� �ְ� �ȴ�. �̴� �ɰ��� �����̹Ƿ�
			�ݵ�� ��ȯ �� �ڷ����� ���(constant)�� �����ϵ��� �Ѵ�!

		return name;
	}
	
	*/

	// �̸��� �����ϴ� ��� �Լ�
	inline const char* GetName()
	{
		return name;
	}

	// ���̸� �����ϴ� ��� �Լ�
	inline int GetAge()
	{
		return age;
	}

	// �̸��� ���̸� ����ϴ� ��� �Լ�
	void Print()
	{
		cout << "Name : " << name << endl;
		cout << "Age : " << age << endl<<endl;
	}
};
//---------------------------------------------------------------------------------------------------

int main()
{

	// ��ü(object) ����
	Person jackson;
	Person brown;
	Person dean;

	// �� ��ü�� �����ڸ� �̿��� ��� ������ ���� ����
	jackson.SetName("Michael Jackson");
	jackson.SetAge(24);

	brown.SetName("Charles Brown");
	brown.SetAge(21);

	dean.SetName("James Dean");
	dean.SetAge(36);

	// �� ��ü�� Print ��� �Լ��� �̿��� ���
	jackson.Print();
	brown.Print();
	dean.Print();

	/*
	char* ptr = jackson.GetName();
			ptr[0] = 'P';
	�� �����͸� ���� ��ü jackson�� private ����� name�� ������ �� �ְ� �ȴ�!
		�̸� �����ϱ� ���� �������� GetName ��� �Լ��� ��ȯ �� �ڷ����� ����� �����ؾ��Ѵ�!
	*/


	return 0;
}