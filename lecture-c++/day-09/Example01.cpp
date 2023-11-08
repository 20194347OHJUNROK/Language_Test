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

	// 생성자
	Sample(const char* data = nullptr) : data(nullptr)
	{
		// 멤버 변수 data에 동적으로 저장 공간을 할당 받아 문자열을 저장하기 위해,
		// 멤버 초기화 리스트에서는 멤버 변수 data를 nullptr로 초기화하고
		// 설정자를 이용해 동적으로 저장 공간을 할당 받아 문자열을 저장한다.

		SetData(data);
	}
	/*
		* 기본 복사 생성자(default copy constructor)
			→ 기본 복사 생성자는 "멤버 대 멤버 복사"(얕은 복사; shallow copy)를 수행한다.
			→ 멤버 변수가 포인터인 경우, 포인터에 저장되어있는 주소를 복사하기 때문에
				같은 저장 공간을 참조하는 문제가 발생한다.
				EX) Sample(const Sample& copy) : data(copy.data){ }

		* 깊은 복사(deep copy)
			→ 멤버 변수가 포인터인 경우, 기본 복사 생성자에서는 "얕은 복사"를 수행하므로
				멤버 변수에 대임되어 있는 주소를 복사하게 된다. 이러한 문제를 해결하기 위해,
				포인터가 가리키는 저장 공간에 저장되어 있는 값을 복사하도록 복사 생성자를 따로 정의해야한다!
	*/

	// 복사 생성자
	Sample(const Sample& copy) : data(nullptr)
	{
		// 설정자를 이용해, 기존 객체의 멤버 변수 data가 가리키는 문자열의 길이만큼
		//	저장 공간을 할당받아, 그 문자열을 복사한다.
		SetData(copy.data);
	}

	// 소멸자
	// → 객체가 소멸되기 전에, 객체에서 할당받은 시스템 자원을 해제
	~Sample()
	{
		// 멤버 변수 data에 할당된 저장 공간이 있는 경우, 할당 받은 저장 공간을 해제
		if (data) delete[] data;
	}

	// 설정자
	void SetData(const char* str)
	{
		// 매개변수 str에 전달된 문자열을 검사
		if (!str)return;

		// 매개변수 str에 전달된 문자열의 길이를 검사
		size_t length = strlen(str);
		if (length <= 0)return;

		// 멤버 변수 data에 이전에 할당 받은 저장 공간이 있는 경우에는, 새로운 저장공간을 할당받기전에
		// 그 저장 공간을 먼저 반드시 해제해야한다!  그렇지 않으면 이전에 할당받은 저장 공간은 해제할수 없게되며,
		// "메모리 누수(memory leak)가 발생한다.
		if (data) delete[]data;

		// 저장할 문자열의 길이만큼 동적으로 저장 공간을 할당 받아, 그 주소를 멤버 변수 data에 대입한다.
		data = new char[length + 1];

		// 할당 받은 저장 공간은 반드시 검사한 다음 사용한다!
		if (!data)
		{
			cout << "ERROR : Insufficient memory!" << endl;
			exit(1);
		}

		// 할당 받은 저장 공간에 매개변수 str에 전달된 문자열을 복사한다.
		strcpy(data, str);
	}

	// 접근자
	inline const char* GetData() { return data; }

	// 출력
	void Print() { cout << "data = " << data << endl; }
};

int main()
{

	// 객체 생성
	Sample obj1("Hello World!");			// Sample : : Sample(const char*); 생성자를 호출

	cout << "obj1.data = " << obj1.GetData() << endl;

	// 기존 객체 obj1으로 새로운 객체 obj2를 초기화
	Sample obj2(obj1);					// Sample : : Sample(const Sample&); 생성자를 호출

	cout << "obj2.data = " << obj2.GetData() << endl;

	return 0;
}