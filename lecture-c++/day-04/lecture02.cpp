#include<iostream>
using std::cin;
using std::cout;
using std::endl;

/*
* 좌표 평면에서 점을 표현하는 클래스 Point
*/
class Point
{
	// 접근 제어 지시자
public:

	// 멤버 변수(member variable)
	int x;
	int y;

	// 멤버 함수(member function)
	void PrintPoint()
	{
		// 멤버 함수에서는 지역변수에 접근하는 것처럼 멤버변수에 접근할수 있다.
		cout << "Point = (" << x << " , " << y << ")" << endl;
	}
};


int main()
{ 
	
	// 객체(object ; 자료형이 클래스인 변수) 생성
	Point pos;

	// 멤버 접근연산자(.)를 이용해 객체의 멤버 변수에 접근
	pos.x=3;
	pos.y=8;

	// 멤버 접근연산자(.)를 이용해 객체의 멤버 함수를 호출
	pos.PrintPoint();


	return 0;
}