#include<iostream>
#include<cstring>
int main()
{
	using std::cin;
	using std::cout;
	using std::endl;
	
	const int LENGTH = 80;
	// ���ڿ��� ������ char �ڷ��� �迭
	char str[LENGTH +1] = { 0, };

	// ����ڰ� �Է��� ���ڿ��� ����� �Ųٷ� ������ �迭
	char reverse[LENGTH + 1] = { 0, };

	//����� �Է�
	cout << "Enter a string : ";
	cin.getline(str, 80);
	cout <<endl;

	// ���ڿ��� ����
	size_t length = strlen(str);

	// �ݺ����� �̿���, ����ڰ� �Է��� ���ڿ��� �������������� ù��° ���ڱ���
	// ���ʴ�� reverse �迭�� ����
	for (int i = (int)length - 1, j=0; i >= 0; i--,j++)
	{
		reverse[j]=str[i];
	}

	// ���
	cout << "string = \"" << str << "\""<<endl;
	cout << "reverse = \"" << reverse <<"\""<< endl;

	return 0;
}