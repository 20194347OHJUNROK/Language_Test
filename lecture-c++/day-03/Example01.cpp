#include<iostream>
/*
* char �ڷ��� ������ ���� ��ȯ�ϴ� �Լ�
* @param r1 ��ȯ�ϰ��� �ϴ� ������ ������(char&)
* @param r2 ��ȯ�ϰ��� �ϴ� ������ ������(char&)
*/

// �����ڸ� �̿��� ������ ���� ȣ��
void swap(char& r1, char& r2)
{
	// char& r1= c1;
	// char& r2 = c2;

	char tmp = r1;
	r1 = r2;
	r2 = tmp;
}

void swap(int& r1, int& r2)
{
	// int& r1 = n1;
	// int& r2 = n2;
	int tmp = r1;
	r1 = r2;
	r2 = tmp;
}
//--------------------------------------------------------------------------

int main()
{
	using std::cin;
	using std::cout;
	using std::endl;

	char c1 = 'A', c2 = 'B';
	cout << "c1 =  " << c1 << " ,c2 = " << c2 << endl;

	swap(c1, c2);
	cout << "c1 =  " << c1 << " ,c2 = " << c2 << endl<<endl;


	int n1 = 10, n2 = 20;
	cout << "n1 =  " << n1 << " ,n2 = " << n2 << endl;

	swap(n1, n2);
	cout << "n1 =  " << n1 << " ,n2 = " << n2 << endl;

	return 0;
}