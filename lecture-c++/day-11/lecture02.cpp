#include<iostream>

using std::cin;
using std::cout;
using std::endl;

class DeskLamp
{
private:
	bool isON;

public:
	
	// 생성자
	DeskLamp(bool isON = false) : isON(isON){ }

	// 설정자
	void SetIsON(bool status) { isON = status; }

	// 접근자
	inline bool GetIsOn()const { return isON; }

	// 책상 조명등이 켜진 상태로 설정
	DeskLamp& TurnOn()
	{
		isON = true;

		// 자기 참조자 반환
		return *this;
	}

	// 책상 조명등이 꺼진 상태로 설정
	DeskLamp& TurnOff()
	{
		isON = false;

		return *this;
	}

	// 책상 조명등의 현재 상태를 출력
	void PrintStatus() const
	{
		cout << "Status : " << (isON ? "ON" : "OFF") << endl;
	}
};

int main()
{
	// 객체 생성
	DeskLamp my_lamp;

	// 책상 조명등을 켠 다음, 상태 출력
	my_lamp.TurnOn().PrintStatus();

	// 책상 조명등을 끈 다음, 상태 출력
	my_lamp.TurnOff().PrintStatus();

	return 0;
}