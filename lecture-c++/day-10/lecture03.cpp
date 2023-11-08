#include<iostream>

using std::cin;
using std::cout;
using std::endl;

class Sample
{
private:
	int data;

public:
	Sample(int data = 0) : data(data) { }

	void SetData(int data) { this->data = data; }

	inline int GetData() const{ return data; }

	void Print() const { cout << "data = " << data << endl; }

	// friend 함수 선언
	// → 어떤 함수를 이 클래스의 friend 함수로 선언하면, 그 함수에서는 이 클래스로 생성한 객체의 private 멤버에도 접근할 수 있다.
	friend void PrintSample(const Sample& param);
};

/*
* Sample 클래스의 인스턴스를 출력
*/
//	void PrintSample(Sample param)
//	void PrintSample(Sample& param)

void PrintSample(const Sample& param)
{
	//	→ Sample param = obj;						값에 의한 호출
	//	→ Sample& param = obj;					참조에 의한 호출
	//	→ const Sample& param = obj;			
	// →	매개 변수를 상수로 선언해서, 매개변수인 참조자가 참조하는 객체를 "실수로라도" 변경하지 못하도록 한다.
	// →	상수 객체에서는 상수 멤버 함수만 호출할 수 있다.
	
	//	param.SetData(0);		ERROR!

	//	cout << "param.data = " << param.GetData() << endl;
	cout << "param.data = " << param.data << endl;
	// → Sample 클래스의 멤버 변수 data는 private 멤버이므로, 객체 외부에서는 접근할수없다.
	//		하지만 Sample 클래스에서 PrintSample 함수를 friend 함수로 선언하면, PrintSample 함수에서는 private 멤버인 멤버 변수 data에 접근할수있게된다!
}

int main()
{
	// Sample 클래스의 객체 생성
	Sample obj(10);

	//	PrintSample 함수를 이용해, 객체 obj를 출력
	PrintSample(obj);

	return 0;
}