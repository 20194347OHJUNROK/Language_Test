#include<iostream>

using std::cin;
using std::cout;
using std::endl;

class Sample
{

private:
	int data;

	/*
		* ��� ��� ����(constant member variable)
		*	�� const Ű���带 �ٿ��� ������ ��� ����
		*  �� ����� ����� ���ÿ� �ݵ�� �ʱ�ȭ�ؾ��Ѵ�. ��� ��� ������ ��ü�� �����Ǹ鼭 �ݵ�� �ʱ�ȭ�ؾ� �Ѵ�!
		*  �� �׷��� �������� ��� �ʱ�ȭ ����Ʈ�� ��� ��� ������ �ʱ�ȭ ǥ������ �ݵ�� ����ؾ��Ѵ�.
		* �� ��� ��ü������ ������ ��� ��� �Լ��� ȣ���� �� �ִ�.
				�׷��� ��� �Լ����� ��� ������ �������� �ʴ´ٸ�, �� ��� �Լ��� ��� ��� �Լ��� �����ϴ°��� ����!
	*/
	const int MAX;			// ��� ���� data�� �ִ�

public:
	// ������
	// �� ��� ��� ������ �մ� ���, �������� ��� �ʱ�ȭ ����Ʈ�� ��� ��� ������ �ʱ�ȭ ǥ������ ������ ������ ������ �߻��Ѵ�.
	//	��	Sample(int data = 0) : data(data) { }	ERROR!
	//	�� Sample(int data = 0) : data(data), MAX(255) {  }

	Sample(int data = 0) : data(data), MAX(255) { SetData(data); }

	// �⺻ ���� ������(default copy constructor)
	//	�� Sample(const Sample& copy): data(copy.data),MAX(copy.MAX){ }

	void SetData(int data) 
	{
		this->data = data > MAX? MAX : data; 

	}

	/*
		* ��� ��� �Լ�(constant member function) 
		* �� const Ű���带 �ٿ��� ������ ��� �Լ�
		* ��  ��� ��� �Լ������� ��� ������ ������ �� ����!
		*		����, ��� ��� �Լ������� ��� ��� �Լ��� �ƴ� �ٸ� ��� �Լ��� ȣ���� �� ����!
			��	inline int GetData() { return data; }
			��	inline const int GetData() { return data; }				// ��ȯ ���� ���!
	*/
	 inline int  GetData()const { return data; }

	//	void Print() const{cout << "data = " << data << endl; }

	/*
	* ��� �Լ����� const ���� ���δ� �Լ� �����ε��� ������ �ȴ�!
	* ����, ��� ��ü���� ȣ�� �Ǵ� ��� �Լ��� �Ϲ� ��ü���� ȣ�� �Ǵ� ��� ��
	*/
	void Print() const{cout << "CONST : data = " << data << endl; }
	void Print() {cout << "data = " << data << endl; }

};

int main()
{
	/*
		* ���(constant)
		������ �ʴ� ��
		�� ����� �ĺ��ڸ� �빮�ڷ� �ۼ��ϴ� ���� �����̸�, �ݵ�� �ʱ�ȭ�ؾ��Ѵ�.
		�� ����� �ʱ�ȭ�� ����, �� ���� ������ �� ����!
	*/

	const int FACTOR = 12;
	// FACTOR = 14;			ERROR!
	
	/*
		* ��� ��ü(constant object)
		* �� const Ű���带 �ٿ��� ������ ��ü
		* �� ��� ��ü�� ������ ����, ��� ������ ���� ������ �� ����!
		* �� ��, ��� ��ü������ ������ ��� ��� �Լ��� ȣ���� �� �ִ�.
		*		�׷��� ��� �Լ����� ��� ������ �������� �ʴ´ٸ�, �� ��� �Լ��� ��� ��� �Լ��� �����ϴ� ���� ����!
	*/

	// ��� ��ü ����
	const Sample objConst(10);

	//	objConst.GetData = 20;			 ERROR!

	cout << "objConst.data = " << objConst.GetData() << endl;

	objConst.Print();
	// �� Print ��� �Լ��� const ���� ���η� �����ε� �Ǿ� �ִ°��,
	//		��� ��ü������ ��� ��� �Լ��� ȣ��ȴ�.

	// �Ϲ� ��ü ����
	Sample obj(20);

	obj.Print();
	// �� Print ��� �Լ��� const ���� ���η� �����ε� �Ǿ� �ִ°��,
	//		�Ϲ� ��ü������ �Ϲ� ��� �Լ��� ȣ��ȴ�.
	return 0;
}