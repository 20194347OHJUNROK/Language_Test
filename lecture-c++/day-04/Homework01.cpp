#include<iostream>

int main()
{
	using std::cout;
	using std::cin;
	using std::endl;

	int n1, n2;			// 사용자가 입력한 세자리 정수
	int digit;			// 변수 n2의 각자리 수

	cout << "Enter two integers :  ";
	cin >> n1 >> n2;
	cout << endl;

	/*
	*	(3)에 해당하는 값	=	n1 * (n2의 1의 자리)
	*	(4)에 해당 하는 값	=	n1 * (n2의 10의 자리)
	*	(5)에 해당 하는 값	=	n1 *(n2의 100의 자리)
	
	 →		변수 n2의 1의 자리			=		n2/ 1   % 10 
	 →		변수 n2의 10의 자리		=		n2/ 10 % 10 
	 →		변수 n2의 100의 자리		=		n2	/100 % 10 
	*/

	// 반복문을 이용해, 변수 n2의 각 자리수를 계산
	// → i = 1, 10, 100
	for (int i = 1; i <= 100; i *= 10)
	{
		// 변수 n2의 1의자리, 10의 자리, 100의 자리를 계산
		digit = n2 / i % 10;

		// (3), (4), (5)에 해당하는 값을 계산해서 출력
		cout << n1 * digit << endl;
	}


	// (6)에 해당하는 값을 계산해서 출력
	cout << n1 * n2 << endl;


	return 0;
}