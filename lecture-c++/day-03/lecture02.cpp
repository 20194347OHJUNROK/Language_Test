#include<iostream>

int main()
{
	using std::cin;
	using std::cout;
	using std::endl;

	/*
	* 참조자(reference)
	* → 변수 등의 저장공간에 붙이는 별명(alias)
	* → 참조자는 참조연산자(&)를 이용해 선언하며, 참조자의 자료형은 참조하고자 하는
	*		저장공간(변수)의 자료형과 같아야한다.
	* → 참조자는 반드시 선언하면서 참조하고자하는 저장공간을 명시해야하며,
	*		초기화한 이후에는 참조대상을 바꿀 수 없다.
	*/

	int num = 10;

	// 변수 num의 참조자 ref를 선언
	int& ref = num;

	cout << "num = " << num << endl << "ref = " << ref << endl;

	// 참조 연산자(&)를 이용해, 변수 num과 참조자 ref가 참조하는 저장 공간의 주소를 확인
	cout << "&num = " << &num << endl <<"&ref = " << &ref << endl;

	// 참조자 ref를 이용해 참조하는 저장 공간, 즉 변수 num 에 접근
	ref = 20;

	cout << "num = " << num << endl << "ref = " << ref << endl;



	return 0;
}