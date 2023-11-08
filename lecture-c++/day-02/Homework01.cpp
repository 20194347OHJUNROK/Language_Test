#include<iostream>
#include<cstdio>
int main()
{
	using std::cin;
	using std::cout;
	using std::endl;

	const int LENGTH=80;

	// 문자열을 저장할 배열
	char str[LENGTH +1] = { 0, };

	// counter 배열의 크기
	const int COUNTER_LEN = 'z' - 'A' + 1;			//	58


	// 문자열에서 각 영문자가 나온 횟수를 저장할 배열
	int counter[COUNTER_LEN] = { 0, };
	// → counter[0] = 'A'가 나온 횟수 → ('A' - 'A' = 0)
	// → counter[1] = 'B'가 나온 횟수	→ ('B' - A' = 1)
	// ...
	// → counter[25] = 'Z'가 나온 횟수('Z' -'A' =25)
	// → counter[26]~ counter[31] = ASCI 코드에서 대문자와 소문자 사이의 문자들
	// → counter[32] = 'a'가 나온 횟수 → ('a' - 'A' = 32)
	// → counter[57] = 'z'가 나온 횟수 → ('z' - 'A' = 57)
	
	// 사용자 입력
	cout << "Enter a string :";
	cin.getline(str,LENGTH);
	cout << endl;


	// 반복문을 이용해, 배열 str에 저장되어있는 문자열에서 널 문자('\0')가 나오기 전까지 각 영문자가 몇번씩 나오는지 계산
	for (int i = 0; str[i]!=0 && i<=LENGTH; i++)
	{
		// str[i]가 영문자인 경우, 그 영문자가 나온 횟수를 증가
		if ((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z'))
		{
			counter[str[i] - 'A']++;
			// → str[i] = 'A' ; str[i] - 'A' = 0; counter[0]++;
			// → str[i] = 'a' ; str[i] - 'A' = 32; counter[32]++;
			// → str[i] = 'z' ; str[i] - 'A' = 57; counter[57]++;
		}
	}

	// 출력
	cout << "Number of alpabets"<<endl;
	
	// 반복문을 이용해, 배열 couter의 원소가 0이 아닌 경우 출력
	for (int i = 0; i < COUNTER_LEN; i++)
	{
		if (counter[i])
		{
			// 문자 출력
			// → cout 객체와 스트림 삽입 연산자를 이용해 출력할 때는, 출력할 값 
			//		즉 스트림 삽입 연산자의 두번째 피연산자의 자료형에 따라 출력하는 형태가 결정된다.
			//		따라서 문자 형태로 출력하기 위해서는 출력할 값의 자료형이 char 자료형이 되어야한다.
			cout << (char)('A' + i) << " : ";
			// printf("%c : ", 'A' + i);

			// counter[i]의 값만큼 별을 출력
			for (int j = 0; j < counter[i]; j++)
				cout << "*";

				// 개행
				cout << endl;
		}
	}

	return 0;
}