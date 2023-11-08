#include<iostream>

using std::cin;
using std::cout;
using std::endl;

class SampleBase
{
//	private:

//	protected:
// → protected 멤버는 이 클래스와 이 클래스를 상속 받은 유도 클래스에서 접근할 수 있다.
//		하지만 '정보 은닉'
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


// SampleBase 클래스를 상속 받은, 간단한 유도 클래스 SampleDerived
class SampleDerived : public SampleBase
{
private:
	int dataDerived;

public:

	/*
	* 유도 클래스의 객체 생성
	* → 유도 클래스의 객체 생성 과정에서 기초 클래스의 생성자는 반드시 호출된다.
	* → 유도 클래스 생성자의 멤버 초기화리스트에서 호출할 기초 클래스 생성자를 명시한다.
	*		만약 명시되어있지 않으면 기초 클래스의 기본 생성자가 호출된다.
	*/
	SampleDerived(int dataDerived = 0) : dataDerived(dataDerived) 
	//	→ SampleDerived(int dataDerived = 0) : SampleBase(), dataDerived(dataDerived) 
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
		// → 기초 클래스의 멤버 변수 dataBase는 private 멤버이므로, 기초 클래스 내에서만 접근할수 있다.
		//		유도 클래스의 멤버 함수에서는 기초 클래스의 private 멤버에는 접근할수없다!
		
		//	cout << "dataBase = " << GetDataBase() << endl;
		PrintBase();
		cout << "dataDerived = " << dataDerived << endl;
	}
};


/*
* main 함수
*/
int main()
{
	// 유도 클래스의 인스턴스(객체) 생성
	SampleDerived objDerived(10);

	/*
	* 유도 클래스 객체가 생성되는 과정
	* 1.	멤버 변수들의 저장 공간이 할당
	* 2.	유도 클래스의 생성자가 호출
	* 3.	유도 클래스의 생성자의 멤버 초기화 리스트를 통해서 멤버 변수들을 초기화
	* 3.1		유도 클래스 생성자의 멤버 초기화 리스트를 통해 기초 클래스의 생성자가 호출
	* 3.2		기초 클래스 생성자의 멤버 초기화 리스트를 통해 기초 클래스의 멤버 변수들을 초기화
	* 3.3		기초 클래스 생성자의 본체가 실행
	* 3,4		유도 클래스 생성자의 멤버 초기화 리스트로 되돌아와서 다른 멤버 변수를 초기화
	* 4.	유도 클래스 생성자의 본체가 실행
	*/
	

	cout << "---------------------------------------------------------------------------------------" << endl;
	objDerived.PrintDerived();
	cout << "---------------------------------------------------------------------------------------" << endl;

	/*
	* 유도 클래스 객체가 소멸되는 과정
	* 1.	유도 클래스의 소멸자 호출
	* 2.	기초 클래스의 소멸자 호출
	*/


	return 0;
}