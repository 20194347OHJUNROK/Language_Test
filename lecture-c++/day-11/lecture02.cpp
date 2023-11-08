#include<iostream>

using std::cin;
using std::cout;
using std::endl;

class DeskLamp
{
private:
	bool isON;

public:
	
	// ������
	DeskLamp(bool isON = false) : isON(isON){ }

	// ������
	void SetIsON(bool status) { isON = status; }

	// ������
	inline bool GetIsOn()const { return isON; }

	// å�� ������� ���� ���·� ����
	DeskLamp& TurnOn()
	{
		isON = true;

		// �ڱ� ������ ��ȯ
		return *this;
	}

	// å�� ������� ���� ���·� ����
	DeskLamp& TurnOff()
	{
		isON = false;

		return *this;
	}

	// å�� ������� ���� ���¸� ���
	void PrintStatus() const
	{
		cout << "Status : " << (isON ? "ON" : "OFF") << endl;
	}
};

int main()
{
	// ��ü ����
	DeskLamp my_lamp;

	// å�� ������� �� ����, ���� ���
	my_lamp.TurnOn().PrintStatus();

	// å�� ������� �� ����, ���� ���
	my_lamp.TurnOff().PrintStatus();

	return 0;
}