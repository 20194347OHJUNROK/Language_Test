#include<iostream>

using std::cin;
using std::cout;
using std::endl;

class Sample
{
private:
	// ��� ����
	int data;

public:

	// ������
	Sample(int data = 0):data(data){ }

	// �⺻ �Ҹ���
	// ~Sample( ){ }
	
	/*
		 * ���� ������(copy constructor)
			�� �� Ŭ������ �ν��Ͻ�(��ü)�� ���ο� ��ü�� �ʱ�ȭ�� �� ȣ��Ǵ� ������
				���� ���� �������� �Ű��������� ��ü�� ���޵Ǿ���Ѵ�.

		*  �⺻ ���� ������(default copy constructor)
			�� Ŭ������ ���� �����ڰ� ���ǵǾ� ���� ���� ��� �߰��Ǵ� ������
			�� �⺻ ���� �����ڿ����� ���� ��ü�� ��� ������ ���� �����Ǵ� ��ü�� ��� ������ �ʱ�ȭ�Ѵ�.
				�̸� "��� �� ����� ����"��� �Ѵ�.
				ex)	Sample(const Sample& copy) : data(copy.data){ }
*/

	// ������
	void SetData(int data) { this->data = data; }

	// ������
	inline int GetData() { return data; }

	// ���
	void Print() { cout << "data = " << data << endl; }
};

int main()
{
	// ��ü ����
	Sample obj1(10);				// Sample :: Sample(int); �����ڸ� ȣ��

	cout << "obj1.data = " << obj1.GetData() << endl;

	
	// ���ο� ��ü�� �����ϰ�, ���� ��ü�� �ʱ�ȭ
	Sample obj2(obj1);		// Sample : : Sample(Sample); �����ڸ� ȣ���ؾ��ϴµ�...

	cout << "obj2.data = " << obj2.GetData() << endl;

	return 0;
}