#include<iostream>

using std::cin;
using std::cout;
using std::endl;

class Sample
{
private:

	int data;

	/*
	* ���� ��� ����(static member variable)
	* �� static Ű���带 �ٿ��� ������ ��� ����
	* �� ���α׷��� ������ڸ��� ���� ������ �Ҵ�ǰ�, ���α׷��� ����� ������
	*		�� ���� ������ �����ȴ�.
	* �� ���� ��� ������ ���α׷� ��ü�� �ϳ��� �����ϸ�, Ŭ������ ��� �ν��Ͻ��� �����Ѵ�.
	* �� ���� ��� ������ main �Լ��� ȣ��Ǳ� ����, �� ��ü�� �����Ǳ⵵ ���� �̹� ����Ǿ��ֱ⶧����,
	*		�������� ��� �ʱ�ȭ ����Ʈ���� �ʱ�ȭ �Ҽ�����.
	* �� ���� ��� ������ Ŭ���� �ܺο��� �ʱ�ȭ�Ѵ�.
	* �� ���� ������ ���� ����ó��, ���� ��� ������ �ʱ�ȭ���� ������ 0���� �ʱ�ȭ�ȴ�.
	*/
	static int count;										// Sample Ŭ���� �ν��Ͻ��� ����
	// �� �� ������ ���α׷��� ������ڸ���, main �Լ��� ȣ��Ǳ� ���� ����ȴ�.


	/*
	* ��� ��� ����(constant member variable)
	* �� ����� ����� ���ÿ� �ʱ�ȭ�ؾ� �Ѵ�. ���� ��� ��� ������ �������� ��� �ʱ�ȭ ����Ʈ�� ���� �ʱ�ȭ�ؾ��Ѵ�.
	const int MAX;								// ��� ���� data�� �ִ�

	* ���� ��� ��� ����(static constant member variable)
	* �� ��� ��� ������ ��� �ν��Ͻ����� ���� ���� ������, ���� ������ �����ϱ� ���� ���� ��� ��� ������ �����Ѵ�.
	* �� ���� ��� ��� ������ ���� ��� �����̹Ƿ�, �������� ��� �ʱ�ȭ����Ʈ���� �ʱ�ȭ���� ���ϰ�, Ŭ���� �ܺο��� �ʱ�ȭ�ؾ��Ѵ�.
	* �� ��, ���� ��� ��� ������ �ڷ����� ���� �ڷ����̸�, Ŭ���� ���ο��� ����� ���ÿ� �ʱ�ȭ�Ҽ��ִ�.
	*/
	//	static const int MAX;
		static const int MAX = 255;			// ��� ���� data�� �ִ�

	//	static const char MESSAGE[81] = "Nice to Meet You!";
		static const char MESSAGE[81];

public:

	/*
		Sample(int data = 0) : data(data) { }
	* ��ü�� �����ɶ����� ���� ��� ���� count�� ������Ű��, ��ü�� �Ҹ�ɶ����� ���� ��� ���� count�� ���ҽ�Ų��.

	// ������
	Sample(int data = 0) : data(data) { count++; }
	Sample(const Sample& copy) : data(copy.data) { count++; }

	*/

	// Sample(int data = 0) : data(data),MAX(255)
	Sample(int data = 0) : data(data)
	{
		SetData(data);
		count++;
	}

	//	Sample(const Sample& copy) : data(copy.data),MAX(copy.MAX) 
	Sample(const Sample& copy) : data(copy.data)
	{
		SetData(copy.data);
		count++; 
	}

	// �Ҹ���
	~Sample() { count--; }

	// ������
	//	void SetData(int data) { this->data = data; }
		void SetData(int data) { this->data = data > MAX? MAX : data; }

	// ������
	inline int GetData() const { return data; }
	//	inline int GetCount() const { return count; }
	/*
	* ���� ��� �Լ�(static member function)
	* �� ���� ��� �Լ��� ��ü�� �����Ǳ� ������ �̹� ����Ǿ� �ִ�. ������ �Ϲ� ��� �Լ��� ��ü�� �����Ǿ�߸�
	*		��ü�� ���� ȣ���� �� �ִ�.
	*	�� ��ü�� �����Ǳ� ������ ���� ��� ������ �����ϱ����� ���� ����Լ��� �ʿ��ϴ�.
	*		���� ��� �Լ��� ��ü�� �����Ǳ� ������ ȣ���Ҽ� �ִ�.
	*	�� ���� ���� ����Լ������� ���� ������� �����Ҽ� �ִ�. ���� ��� �Լ��� ��� ����Լ�(constant member function)���� �����Ҽ� ����.
	*/
	static inline int GetCount() { return count; }

	void Print() const { cout << "data = " << data << endl; }

	// ���� ��� �Լ� ����
	static void PrintCount();

};

/*
	*	���� ��� ������ Ŭ���� �ܺο��� �ʱ�ȭ�Ѵ�!
	 ��  Ŭ���� �ܺο��� ���� ��� ������ ������ ���� Ŭ���� �ĺ��ڿ� ���� ���� ������(: :)�� ����Ѵ�.
	 �� ���� ��� ������ Ŭ���� �ܺο��� �ʱ�ȭ�Ҷ��� static Ű���带 ������ �ʴ´�.

	* ���� ��� ������ ���α׷��� ������ڸ��� ���� ������ �Ҵ�ǹǷ�, ��ü�� �����Ǳ� ������ �̹� ����Ǿ��ִ�.
		���� ��ü�� �����Ǳ� �������� ���� ��������� �����ؾ� �ϴ°�찡 ����� �ִ�.
		�̷� ���, ������� �Լ��� �ʿ��ϴ�!
	*	��ü�� �����Ǳ� �������� Ŭ���� �ĺ��ڿ� ���� ���� ������(::)�� �̿���  ���� ��� �Լ��� ȣ���� �� �ִ�.
*/
int Sample :: count = 0;

/*
* ���� ��� �Լ��� Ŭ���� �ܺο��� ����
* ��  static Ű����� ���� ��� �Լ��� ����ο��� ���δ�!
*/
void Sample::PrintCount()
{
	cout << "Sample :: count = " << count << endl;
}

// ���� ��� ��� ���� MESSAGE�� �ڷ����� ������ �ƴϹǷ�, Ŭ�������ο��� �ʱ�ȭ �������ϸ�, Ŭ���� �ܺο��� �ʱ�ȭ�ؾ��Ѵ�.
const char Sample::MESSAGE[81] = "Nice to meet you!";

int main()
{
	cout << "Sample :: count = " << Sample::GetCount() << endl;

	// ��ü ����
	// �� ���� ��� �Լ��� ��ü�� ������ ���Ŀ��� ��ü�� ���� ���� �Ҽ� �ִ�.
	Sample obj1(10);

	obj1.Print();

	// ���� ��� ���� count�� ���
	cout << "obj1.count  = " << obj1.GetCount() << endl;


	// ��ü ����
	Sample obj2(20);

	obj2.Print();

	// ���� ��� ���� count�� ���
	// �� ���� ��� ������ ��� �ν��Ͻ����� �����Ѵ�!
	cout << "obj2.count = " << obj2.GetCount() << endl;
	cout << "obj1.count  = " << obj1.GetCount() << endl;

	// ��ü�� ������ ���Ŀ���, Ŭ���� �ĺ��ڿ� ���� ���� ������(::)�� �̿��� ���� ��� �Լ��� ȣ���� �� �ִ�.
	//	cout << "Sample :: count = " << Sample::GetCount() << endl;

	Sample::PrintCount();

	return 0;
}