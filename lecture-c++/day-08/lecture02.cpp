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
	
	//��� �Լ�
	
	// ������
	// �� �������� ��� �ʱ�ȭ ����Ʈ ������ ��� ������ �Ű������� �ĺ��ڰ� ���Ƶ� ���� �Ҽ� �ִ�.
	Sample(int data = 0):data(data){ }

	// ������
	//	void SetData(int n) { data = n; }
	void SetData(int data)
	{ 
		/*
			* ��� ������ ���� ������ �ĺ��ڰ� ������, ���������� �켱�Ѵ�.
			* �׷��⶧���� �̷� ���, this �����Ϳ� ���� ��� ���� ������(->)�� �����
			* ��� ������ �����Ҽ��ִ�.
		*/
		this->data = data;
		// �� (*this).data = data;
	}


	// ������
	inline int GetData() { return data; }

	// ��ü�� �Ҵ�� ���� ������ �ּҸ� ����
	inline Sample* GetThisPointer()
	{
		/*
			* this ������
			�� ��� �Լ��� �����ϰ� �ִ� ��ü�� ����Ű�� ������
			�� �����Ϸ��� �ڵ����� ����
		*/

		return this;
	}

	// ���
	//	void Print() { cout << "data = " << data << endl; }
	
	// ��� ���� data�� ����ϰ�, �ڱ� �����ڸ� ��ȯ
	Sample& Print()
	{
		cout << "data = " << data << endl;

		// �ڱ� ������(self-reference)�� ��ȯ
		return *this;
	}


	/*
	// ��� ���� data�� ���� ����
	void Adder(int value)
	{
		// ��� ���� data�� �Ű������� ���޵� ���� �߰�
		data += value;
	}
	*/

	/*
	* ��� ���� data�� ���� �����ϰ� this �����͸� ��ȯ
	* @param value �߰��� ��
	* @return Adder ��� �Լ��� �����ϰ� �ִ� ��ü�� �ּ�
	Sample* Adder(int value)
	{
		data += value;

		// this �����͸� ��ȯ
		return this;
	}
	*/


	/*
	* ��� ���� data�� ���� �߰��ϰ�, this �����Ͱ� ����Ű�� ��ü�� ��ȯ
	* @param value �߰��� ��
	* @return Adder ��� �Լ��� �����ϰ� �ִ� ��ü
	Sample Adder(int value)
	{
		data += value;
		
		
		* ������ �����ڸ� �̿���, this �����Ͱ� ����Ű�� ��ü�� ��ȯ
			�� ��ȯ ���� �ڷ����� Sample Ŭ�����̹Ƿ�, this �����Ͱ� ����Ű�� ��ü�� ��ȯ�ϸ�
				this �����Ͱ� ����Ű�� ��ü�� ������ �ӽ� ��ü(temporary object)�� �Լ� ȣ�� ǥ������ ���� ����� �ȴ�.
		
		return	*this;
	}
	*/


	/* ��� ���� data�� ���� �߰��ϰ�, this �����Ͱ� ����Ű�� ��ü�� �����ڸ� ��ȯ
		* @param value �߰��� ��
		* @return Adder ��� �Լ��� �����ϰ� �ִ� ��ü�� ������
	*/
		Sample& Adder(int value)
		{
			data += value;

			// ������ �����ڸ� �̿��� this �����Ͱ� ����Ű�� ��ü�� ��ȯ
			// �� ��ȯ ���� �ڷ����� Sample& �̹Ƿ�, this �����Ͱ� ����Ű�� ��ü�� ��ȯ�ϸ�
			//		this �����Ͱ� ����Ű�� ��ü�� �����ϴ� �����ڰ� ��ȯ�ȴ�.
			//	�� �̷��� �����ڸ� �ڱ� ������(self - reference)��� �Ѵ�.
			return	*this;
		}
};


int main()
{
	// ��ü ����
	Sample obj(10);

	obj.Print();

	// ��ü�� �Ҵ絵�� ���� ������ ũ��� �ּҸ� ���
	cout << "sizeof(obj) = " << sizeof(obj) << endl;
	cout << "&obj = " << &obj << endl;

	// ��ü ������ ����
	Sample* ptr = &obj;

	// ������ ptr�� ���� ��� ���� ������(->)�� �̿���, ��ü obj�� ����� ����
	ptr->Print();

	// GetThisPointer ��� �Լ��� �̿���, ��ü obj�� �ּҸ� ���� ������ ptr�� ����
	ptr = obj.GetThisPointer();
	// �� ptr = &obj;

	cout << "obj.GetThisPointer( ) = " << ptr << endl;
	cout << "-------------------------------------------------------------------" << endl;
	//--------------------------------------------------------------------------------------------------
	obj.Adder(5);
	obj.Print();

/*
	obj.Adder(5).Print();
		�� (obj.Adder(5)), Print();
		�� �� ��° ��� ���� �������� ù ��° �ǿ����ڴ�	Adder ����Լ��� ��ȯ���� �ȴ�.
			���� Adder ��� �Լ��� ��ü obj�� ��ȯ�ϸ�, �� ������ ���������� ����ɼ��ִ�. 
*/

/*
		// Adder ��� �Լ��� ��ȯ�ϴ� ���� this ������, �� ��ü obj�� ����Ű�� �������̹Ƿ�
		//	���� ��� ���� ������(->)�� �̿���, ��ü obj�� Print ��� �Լ��� ���� �Ҽ� �ִ�.
		obj.Adder(5)->Print();						// Sample* Sample : : Adder(int value); ������ ȣ��
		//	�� (obj.Adder)->Print();			
		//	�� (&obj)->Print();			
*/


	// Adder ��� �Լ��� ��ȯ�ϴ� ���� this �����Ͱ� ����Ű�� ��ü, �� ��ü obj(?)�̹Ƿ�
	//	��� ���� ������(.)�� �̿��� ��ü obj(?)�� Print ��� �Լ��� �����Ҽ� �ִ�.
	obj.Adder(5).Print();
	/* 
		�� (obj.Adder(5)).Print();
		�� (obj_copy).Print();
		�� Adder ��� �Լ��� ��ȯ�ϴ� ��ü�� ��ü obj�� ���� ���� ������ ������, ��ü obj�� �ƴϴ�!
		�� �̿� ���� �Լ����� ��ü�� ��ȯ�ϴ� ���, �Լ� ȣ�� ǥ������ ���� ����� �����Ǵ� ��ü��
			�ӽ� ��ü��� �ϸ�, �ӽ� ��ü�� �����ڷ� �������� �ʴ� �̻� ������ ������ ������ �ڵ� �Ҹ��Ѵ�.
		�� ��, �� ���忡�� ��µǴ� ���� ��ü obj�� ��� ���� data�� �ƴ϶�, �ӽ� ��ü�� ��� ���� data�̴�.	
	*/


	/*
	obj.Adder(5).SetData(100);
	//	�� obj.Adder(5).SetData(100);
	// �� (obj_copy).SetData(100);
	// ��ü obj�� Adder ��� �Լ��� ��ȯ ��, �� �ӽ� ��ü�� ���� ���� �������ִ� �ٸ� ��ü�̴�.
	//	���� �� ���忡���� �ӽ� ��ü�� ��� ���� data�� 100���� ����������, ��ü obj�� ��� ���� data�� ���� �ٲ����ʴ´�.

	obj.Print();
	*/


	/*
	* Adder ��� �Լ��� �ڱ� �����ڸ� ��ȯ�ϸ�, �Լ� ȣ�� ǥ������ �������� ��ü obj��
		�����ϴ� �����ڰ� �ȴ�. ���� �� ������ ���� ��ü obj�� ����� ������ ���ִ�.
	*/
	obj.Adder(5).SetData(100);									// Sample& Sample : : Adder(int vluae); �����ڸ� ȣ��
	// �� (obj.Adder(5)).SetData();
	// �� (obj_ref).SetData();
	// �� Adder ��� �Լ��� ��ȯ ���� ��ü obj�� �������̴�. ���� �� �����ڸ� �̿���
	//		��ü obj�� SetData�� ��� �Լ��� ȣ���ϰ� �ȴ�.
	obj.Print();
	

	obj.Adder(10).Print().Adder(20).Print();

	return 0;
}