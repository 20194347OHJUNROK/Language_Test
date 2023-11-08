#include<iostream>

int main()
{
	using std::cin;
	using std::cout;
	using std::endl;

	/*
	* → 프로그램이 실행되는 단계에서 힙(heqap)  영역에 저장공간을 할당
	* → 상당히 큰 저장 공간이나 크기가 가변적인 저장 공간이 필요한 경우 사용
	*/

	// new 연산자를 이용해, int 자료형의 크기만큼 동적으로 저장 공간을 할당
	int* ptr = new int;

	// 할당 받은 저장 공간을 검사
	// → new 연산자를 이용해 저장 공간을 할당 받고자 한경우, 저장 공간이 할당되면
	//		new 연산자의 연산 결과는 할당 받은 저장공간의 주소가 되며
	//		저장공간을 할당받지 못한 경우에는 연산 결과가 nullptr가 된다
	if (!ptr)	// if(ptr == nulptr)
	{
		cout << "ERROR : Insufficient memory!!" << endl;
		return 1;
	}

	// 동적으로 할당 받은 저장 공간을 변수처럼 활용
	*ptr = 10;

	cout << "*ptr = " << *ptr << endl << endl;

	// 중요!! : 동적으로 할당 받은 저장 공간은 반드시 해제해야한다!
	delete ptr;

//------------------------------------------------------------------------------------------------------------

	// 가변크기 배열(VLA : Variable length Array)은 선택 구현 사항이다.
	// 컴파일러에 따라 지원하지않을수도 있다. GCC나 Clang에서는 VLA를 지원하지만
	// MSVC에서는 VLA를 지원하지않는다.

		int length = 10;
	// → MSVC에서는 VLA를 지원하지 않기 때문에, 배열을 선언할때 배열의 크기를 고정해야한다.
	//	int numbers[length] = { 0, };			// ERROR

	// MSVC에서 가변 크기 배열이 필요한 경우, 동적 메모리할당을 이용한다.
	// new 연산자를 이용해 동적으로 int 자료형의 저장공간을 여러칸 할당

	ptr	=	new int[length];

	// 중요!! : 동적으로 할당 받은 저장공간은 사용하기 전에 반드시 검사해야한다!
	if (!ptr)
	{
		cout << "ERROR : Insufficient memory!" << endl;
		return 1;
	}

	// 동적으로 할당 받은 저장공간을 배열처럼 활용
	for (int i = 0; i < length; i++)
	{
		ptr[i] = i + 11;
		// → *(ptr + i) = i + 11;

		cout << "ptr[" << i << "] = " << *(ptr + i) << endl;
		// printf("*ptr[%d] = %d\n", i, *(ptr + i));
	}


	//중요!! : 저장공간 해제
	delete[]ptr;

	return 0;
}