#include<iostream>
#include<cstring>
int main()
{
	using std::cin;
	using std::cout;
	using std::endl;
	
	const int LENGTH = 80;
	// 문자열을 저장할 char 자료형 배열
	char str[LENGTH +1] = { 0, };

	// 사용자가 입력한 문자열을 뒤집어서 거꾸로 저장할 배열
	char reverse[LENGTH + 1] = { 0, };

	//사용자 입력
	cout << "Enter a string : ";
	cin.getline(str, 80);
	cout <<endl;

	// 문자열의 길이
	size_t length = strlen(str);

	// 반복문을 이용해, 사용자가 입력한 문자열을 마지막에서부터 첫번째 문자까지
	// 차례대로 reverse 배열에 대입
	for (int i = (int)length - 1, j=0; i >= 0; i--,j++)
	{
		reverse[j]=str[i];
	}

	// 출력
	cout << "string = \"" << str << "\""<<endl;
	cout << "reverse = \"" << reverse <<"\""<< endl;

	return 0;
}