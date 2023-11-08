#include<iostream>

using std::cin;
using std::cout;
using std::endl;

class Sample
{
private:
	// 멤버 변수
	int data;

public:

	// 생성자
	Sample(int data = 0):data(data){ }

	// 기본 소멸자
	// ~Sample( ){ }
	
	/*
		 * 복사 생성자(copy constructor)
			→ 이 클래스의 인스턴스(객체)로 새로운 객체를 초기화할 때 호출되는 생성자
				따라서 복사 생성자의 매개변수에는 객체가 전달되어야한다.

		*  기본 복사 생성자(default copy constructor)
			→ 클래스에 복사 생성자가 정의되어 있지 않은 경우 추가되는 생성자
			→ 기본 복사 생성자에서는 기존 객체의 멤버 변수로 새로 생성되는 객체의 멤버 변수를 초기화한다.
				이를 "멤버 대 멤버의 복사"라고 한다.
				ex)	Sample(const Sample& copy) : data(copy.data){ }
*/

	// 설정자
	void SetData(int data) { this->data = data; }

	// 접근자
	inline int GetData() { return data; }

	// 출력
	void Print() { cout << "data = " << data << endl; }
};

int main()
{
	// 객체 생성
	Sample obj1(10);				// Sample :: Sample(int); 생성자를 호출

	cout << "obj1.data = " << obj1.GetData() << endl;

	
	// 새로운 객체를 생성하고, 기존 객체로 초기화
	Sample obj2(obj1);		// Sample : : Sample(Sample); 생성자를 호출해야하는데...

	cout << "obj2.data = " << obj2.GetData() << endl;

	return 0;
}