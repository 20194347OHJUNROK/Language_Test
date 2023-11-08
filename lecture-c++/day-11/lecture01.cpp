#include<iostream>

using std::cin;
using std::cout;
using std::endl;

class Sample
{
private:

	int data;

	/*
	* 정적 멤버 변수(static member variable)
	* → static 키워드를 붙여서 선언한 멤버 변수
	* → 프로그램이 실행되자마자 저장 공간이 할당되고, 프로그램이 종료될 때까지
	*		그 저장 공간이 유지된다.
	* → 정적 멤버 변수는 프로그램 전체에 하나만 존재하며, 클래스의 모든 인스턴스가 공유한다.
	* → 정적 멤버 변수는 main 함수가 호출되기 전에, 즉 객체가 생성되기도 전에 이미 선언되어있기때문에,
	*		생성자의 멤버 초기화 리스트에서 초기화 할수없다.
	* → 정적 멤버 변수는 클래스 외부에서 초기화한다.
	* → 전역 변수나 정적 변수처럼, 정적 멤버 변수도 초기화하지 않으면 0으로 초기화된다.
	*/
	static int count;										// Sample 클래스 인스턴스의 개수
	// → 이 선언문은 프로그램이 실행되자마자, main 함수가 호출되기 전에 실행된다.


	/*
	* 상수 멤버 변수(constant member variable)
	* → 상수는 선언과 동시에 초기화해야 한다. 따라서 상수 멤버 변수는 생성자의 멤버 초기화 리스트를 통해 초기화해야한다.
	const int MAX;								// 멤버 변수 data의 최댓값

	* 정적 상수 멤버 변수(static constant member variable)
	* → 상수 멤버 변수가 모든 인스턴스에서 같은 값을 가지면, 저장 공간을 절약하기 위해 정적 상수 멤버 변수로 선언한다.
	* → 정적 상수 멤버 변수는 정적 멤버 변수이므로, 생성자의 멤버 초기화리스트에서 초기화하지 못하고, 클래스 외부에서 초기화해야한다.
	* → 단, 정적 상수 멤버 변수의 자료형이 정수 자료형이면, 클래스 내부에서 선언과 동시에 초기화할수있다.
	*/
	//	static const int MAX;
		static const int MAX = 255;			// 멤버 변수 data의 최댓값

	//	static const char MESSAGE[81] = "Nice to Meet You!";
		static const char MESSAGE[81];

public:

	/*
		Sample(int data = 0) : data(data) { }
	* 객체가 생성될때마다 정적 멤버 변수 count를 증가시키고, 객체가 소멸될때마다 정적 멤버 변수 count를 감소시킨다.

	// 생성자
	Sample(int data = 0) : data(data) { count++; }
	Sample(const Sample& copy) : data(copy.data) { count++; }

	*/

	// Sample(int data = 0) : data(data),MAX(255)
	Sample(int data = 0) : data(data)
	{
		SetData(data);
		count++;
	}

	//	Sample(const Sample& copy) : data(copy.data),MAX(copy.MAX) 
	Sample(const Sample& copy) : data(copy.data)
	{
		SetData(copy.data);
		count++; 
	}

	// 소멸자
	~Sample() { count--; }

	// 설정자
	//	void SetData(int data) { this->data = data; }
		void SetData(int data) { this->data = data > MAX? MAX : data; }

	// 접근자
	inline int GetData() const { return data; }
	//	inline int GetCount() const { return count; }
	/*
	* 정적 멤버 함수(static member function)
	* → 정적 멤버 함수는 객체가 생성되기 이전에 이미 선언되어 있다. 하지만 일반 멤버 함수는 객체가 생성되어야만
	*		객체를 통해 호출할 수 있다.
	*	→ 객체가 생성되기 이전에 정적 멤버 변수에 접근하기위해 정적 멤버함수가 필요하다.
	*		정적 멤버 함수는 객체가 생성되기 이전에 호출할수 있다.
	*	→ 따라서 정적 멤버함수에서는 정적 멤버에만 접근할수 있다. 정적 멤버 함수는 상수 멤버함수(constant member function)으로 선언할수 없다.
	*/
	static inline int GetCount() { return count; }

	void Print() const { cout << "data = " << data << endl; }

	// 정적 멤버 함수 선언
	static void PrintCount();

};

/*
	*	정적 멤버 변수는 클래스 외부에서 초기화한다!
	 →  클래스 외부에서 정적 멤버 변수에 접근할 때는 클래스 식별자와 범위 지정 연산자(: :)를 사용한다.
	 → 정적 멤버 변수를 클래스 외부에서 초기화할때는 static 키워드를 붙이지 않는다.

	* 정적 멤버 변수는 프로그램이 실행되자마자 저장 공간이 할당되므로, 객체가 생성되기 이전에 이미 선언되어있다.
		따라서 객체가 생성되기 이전에도 정적 멤버변수에 접근해야 하는경우가 생길수 있다.
		이런 경우, 정적멤버 함수가 필요하다!
	*	객체가 생성되기 이전에는 클래스 식별자와 범위 지정 연산자(::)를 이용해  정적 멤버 함수를 호출할 수 있다.
*/
int Sample :: count = 0;

/*
* 정적 멤버 함수를 클래스 외부에서 정의
* →  static 키워드는 정적 멤버 함수의 선언부에만 붙인다!
*/
void Sample::PrintCount()
{
	cout << "Sample :: count = " << count << endl;
}

// 정적 상수 멤버 변수 MESSAGE는 자료형이 정수가 아니므로, 클래스내부에서 초기화 하지못하며, 클래스 외부에서 초기화해야한다.
const char Sample::MESSAGE[81] = "Nice to meet you!";

int main()
{
	cout << "Sample :: count = " << Sample::GetCount() << endl;

	// 객체 생성
	// → 정적 멤버 함수도 객체가 생성된 이후에는 객체를 통해 접근 할수 있다.
	Sample obj1(10);

	obj1.Print();

	// 정적 멤버 변수 count를 출력
	cout << "obj1.count  = " << obj1.GetCount() << endl;


	// 객체 생성
	Sample obj2(20);

	obj2.Print();

	// 정적 멤버 변수 count를 출력
	// → 정적 멤버 변수는 모든 인스턴스에서 공유한다!
	cout << "obj2.count = " << obj2.GetCount() << endl;
	cout << "obj1.count  = " << obj1.GetCount() << endl;

	// 객체가 생성된 이후에도, 클래스 식별자와 범위 지정 연산자(::)를 이용해 정적 멤버 함수를 호출할 수 있다.
	//	cout << "Sample :: count = " << Sample::GetCount() << endl;

	Sample::PrintCount();

	return 0;
}