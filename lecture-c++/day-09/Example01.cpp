#include<iostream>
#include<cstring>

using std::cin;
using std::cout;
using std::endl;

class Sample
{
private:
	char* data;

public:

	// ������
	Sample(const char* data = nullptr) : data(nullptr)
	{
		// ��� ���� data�� �������� ���� ������ �Ҵ� �޾� ���ڿ��� �����ϱ� ����,
		// ��� �ʱ�ȭ ����Ʈ������ ��� ���� data�� nullptr�� �ʱ�ȭ�ϰ�
		// �����ڸ� �̿��� �������� ���� ������ �Ҵ� �޾� ���ڿ��� �����Ѵ�.

		SetData(data);
	}
	/*
		* �⺻ ���� ������(default copy constructor)
			�� �⺻ ���� �����ڴ� "��� �� ��� ����"(���� ����; shallow copy)�� �����Ѵ�.
			�� ��� ������ �������� ���, �����Ϳ� ����Ǿ��ִ� �ּҸ� �����ϱ� ������
				���� ���� ������ �����ϴ� ������ �߻��Ѵ�.
				EX) Sample(const Sample& copy) : data(copy.data){ }

		* ���� ����(deep copy)
			�� ��� ������ �������� ���, �⺻ ���� �����ڿ����� "���� ����"�� �����ϹǷ�
				��� ������ ���ӵǾ� �ִ� �ּҸ� �����ϰ� �ȴ�. �̷��� ������ �ذ��ϱ� ����,
				�����Ͱ� ����Ű�� ���� ������ ����Ǿ� �ִ� ���� �����ϵ��� ���� �����ڸ� ���� �����ؾ��Ѵ�!
	*/

	// ���� ������
	Sample(const Sample& copy) : data(nullptr)
	{
		// �����ڸ� �̿���, ���� ��ü�� ��� ���� data�� ����Ű�� ���ڿ��� ���̸�ŭ
		//	���� ������ �Ҵ�޾�, �� ���ڿ��� �����Ѵ�.
		SetData(copy.data);
	}

	// �Ҹ���
	// �� ��ü�� �Ҹ�Ǳ� ����, ��ü���� �Ҵ���� �ý��� �ڿ��� ����
	~Sample()
	{
		// ��� ���� data�� �Ҵ�� ���� ������ �ִ� ���, �Ҵ� ���� ���� ������ ����
		if (data) delete[] data;
	}

	// ������
	void SetData(const char* str)
	{
		// �Ű����� str�� ���޵� ���ڿ��� �˻�
		if (!str)return;

		// �Ű����� str�� ���޵� ���ڿ��� ���̸� �˻�
		size_t length = strlen(str);
		if (length <= 0)return;

		// ��� ���� data�� ������ �Ҵ� ���� ���� ������ �ִ� ��쿡��, ���ο� ��������� �Ҵ�ޱ�����
		// �� ���� ������ ���� �ݵ�� �����ؾ��Ѵ�!  �׷��� ������ ������ �Ҵ���� ���� ������ �����Ҽ� ���ԵǸ�,
		// "�޸� ����(memory leak)�� �߻��Ѵ�.
		if (data) delete[]data;

		// ������ ���ڿ��� ���̸�ŭ �������� ���� ������ �Ҵ� �޾�, �� �ּҸ� ��� ���� data�� �����Ѵ�.
		data = new char[length + 1];

		// �Ҵ� ���� ���� ������ �ݵ�� �˻��� ���� ����Ѵ�!
		if (!data)
		{
			cout << "ERROR : Insufficient memory!" << endl;
			exit(1);
		}

		// �Ҵ� ���� ���� ������ �Ű����� str�� ���޵� ���ڿ��� �����Ѵ�.
		strcpy(data, str);
	}

	// ������
	inline const char* GetData() { return data; }

	// ���
	void Print() { cout << "data = " << data << endl; }
};

int main()
{

	// ��ü ����
	Sample obj1("Hello World!");			// Sample : : Sample(const char*); �����ڸ� ȣ��

	cout << "obj1.data = " << obj1.GetData() << endl;

	// ���� ��ü obj1���� ���ο� ��ü obj2�� �ʱ�ȭ
	Sample obj2(obj1);					// Sample : : Sample(const Sample&); �����ڸ� ȣ��

	cout << "obj2.data = " << obj2.GetData() << endl;

	return 0;
}