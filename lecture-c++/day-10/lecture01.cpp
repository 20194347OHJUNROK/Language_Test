#include<iostream>
using std::cin;
using std::cout;
using std::endl;

class Sample
{
	private :
		int data;

public:

	/*
	* 변환 생성자(conversion constructor)
	* → 다른 자료형 값을 Sample 자료형으로 형 변환하고자 할때 호출 되는 생성자
	*/
	Sample(int data = 0) : data(data){ }

	void SetData(int data) { this->data = data; }

	inline int GetData() { return data; }

	void Print() { cout << "data = " << data << endl; }

	/*
		* 변환 함수(conversion function)
		→ Sample 클래스의 인스턴스를 다른 자료형으로 형 변환할때 호출되는 연산자 함수
	*/
	inline operator int()
	{
		// 변환 함수에서는 지정한 자료형으로 변환했을 때의 연산 결과를 반환한다.
		// → 연산자 함수의 반환 값이 연산자의 연산 결과가 된다.
		return data;
	}
};


int main()
{
	// 변수에 다른 자료형의 값을 대입
	double value;

	value = 3;
	// → value = (double)3;
	// → value = 3.0;

	// 객체 생성
	Sample obj(10);

	obj.Print();

	// 객체 obj에 정수를 대입
	obj = 20;	
	// 임시 객체가 생성
	//	→ obj = (Sample)20;											// 임시 객체가 생성된다.
	// → obj = Sample(20);


	/*
		* 임시 객체(temporary object)
			→ 문장 내에서 생성되는 객체
			→ 임시 객체는 참조자로 참조하지 않으면, 문장이 종료하면 소멸한다.
	*/

	obj.Print();

	// int 자료형 변수에 Sample 클래스의 인스턴스(instance; 객체)를 대입
	int num = obj;
	// → int num = obj;	
	// → int num = (int)obj;	시도해보자!								// 연산자 오버로딩(Operator oberloading)
	// → int num = obj.int(	);	라는 멤버함수를 호출
	// → int num = obj.data;

	cout << "num = " << num << endl;


	return 0;
}