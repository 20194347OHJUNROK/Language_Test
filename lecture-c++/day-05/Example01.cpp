#include<iostream>
#include<cstring>

using std::cin;
using std::cout;
using std::endl;
#define LENGTH	80

class Person
{

private:

	// 멤버 변수
	int age;
	char name[LENGTH + 1];


public:

	// 설정자(setter)
	
	// 이름을 설정하는 멤버 함수
	void SetName(const char* str)
	{
		// 설정자에서는 멤버 변수에 값을 설정하기 전에 설정할 값을 검사해야한다.
		if (!str)return;

		// 매개변수 str에 전달된 문자열을 멤버 변수 name에 설정
		// → 배열에 문자열을 저장하기 위해 문자열을 "복사"해야한다!
		strncpy(name, str, LENGTH);
	}


	// 나이를 설정하는 멤버 함수
	void SetAge(int n)
	{
		// 매개변수 n에 전달된 정수를 멤버 변수 age에 설정
		// → 설정자에서는 멤버 변수에 값을 설정하기 전에 설정할 값을 검사해야 한다!
		age=n < 0?  0 : n;
	}
	//---------------------------------------------------------------------------------------------
	
	// 접근자(getter)
	
	/*
		이름을 참조하는 멤버 함수
	inline char* GetName()
	{
		→ 반환값의 자료형이 char* 이므로 배열에 할당된 저장 공간의 주소를 전달받아
			private 멤버인 name에 할당된 저장 공간에 접근할수 있게된다.

		→ 배열 name을 반환한다는 것은 배열에 할당된 저장 공간의 주소를 반환한다는 말이다!
			배열의 주소를 반환하면, 그주소를 통해 배열에 할당된 저장공간에 접근할수 있다!
			즉 private 멤버인 name에 할당된 저장 공간에 접근할 수 있게 된다. 이는 심각한 문제이므로
			반드시 반환 값 자료형을 상수(constant)로 선언하도록 한다!

		return name;
	}
	
	*/

	// 이름을 참조하는 멤버 함수
	inline const char* GetName()
	{
		return name;
	}

	// 나이를 참조하는 멤버 함수
	inline int GetAge()
	{
		return age;
	}

	// 이름과 나이를 출력하는 멤버 함수
	void Print()
	{
		cout << "Name : " << name << endl;
		cout << "Age : " << age << endl<<endl;
	}
};
//---------------------------------------------------------------------------------------------------

int main()
{

	// 객체(object) 생성
	Person jackson;
	Person brown;
	Person dean;

	// 각 개체의 설정자를 이용해 멤버 변수에 값을 설정
	jackson.SetName("Michael Jackson");
	jackson.SetAge(24);

	brown.SetName("Charles Brown");
	brown.SetAge(21);

	dean.SetName("James Dean");
	dean.SetAge(36);

	// 각 객체의 Print 멤버 함수를 이용해 출력
	jackson.Print();
	brown.Print();
	dean.Print();

	/*
	char* ptr = jackson.GetName();
			ptr[0] = 'P';
	→ 포인터를 통해 객체 jackson의 private 멤버인 name에 접근할 수 있게 된다!
		이를 방지하기 위해 접근자인 GetName 멤버 함수의 반환 값 자료형을 상수로 선언해야한다!
	*/


	return 0;
}