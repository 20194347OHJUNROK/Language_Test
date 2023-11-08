#include<iostream>

using std::cin;
using std::cout;
using std::endl;

class Sample
{
private:
	int data;

public:
	Sample(int data = 0) : data(data) { }

	void SetData(int data) { this->data = data; }

	inline int GetData() const{ return data; }

	void Print() const { cout << "data = " << data << endl; }

	// friend �Լ� ����
	// �� � �Լ��� �� Ŭ������ friend �Լ��� �����ϸ�, �� �Լ������� �� Ŭ������ ������ ��ü�� private ������� ������ �� �ִ�.
	friend void PrintSample(const Sample& param);
};

/*
* Sample Ŭ������ �ν��Ͻ��� ���
*/
//	void PrintSample(Sample param)
//	void PrintSample(Sample& param)

void PrintSample(const Sample& param)
{
	//	�� Sample param = obj;						���� ���� ȣ��
	//	�� Sample& param = obj;					������ ���� ȣ��
	//	�� const Sample& param = obj;			
	// ��	�Ű� ������ ����� �����ؼ�, �Ű������� �����ڰ� �����ϴ� ��ü�� "�Ǽ��ζ�" �������� ���ϵ��� �Ѵ�.
	// ��	��� ��ü������ ��� ��� �Լ��� ȣ���� �� �ִ�.
	
	//	param.SetData(0);		ERROR!

	//	cout << "param.data = " << param.GetData() << endl;
	cout << "param.data = " << param.data << endl;
	// �� Sample Ŭ������ ��� ���� data�� private ����̹Ƿ�, ��ü �ܺο����� �����Ҽ�����.
	//		������ Sample Ŭ�������� PrintSample �Լ��� friend �Լ��� �����ϸ�, PrintSample �Լ������� private ����� ��� ���� data�� �����Ҽ��ְԵȴ�!
}

int main()
{
	// Sample Ŭ������ ��ü ����
	Sample obj(10);

	//	PrintSample �Լ��� �̿���, ��ü obj�� ���
	PrintSample(obj);

	return 0;
}