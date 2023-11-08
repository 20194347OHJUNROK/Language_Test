#include<iostream>

using std::cin;
using std::cout;
using std::endl;

class Sample
{

private:
	int data;

	/*
		* 상수 멤버 변수(constant member variable)
		*	→ const 키워드를 붙여서 정의한 멤버 변수
		*  → 상수는 선언과 동시에 반드시 초기화해야한다. 상수 멤버 변수도 객체가 생성되면서 반드시 초기화해야 한다!
		*  → 그래서 생성자의 멤버 초기화 리스트에 상수 멤버 변수의 초기화 표현식을 반드시 명시해야한다.
		* → 상수 객체에서는 오로지 상수 멤버 함수만 호출할 수 있다.
				그래서 멤버 함수에서 멤버 변수를 변경하지 않는다면, 그 멤버 함수는 상수 멤버 함수로 선언하는것이 좋다!
	*/
	const int MAX;			// 멤버 변수 data의 최댓값

public:
	// 생성자
	// → 상수 멤버 변수가 잇는 경우, 생성자의 멤버 초기화 리스트에 상수 멤버 변수의 초기화 표현식이 없으면 컴파일 오류가 발생한다.
	//	→	Sample(int data = 0) : data(data) { }	ERROR!
	//	→ Sample(int data = 0) : data(data), MAX(255) {  }

	Sample(int data = 0) : data(data), MAX(255) { SetData(data); }

	// 기본 복사 생성자(default copy constructor)
	//	→ Sample(const Sample& copy): data(copy.data),MAX(copy.MAX){ }

	void SetData(int data) 
	{
		this->data = data > MAX? MAX : data; 

	}

	/*
		* 상수 멤버 함수(constant member function) 
		* → const 키워드를 붙여서 선언한 멤버 함수
		* →  상수 멤버 함수에서는 멤버 변수를 변경할 수 없다!
		*		따라서, 상수 멤버 함수에서는 상수 멤버 함수가 아닌 다른 멤버 함수를 호출할 수 없다!
			→	inline int GetData() { return data; }
			→	inline const int GetData() { return data; }				// 반환 값이 상수!
	*/
	 inline int  GetData()const { return data; }

	//	void Print() const{cout << "data = " << data << endl; }

	/*
	* 멤버 함수에서 const 선언 여부는 함수 오버로딩의 조건이 된다!
	* 따라서, 상수 객체에서 호출 되는 멤버 함수와 일반 객체에서 호출 되는 멤버 함
	*/
	void Print() const{cout << "CONST : data = " << data << endl; }
	void Print() {cout << "data = " << data << endl; }

};

int main()
{
	/*
		* 상수(constant)
		변하지 않는 값
		→ 상수는 식별자를 대문자로 작성하는 것이 관례이며, 반드시 초기화해야한다.
		→ 상수는 초기화한 다음, 그 값을 변경할 수 없다!
	*/

	const int FACTOR = 12;
	// FACTOR = 14;			ERROR!
	
	/*
		* 상수 객체(constant object)
		* → const 키워드를 붙여서 생성한 객체
		* → 상수 객체는 생성한 다음, 멤버 변수의 값을 변경할 수 없다!
		* → 즉, 상수 객체에서는 오로지 상수 멤버 함수만 호출할 수 있다.
		*		그래서 멤버 함수에서 멤버 변수를 변경하지 않는다면, 그 멤버 함수는 상수 멤버 함수로 선언하는 것이 좋다!
	*/

	// 상수 객체 생성
	const Sample objConst(10);

	//	objConst.GetData = 20;			 ERROR!

	cout << "objConst.data = " << objConst.GetData() << endl;

	objConst.Print();
	// → Print 멤버 함수가 const 선언 여부로 오버로딩 되어 있는경우,
	//		상수 객체에서는 상수 멤버 함수가 호출된다.

	// 일반 객체 생성
	Sample obj(20);

	obj.Print();
	// → Print 멤버 함수가 const 선언 여부로 오버로딩 되어 있는경우,
	//		일반 객체에서는 일반 멤버 함수가 호출된다.
	return 0;
}