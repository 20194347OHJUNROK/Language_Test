#include <iostream>
using std::cin;
using std::cout;
using std::endl;
/*
	간단한 클래스 Sample
*/

class Sample
{
private:

	// 멤버 변수
	int data;

public:

	// 멤버 함수
	
	// 1. 생성자(constructor)
	Sample(int n = 0) :data(n)
	{
		cout << "Sample :: Sample(int n) - data = " << data << endl;
	}

	// 2. 소멸자(destructor)
	~Sample()
	{
		cout << "Sample :: ~Sample() - data = " << data << endl;
	}

	// 3. 설정자(setter)
	void SetData(int n) { data = n; }

	// 4. 접근자(getter)
	inline int GetData() { return data; }

	// 5. 출력
	void Print() { cout << "data = " << data << endl; }
};

int main()
{
	// 배열의 크기
	const int LENGTH = 10;

	// 객체 배열(object array) 선언
	// → 객체 배열의 각 원소는 객체(object)이다.
	Sample items[LENGTH];				// → Sample : : Sample(); 생성자를 호출한다.

	// 객체 포인터(object pointer) 선언
	Sample* ptr = items;


	cout << "----------------------------------------------------------------------------------------------------------------------" << endl;

	// 반복문을 이용해, 배열의 원소들에 차례대로 접근
	for (int i = 0; i < LENGTH; i++)
	{
		// 인덱스 연산자[]를 이용해 , 배열의 각 원소에 접근
		// → 객체의 배열의 각 원소는 객체이므로, 멤버 접근 연산자(.)를 이용해 객체의 멤버에 접근할수있다.
		items[i].SetData(i + 1);
		ptr[i].SetData(i + 1);
		// → 컴파일러는 ptr[i] == *(ptr + i)로 해석한다.
		// → *(ptr + i).SetData(i+1);		ERROR!! 연산자의 우선순위 때문에 오류가 발생
		// → (*(ptr+i)).SetData(i+1);
		(ptr + i)->SetData(i + 1);			// 간접 멤버 접근 연산자(->)를 이용해 간단하게 표현
	
	/*
		멤버 접근연산자(.)
		→ 첫 번째 피연산자가 객체, 두 번째 피연산자는 객체의 멤버

		간접 멤버 접근 연산자(->)
		→ 첫 번째 피연산자가 객체를 가리키는 포인터, 두 번째 피연산자는 객체의 멤버
	*/

	items[i].Print();
}

	cout << "----------------------------------------------------------------------------------------------------------------------" << endl;
	
	// new 연산자를 이용해 객체를 생성
	//	ptr = new Sample();			// Sample : : Sample( ); 생성자를 호출한다.
	ptr = new Sample(11);		// Sample : : Sample(11); 생성자를 호출한다.


	// IMPORTANT : 동적으로 할당 받은 저장 공간은 반드시 검사한 다음 사용한다.
	if (!ptr)
	{
		cout << "ERROR : Insufficient memory!" << endl;
		exit(1);
	}

	// 포인터 연산자(*)와 멤버 접근 연산자(.)를 이용해, 포인터가 가리키는 객체의 멤버에 접근
	//	→ *ptr.SetData(12);			ERROR!! 연산자의 우선순위 때문에 오류가 발생
	// → (*ptr).SetData(12);

	// 간접 멤버 접근 연산자(->)를 이용해, 포인터가 가리키는 객체의 멤버에 접근
	ptr->SetData(12);
	ptr->Print();

	// IMPORTANT :  동적으로 할당 받은 저장 공간은 반드시 해제해줘야한다.
	delete ptr;				// Sample : : ~Sample( ); 소멸자를 호출한다.

	cout << "----------------------------------------------------------------------------------------------------------------------" << endl;


	// new 연산자를 이용해 객체 배열을 생성
	ptr = new Sample[LENGTH];		// Sample : : Sample( ); 생성자를 호출


	// IMPORTANT : 동적으로  저장 공간을 할당받은 경우 할당 받은 저장 공간은	 반드시 검사한 다음 사용한다.
	if(!ptr)
	 {
		cout << "ERROR : Insufficient memory!" << endl;
		exit(1);
	}

	// 반복문을 이용해, 동적으로 생성한 객체 배열의 원소들에 차례대로 접근
	for (int i = 0; i < LENGTH; i++)
	{
		// 인덱스 연산자와 멤버 접근 연산자를 이용해, 원소의 멤버에 접근
		ptr[i].SetData(i + 101);
		ptr[i].Print();
	}


	// IMPORTANT :  동적으로 할당 받은 저장 공간은 반드시 해제해줘야한다.
	delete[] ptr;				// Sample : : ~Sample( ); 소멸자를 호출한다.

	cout << "----------------------------------------------------------------------------------------------------------------------" << endl;


	// 포인터 배열(pointer array) 선언
	// → 포인터 배열의 각 원소는 객체 포인터이다.
	// → 포인터 배열의 각 원소에 동적으로 저장 공간을 할당 받는다. 즉, 객체를 생성한다.
	//		메모리를 효율적으로 사용하기 위해 이러한 방법을 사용한다.
	Sample* list[LENGTH] = {nullptr};

	// 반복문을 이용해, 포인터 배열의 각 원소에 동적으로 저장 공간을 할당
	for (int i = 0; i < LENGTH; i++)
	{
		// new 연산자를 이용해 동적으로 저장 공간을 할당 받아, 포인터 배열의 각 원소에
		//	할당 받은 저장 공간의 주소를 대입
		list[i] = new Sample(i + 200);					// Sample : : Sample(i + 200); 생성자를 호출한다.


	// IMPORTANT : 동적으로 할당 받은 저장 공간은 반드시 검사한 다음 사용한다.
		if (!list[i])
		{
			cout << "ERROR : Insufficient memory!" << endl;

			// 프로그램을 강제 종료하기 전에 이전 원소에 할당 받은 저장 공간을 해제
			for (int j = 0; j < i; j++)  delete list[j];
			exit(1);
		}

		// 배열 list의 원소는 포인터이므로, 간접 멤버 접근 연산자(->)를 이용해 멤버에 접근
		list[i]->Print();
	}

		// IMPORTANT :  동적으로 할당 받은 저장 공간은 반드시 해제해줘야한다.
	for (int i = 0; i < LENGTH; i++) { delete list[i] };


	cout << "----------------------------------------------------------------------------------------------------------------------" << endl;


	return 0;
}