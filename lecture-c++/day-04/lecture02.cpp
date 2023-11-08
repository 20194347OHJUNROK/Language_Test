#include<iostream>
using std::cin;
using std::cout;
using std::endl;

/*
* ��ǥ ��鿡�� ���� ǥ���ϴ� Ŭ���� Point
*/
class Point
{
	// ���� ���� ������
public:

	// ��� ����(member variable)
	int x;
	int y;

	// ��� �Լ�(member function)
	void PrintPoint()
	{
		// ��� �Լ������� ���������� �����ϴ� ��ó�� ��������� �����Ҽ� �ִ�.
		cout << "Point = (" << x << " , " << y << ")" << endl;
	}
};


int main()
{ 
	
	// ��ü(object ; �ڷ����� Ŭ������ ����) ����
	Point pos;

	// ��� ���ٿ�����(.)�� �̿��� ��ü�� ��� ������ ����
	pos.x=3;
	pos.y=8;

	// ��� ���ٿ�����(.)�� �̿��� ��ü�� ��� �Լ��� ȣ��
	pos.PrintPoint();


	return 0;
}