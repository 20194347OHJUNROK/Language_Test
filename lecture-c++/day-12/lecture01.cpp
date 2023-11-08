#include<iostream>

using std::cin;
using std::cout;
using std::endl;

class SampleBase
{
//	private:

//	protected:
// �� protected ����� �� Ŭ������ �� Ŭ������ ��� ���� ���� Ŭ�������� ������ �� �ִ�.
//		������ '���� ����'
private:
	int dataBase;

public:

	SampleBase(int dataBase = 0) : dataBase(dataBase)
	{
		cout << "SampleBase :: SampleBase(int dataBase)" << endl;
	}

	~SampleBase()
	{
		cout << "~SampleBase :: ~SampleBase( )" << endl;
	}

	void SetDataBase(int dataBase) { this->dataBase = dataBase; }

	inline int GetDataBase() const { return dataBase; }

	void PrintBase() const { cout << " dataBase = " << dataBase << endl; }

};


// SampleBase Ŭ������ ��� ����, ������ ���� Ŭ���� SampleDerived
class SampleDerived : public SampleBase
{
private:
	int dataDerived;

public:

	/*
	* ���� Ŭ������ ��ü ����
	* �� ���� Ŭ������ ��ü ���� �������� ���� Ŭ������ �����ڴ� �ݵ�� ȣ��ȴ�.
	* �� ���� Ŭ���� �������� ��� �ʱ�ȭ����Ʈ���� ȣ���� ���� Ŭ���� �����ڸ� ����Ѵ�.
	*		���� ��õǾ����� ������ ���� Ŭ������ �⺻ �����ڰ� ȣ��ȴ�.
	*/
	SampleDerived(int dataDerived = 0) : dataDerived(dataDerived) 
	//	�� SampleDerived(int dataDerived = 0) : SampleBase(), dataDerived(dataDerived) 
	{
		cout << "SampleDerived :: SampleDerived(int dataDerived)" << endl;
	}

	~SampleDerived()
	{
		cout << "~SampleDerived :: ~SampleDerived()" << endl;
	}

	void SetDataDerived(int dataDeirved) { this->dataDerived = dataDerived; }

	inline int GetDataDerived() const { return dataDerived; }

	//	void PrintDerived() const { cout << " dataDerived = " << dataDerived << endl; }
	void PrintDerived() const
	{
		//	cout << "dataBase = " << dataBase << endl;				// ERROR! if private
		// �� ���� Ŭ������ ��� ���� dataBase�� private ����̹Ƿ�, ���� Ŭ���� �������� �����Ҽ� �ִ�.
		//		���� Ŭ������ ��� �Լ������� ���� Ŭ������ private ������� �����Ҽ�����!
		
		//	cout << "dataBase = " << GetDataBase() << endl;
		PrintBase();
		cout << "dataDerived = " << dataDerived << endl;
	}
};


/*
* main �Լ�
*/
int main()
{
	// ���� Ŭ������ �ν��Ͻ�(��ü) ����
	SampleDerived objDerived(10);

	/*
	* ���� Ŭ���� ��ü�� �����Ǵ� ����
	* 1.	��� �������� ���� ������ �Ҵ�
	* 2.	���� Ŭ������ �����ڰ� ȣ��
	* 3.	���� Ŭ������ �������� ��� �ʱ�ȭ ����Ʈ�� ���ؼ� ��� �������� �ʱ�ȭ
	* 3.1		���� Ŭ���� �������� ��� �ʱ�ȭ ����Ʈ�� ���� ���� Ŭ������ �����ڰ� ȣ��
	* 3.2		���� Ŭ���� �������� ��� �ʱ�ȭ ����Ʈ�� ���� ���� Ŭ������ ��� �������� �ʱ�ȭ
	* 3.3		���� Ŭ���� �������� ��ü�� ����
	* 3,4		���� Ŭ���� �������� ��� �ʱ�ȭ ����Ʈ�� �ǵ��ƿͼ� �ٸ� ��� ������ �ʱ�ȭ
	* 4.	���� Ŭ���� �������� ��ü�� ����
	*/
	

	cout << "---------------------------------------------------------------------------------------" << endl;
	objDerived.PrintDerived();
	cout << "---------------------------------------------------------------------------------------" << endl;

	/*
	* ���� Ŭ���� ��ü�� �Ҹ�Ǵ� ����
	* 1.	���� Ŭ������ �Ҹ��� ȣ��
	* 2.	���� Ŭ������ �Ҹ��� ȣ��
	*/


	return 0;
}