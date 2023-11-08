#include<iostream>

using std::cin;
using std::cout;
using std::endl;

/*
* ������ Ŭ���� Sample
*/
class Sample
{
private:

	// ��� ����
	// �� Ư���� ��찡 �ƴϸ� ��� ������ private����� �����Ѵ�.
	int data;

	/*
		private ����� ��� ���� data�� �ܺο��� ���� �� ���ֵ���, ��� �Լ��� ������(setter)�� ������ (getter)�� �߰��Ѵ�.

	* ������(setter)
		�� private ����� ��� ������ ���� �����ϱ� ���� ��� �Լ�
		�� ��� ������ �߸��� ���� �������� �ʵ���, �����ڿ����� ��� ������ ���� �����ϱ����� ������ ���� �˻��� ������ �����Ѵ�.

	* ������(getter)
		�� private ����� ��� ������ ���� �����ϱ� ���� ��� �Լ�
		�� ��� ������ ���� ����ؾ� �ϴ� ���, �����ڸ� ���� �ʿ��Ҷ����� ���� ����ؼ� ��� ������ ���� �����Ҽ��ִ�.
	*/


public:

	// ��� �Լ�(���)
	// �� Ư���� ��찡 �ƴϸ� ��� �Լ��� public ����� �����Ѵ�.

	// ������(setter)
	void SetData(int n)
	{
		data = n;
	}

	// ������(getter)
	// �� �����ڴ� ���� �ζ��� �Լ�(inline function)���� �����Ѵ�.
	// int GetData()
	inline int GetData()
	{
		return data;
	}

	void Print()
	{
		cout << "data = " << data << endl;
	}
};

int main()
{
	// ��ü(object) ����
	Sample  obj;

	// obj.data = 10;			WRONG!
	//   �� Sample Ŭ������ ��� ������ data�� private ����̹Ƿ�, ��ü obj�� ��� ���� data�� �ܺο��� ������ �� ����!

	// �����ڸ� �̿���, private ����� ������ ��� ������ ���� ����
	obj.SetData(10);

	// �����ڸ� �̿��� private ����� ������ ��� ������ ���� ����
	//	�� cout << "obj.data = " << obj.data << endl;    WRONG!
	cout << "obj.data = " << obj.GetData() << endl;

	// ��ü obj�� Print ��� �Լ��� �̿��� ���
	obj.Print();

	return 0;
}