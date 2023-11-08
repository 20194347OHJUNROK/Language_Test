/*
	*@file		Student.h
	*@brief		Student 클래스의 헤더 파일(Student 클래스 정의)
	
*/


// 학생을 표현하는 클래스
class Student
{

private:

	// 멤버 변수
	char* name;
	int korean;
	int math;
	int english;
	double average;
	char grade;

public:

	// 멤버 함수
	// 1. 생성자(constructor)
	Student(const char* name, int korean, int math, int english);
	Student();

	// 2. 소멸자(destructor)
	~Student();

	//	3. 설정자(setter)
	void SetName(const char* str);
	void SetKorean(int score);
	void SetMath(int score);
	void SetEnglish(int score);

private:
	// 중복되는 코드를 줄이기 위해 멤버 함수를 정의해서 활용
	// 객체 내부에서만 사용하는 멤버 함수는 private 멤버로 선언한다.
	inline bool IsvalidScore(int score) { return score >= 0 && score <= 100;  }

	// 매개 변수 member에는 멤버 변수가 전달되어야한다. 즉 값에 의한 호출이 아니라
	// 참조에 의한 호출이 되어야 한다. 따라서 매개변수 member에는 참조자로 선언한다.
	inline void SetScore(int& member, int score) { member = IsvalidScore(score) ? score : 0; }

public:
	// 4. 접근자(getter)
	// → 멤버 함수가 inline 함수이면, 클래스 내부에서 정의해야한다.
	inline const char* GetName() { return name; }
	inline int GetKorean() { return korean; }
	inline int GetMAth() { return math; }
	inline int GetEnglish() { return english; }

	double GetAverage();
	char GetGrade();

	// 5. 출력
	void Print();
};