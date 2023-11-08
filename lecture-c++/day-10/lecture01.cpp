#include<iostream>
using std::cin;
using std::cout;
using std::endl;

class Sample
{
	private :
		int data;

public:

	/*
	* ��ȯ ������(conversion constructor)
	* �� �ٸ� �ڷ��� ���� Sample �ڷ������� �� ��ȯ�ϰ��� �Ҷ� ȣ�� �Ǵ� ������
	*/
	Sample(int data = 0) : data(data){ }

	void SetData(int data) { this->data = data; }

	inline int GetData() { return data; }

	void Print() { cout << "data = " << data << endl; }

	/*
		* ��ȯ �Լ�(conversion function)
		�� Sample Ŭ������ �ν��Ͻ��� �ٸ� �ڷ������� �� ��ȯ�Ҷ� ȣ��Ǵ� ������ �Լ�
	*/
	inline operator int()
	{
		// ��ȯ �Լ������� ������ �ڷ������� ��ȯ���� ���� ���� ����� ��ȯ�Ѵ�.
		// �� ������ �Լ��� ��ȯ ���� �������� ���� ����� �ȴ�.
		return data;
	}
};


int main()
{
	// ������ �ٸ� �ڷ����� ���� ����
	double value;

	value = 3;
	// �� value = (double)3;
	// �� value = 3.0;

	// ��ü ����
	Sample obj(10);

	obj.Print();

	// ��ü obj�� ������ ����
	obj = 20;	
	// �ӽ� ��ü�� ����
	//	�� obj = (Sample)20;											// �ӽ� ��ü�� �����ȴ�.
	// �� obj = Sample(20);


	/*
		* �ӽ� ��ü(temporary object)
			�� ���� ������ �����Ǵ� ��ü
			�� �ӽ� ��ü�� �����ڷ� �������� ������, ������ �����ϸ� �Ҹ��Ѵ�.
	*/

	obj.Print();

	// int �ڷ��� ������ Sample Ŭ������ �ν��Ͻ�(instance; ��ü)�� ����
	int num = obj;
	// �� int num = obj;	
	// �� int num = (int)obj;	�õ��غ���!								// ������ �����ε�(Operator oberloading)
	// �� int num = obj.int(	);	��� ����Լ��� ȣ��
	// �� int num = obj.data;

	cout << "num = " << num << endl;


	return 0;
}