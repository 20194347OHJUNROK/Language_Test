#include<iostream>

using std::cin;
using std::cout;
using std::endl;

/*
* 간단한 클래스 Sample
*/
class Sample
{
private:

	// 멤버 변수
	// → 특별한 경우가 아니면 멤버 변수는 private멤버로 선언한다.
	int data;

	/*
		private 멤버인 멤버 변수 data에 외부에서 접근 할 수있도록, 멤버 함수인 설정자(setter)와 접근자 (getter)를 추가한다.

	* 설정자(setter)
		→ private 멤버인 멤버 변수에 값을 설정하기 위한 멤버 함수
		→ 멤버 변수에 잘못된 값이 설정되지 않도록, 설정자에서는 멤버 변수에 값을 설정하기전에 설정할 값을 검사한 다음에 설정한다.

	* 접근자(getter)
		→ private 멤버인 멤버 변수의 값을 참조하기 위한 멤버 함수
		→ 멤버 변수의 값을 계산해야 하는 경우, 접근자를 통해 필요할때마다 값을 계산해서 멤버 변수의 값을 참조할수있다.
	*/


public:

	// 멤버 함수(출력)
	// → 특별한 경우가 아니면 멤버 함수는 public 멤버로 선언한다.

	// 설정자(setter)
	void SetData(int n)
	{
		data = n;
	}

	// 접근자(getter)
	// → 접근자는 보통 인라인 함수(inline function)으로 선언한다.
	// int GetData()
	inline int GetData()
	{
		return data;
	}

	void Print()
	{
		cout << "data = " << data << endl;
	}
};

int main()
{
	// 객체(object) 생성
	Sample  obj;

	// obj.data = 10;			WRONG!
	//   → Sample 클래스의 멤버 변수인 data는 private 멤버이므로, 객체 obj의 멤버 변수 data에 외부에서 접근할 수 없다!

	// 설정자를 이용해, private 멤버로 선언한 멤버 변수에 값을 설정
	obj.SetData(10);

	// 접근자를 이용해 private 멤버로 선언한 멤버 변수에 값을 참조
	//	→ cout << "obj.data = " << obj.data << endl;    WRONG!
	cout << "obj.data = " << obj.GetData() << endl;

	// 객체 obj의 Print 멤버 함수를 이용해 출력
	obj.Print();

	return 0;
}