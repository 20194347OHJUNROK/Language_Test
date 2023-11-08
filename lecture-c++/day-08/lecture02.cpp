#include<iostream>
using std::cin;
using std::cout;
using std::endl;

class Sample
{
private:

	// 멤버 변수
	int data;

public:
	
	//멤버 함수
	
	// 생성자
	// → 생성자의 멤버 초기화 리스트 에서는 멤버 변수와 매개변수의 식별자가 같아도 구분 할수 있다.
	Sample(int data = 0):data(data){ }

	// 설정자
	//	void SetData(int n) { data = n; }
	void SetData(int data)
	{ 
		/*
			* 멤버 변수와 지역 변수의 식별자가 같으면, 지역변수가 우선한다.
			* 그렇기때문에 이런 경우, this 포인터와 간접 멤버 접근 연산자(->)룰 사용해
			* 멤버 변수에 접근할수있다.
		*/
		this->data = data;
		// → (*this).data = data;
	}


	// 접근자
	inline int GetData() { return data; }

	// 객체에 할당된 저장 공간의 주소를 참조
	inline Sample* GetThisPointer()
	{
		/*
			* this 포인터
			→ 멤버 함수에 접근하고 있는 객체를 가리키는 포인터
			→ 컴파일러가 자동으로 생성
		*/

		return this;
	}

	// 출력
	//	void Print() { cout << "data = " << data << endl; }
	
	// 멤버 변수 data를 출력하고, 자기 참조자를 반환
	Sample& Print()
	{
		cout << "data = " << data << endl;

		// 자기 참조자(self-reference)를 반환
		return *this;
	}


	/*
	// 멤버 변수 data에 값을 증가
	void Adder(int value)
	{
		// 멤버 변수 data에 매개변수에 전달된 값을 추가
		data += value;
	}
	*/

	/*
	* 멤버 변수 data에 값을 증가하고 this 포인터를 반환
	* @param value 추가할 값
	* @return Adder 멤버 함수에 접근하고 있는 객체의 주소
	Sample* Adder(int value)
	{
		data += value;

		// this 포인터를 반환
		return this;
	}
	*/


	/*
	* 멤버 변수 data에 값을 추가하고, this 포인터가 가리키는 객체를 반환
	* @param value 추가할 값
	* @return Adder 멤버 함수에 접근하고 있는 객체
	Sample Adder(int value)
	{
		data += value;
		
		
		* 포인터 연산자를 이용해, this 포인터가 가리키는 객체를 반환
			→ 반환 값의 자료형이 Sample 클래스이므로, this 포인터가 가리키는 객체를 반환하면
				this 포인터가 가리키는 객체를 복사한 임시 객체(temporary object)가 함수 호출 표현식의 연산 결과가 된다.
		
		return	*this;
	}
	*/


	/* 멤버 변수 data에 값을 추가하고, this 포인터가 가리키는 객체의 참조자를 반환
		* @param value 추가할 값
		* @return Adder 멤버 함수에 접근하고 있는 객체의 참조자
	*/
		Sample& Adder(int value)
		{
			data += value;

			// 포인터 연산자를 이용해 this 포인터가 가리키는 객체를 반환
			// → 반환 값의 자료형이 Sample& 이므로, this 포인터가 가리키는 객체를 반환하면
			//		this 포인터가 가리키는 객체를 참조하는 참조자가 반환된다.
			//	→ 이러한 참조자를 자기 참조자(self - reference)라고 한다.
			return	*this;
		}
};


int main()
{
	// 객체 생성
	Sample obj(10);

	obj.Print();

	// 객체에 할당도니 저장 공간의 크기와 주소를 출력
	cout << "sizeof(obj) = " << sizeof(obj) << endl;
	cout << "&obj = " << &obj << endl;

	// 객체 포인터 선언
	Sample* ptr = &obj;

	// 포인터 ptr과 간접 멤버 접근 연산자(->)를 이용해, 객체 obj의 멤버에 접근
	ptr->Print();

	// GetThisPointer 멤버 함수를 이용해, 객체 obj의 주소를 구해 포인터 ptr에 대입
	ptr = obj.GetThisPointer();
	// → ptr = &obj;

	cout << "obj.GetThisPointer( ) = " << ptr << endl;
	cout << "-------------------------------------------------------------------" << endl;
	//--------------------------------------------------------------------------------------------------
	obj.Adder(5);
	obj.Print();

/*
	obj.Adder(5).Print();
		→ (obj.Adder(5)), Print();
		→ 두 번째 멤버 접근 연산자의 첫 번째 피연산자는	Adder 멤버함수의 반환값이 된다.
			따라서 Adder 멤버 함수가 객체 obj를 반환하면, 위 문장은 정상적으로 실행될수있다. 
*/

/*
		// Adder 멤버 함수가 반환하는 값이 this 포인터, 즉 객체 obj를 가리키는 포인터이므로
		//	간접 멤버 접근 연산자(->)를 이용해, 객체 obj의 Print 멤버 함수에 접근 할수 있다.
		obj.Adder(5)->Print();						// Sample* Sample : : Adder(int value); 생성자 호출
		//	→ (obj.Adder)->Print();			
		//	→ (&obj)->Print();			
*/


	// Adder 멤버 함수가 반환하는 값이 this 포인터가 가리키는 객체, 즉 객체 obj(?)이므로
	//	멤버 접근 연산자(.)를 이용해 객체 obj(?)의 Print 멤버 함수에 접근할수 있다.
	obj.Adder(5).Print();
	/* 
		→ (obj.Adder(5)).Print();
		→ (obj_copy).Print();
		→ Adder 멤버 함수가 반환하는 객체는 객체 obj와 같은 값을 가지고 있지만, 객체 obj는 아니다!
		→ 이와 같이 함수에서 객체를 반환하는 경우, 함수 호출 표현식의 연산 결과로 생성되는 객체를
			임시 객체라고 하며, 임시 객체는 참조자로 참조하지 않는 이상 문장의 실행이 끝나면 자동 소멸한다.
		→ 즉, 위 문장에서 출력되는 값은 객체 obj의 멤버 변수 data가 아니라, 임시 객체의 멤버 변수 data이다.	
	*/


	/*
	obj.Adder(5).SetData(100);
	//	→ obj.Adder(5).SetData(100);
	// → (obj_copy).SetData(100);
	// 객체 obj와 Adder 멤버 함수의 반환 값, 즉 임시 객체는 같은 값을 가지고있는 다른 객체이다.
	//	따라서 위 문장에서는 임시 객체의 멤버 변수 data는 100으로 설정되지만, 객체 obj의 멤버 변수 data는 값이 바뀌지않는다.

	obj.Print();
	*/


	/*
	* Adder 멤버 함수가 자기 참조자를 반환하면, 함수 호출 표현식의 연산결과는 객체 obj를
		참조하는 참조자가 된다. 따라서 이 참조를 통해 객체 obj의 멤버에 접근할 수있다.
	*/
	obj.Adder(5).SetData(100);									// Sample& Sample : : Adder(int vluae); 생성자를 호출
	// → (obj.Adder(5)).SetData();
	// → (obj_ref).SetData();
	// → Adder 멤버 함수의 반환 값은 객체 obj의 참조자이다. 따라서 이 참조자를 이용해
	//		객체 obj의 SetData의 멤버 함수를 호출하게 된다.
	obj.Print();
	

	obj.Adder(10).Print().Adder(20).Print();

	return 0;
}