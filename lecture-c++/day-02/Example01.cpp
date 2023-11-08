#include<iostream>

/*
* 함수를 호출할때  전달하는 방식
* 1. 값에 의한 호출(call-by-value)
* → 함수를 호출하면서 값을 전달
*
* 2. 참조에 의한 호출(call-by-reference)
* (1)
* → 함수를 호출하면서, 값이 저장되어있는 저장공간의 주소를 전달
* → 주소를 통해서 저장공간에 접근할수있다.
* 
* (2)
* 참조자를 통해서 저장공간에 접근할수있다.
*/

void swap(char* c1, char* c2);
void swap(int* p1, int* p2);

// 함수 오버로딩(function overloading; 함수 중복)
// → C 프로그램에서는 함수를 호출할 때, 함수의 식별자로 어떤 함수를 호출할지 결정
// → C++ 프로그램에서는 함수를 호출할 때, 함수의식별자와 매개변수의 자료형, 매개변수의 개수로 어떤 함수를 호출할지 결정
// → 그래서 C++ 프로그램에서는 매개변수의 자료형 또는 매개변수의 개수가 다르면
//		식별자가 같은 함수가 여러개 나올수 있다. 이를 "함수 오버로딩"이라고 한다!

int main()
{
	using std::cin;
	using std::cout;
	using std::endl;

	char c1 = 'A', c2 = 'B';
	cout << "c1 = " << c1 << ", c2 = " << c2 << endl;

	swap(&c1, &c2);
	cout << "c1 = " << c1 << ", c2 = " << c2 << endl;
	cout << endl;


	int n1 = 10, n2 = 20;
	cout << "n1 = " << n1 << ", n2 = " << n2 << endl;

	swap(&n1, &n2);
	cout << "n1 = " << n1 << ", n2 = " << n2 << endl;

	return 0;
}
//------------------------------------------------------------------------------------------------------


void swap(char* c1, char* c2)
{
	char tmp = *c1;
	*c1 = *c2;
	*c2 = tmp;
}

void swap(int* p1, int* p2)
{
	int temp = *p1;
	* p1 = *p2;
	* p2 = temp;
}