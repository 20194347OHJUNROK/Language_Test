/*
	@file		Student.cpp
	@brief	Student 클래스의 소스 파일(Student 클래스의 멤버함수 정의)
*/
#include<iostream>
#include<cstring>
#include"Student.h"

using std::cout;
using std::cin;
using std::endl;

/*
	* 클래스의 멤버 함수를 클래스 외부에서 정의한다.
	* 이때, 범위 지정 연산자( : : )를 이용해 멤버 함수가 어떤 클래스의 멤버 함수인지 명시한다.


	* 생성자의 멤버 초기화 리스트를 통해 멤버 변수를 초기화해야 한다.
	* 생성자를 선언부와 정의부로 나눠 작성할 때는 멤버 초기화 리스트는 정의부에만 작성한다.
*/ 
Student::Student(const char* name, int korean, int math, int english)
	: name(nullptr), korean(0), math(0), english(0), average(0), grade('F')
{
	/* 
		*  멤버 변수에 잘못된 값이 초기화되는 것을 방지하기 위해, 멤버 초기화 리스트에서는
		*  멤버 변수들을 0으로 초기화하고, 설정자를 통해 검사한 다음 멤버 변수에 설정한다.
		*  멤버 변수와 지역 변수의 식별자가 충돌하면, 지역 변수가 우선한다.
		*  단, 멤버 초기화 리스트에서는 멤버 변수를 나타내며, 초기화하는 값은 매개 변수가 된다.
	*/ 
	SetName(name);
	SetKorean(korean);
	SetMath(math);
	SetEnglish(english);
}

Student::Student()
	: name(nullptr), korean(0), math(0), english(0), average(0), grade('F')
{ }

/*
	*	소멸자(destructor)는 객체가 소멸될 때 호출되며, 객체가 소멸되기전에
		객체에서 할당 받은 시스템 자원을 해제하기 위해 사용한다.

*/
Student::~Student()
{
	// 동적으로 할당 받은 저장 공간은 반드시 해제해야 한다!

	// 멤버 변수 name에 할당 받은 저장 공간이 있는지 검사한 다음, 할당받은 저장공간을 해제한다.
	if (name)delete[]name;
}

void Student::SetName(const char* str)
{
	// 멤버 변수에 값을 설정하기 전에 유효한 값인지 검사해야한다.
	if (!str)return;

	// 매개변수에 전달된 문자열의 길이를 확인
	size_t length = strlen(str);
	if (length <= 0)return;

	// 동적으로 저장 공간을 할당 받기 전에, 이전에 할당된 저장 공간이 있는지 검사하고,
	// 할당된 저장 공간이 있으면 새로운 저장 공간을 할당 받기 전에 해제한다.
	if (name)delete[]name;

	// 문자열을 저장하기 위해, 문자열의 길이만큼 저장 공간을 할당
	name = new char[length + 1];

	// IMPORTANT : 동적으로 저장 공간을 할당 받은 경우, 사용하기 전에 반드시 검사해야한다.
	if (!name)
	{
		cout << "ERROR : Insufiicient memory!" << endl;
		exit(1);
	}

	// 할당 받은 저장 공간에 매개변수 str에 전달된 문자열을 복사
	strcpy(name, str);
}

void Student::SetKorean(int score)
{
	// 멤버 변수에 값을 설정하기 전에 유효한 값인지 검사
	//→	korean = score >= 0 && score <= 100 ? score : 0;
	//→	korean = IsvalidScore(score) ? score : 0;
	SetScore(korean, score);
	// → SetScore 멤버 함수에는 멤버 변수 korean의 값을 전달하는게 아니라,
	//		매개변수로 멤버 변수 korean을 참조하도록 해야 한다. 따라서 SetScore함수의 첫번재 매개변수는
	//		참조자가 되어야 한다.
}

void Student::SetMath(int score)
{
	SetScore(math, score);
}

void Student::SetEnglish(int score)
{
	SetScore(english, score);
}

double Student::GetAverage()
{
	// 평균과 같이 계산해야 하는 값은 접근자에서 계산한 다음 반환한다.
	average = (double)(korean + math + english) / 3;

	return average;
}

char Student::GetGrade()
{
	// 등급을 계산하기 전에 평균부터 계산해야 한다.
	GetAverage();

	// 평균을 이용해 등급을 구한 다음 반환
	if (average >= 90) grade = 'A';
	else if (average >= 80)grade = 'B';
	else if (average >= 70)grade = 'C';
	else if (average >= 60)grade = 'D';
	else  grade = 'F';

	return grade;
}

void Student::Print()
{
	// 출력하기 전에 평균과 등급부터 계산해야 한다.
	GetGrade();

	// 이름과 평균 등급을 출력
	cout << "이름 : " << name << endl;
	cout << "평균 : " << average << endl;
	cout << "등급 : " << grade << endl << endl;
}



