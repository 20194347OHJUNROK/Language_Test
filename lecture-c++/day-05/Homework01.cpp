#include<iostream>
#include<cstring>

using std::cin;
using std::cout;
using std::endl;

// 이름의 최대길이
#define LENGTH 80

/*
* 사람을 표현하는 클래스 Person
*/
class Person
{
public:

	// 멤버변수(member variable)
	char name[LENGTH + 1];
	int age;

	// 멤버 함수(member function)
	void Print_potter()
	{
		cout << "Name : " << name << endl;
		cout << "Age : " << age << endl;
	}

};

int main()
{
	// 객체(object) 생성
	Person potter;

	// 멤버 접근 연산자(.)를 이용해, 객체의 멤버에 접근
	// strncpy 함수를 이용해, 배열인 멤버 변수 name에 문자열을 복사
	strncpy(potter.name, "Harry Potter", LENGTH);
	potter.age = 13;

	// Print 멤버 함수를 이용해 potter 객체를 출력
	potter.Print_potter();

	return 0;
}