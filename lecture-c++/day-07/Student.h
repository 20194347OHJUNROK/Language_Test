/*
	*@file		Student.h
	*@brief		Student Ŭ������ ��� ����(Student Ŭ���� ����)
	
*/


// �л��� ǥ���ϴ� Ŭ����
class Student
{

private:

	// ��� ����
	char* name;
	int korean;
	int math;
	int english;
	double average;
	char grade;

public:

	// ��� �Լ�
	// 1. ������(constructor)
	Student(const char* name, int korean, int math, int english);
	Student();

	// 2. �Ҹ���(destructor)
	~Student();

	//	3. ������(setter)
	void SetName(const char* str);
	void SetKorean(int score);
	void SetMath(int score);
	void SetEnglish(int score);

private:
	// �ߺ��Ǵ� �ڵ带 ���̱� ���� ��� �Լ��� �����ؼ� Ȱ��
	// ��ü ���ο����� ����ϴ� ��� �Լ��� private ����� �����Ѵ�.
	inline bool IsvalidScore(int score) { return score >= 0 && score <= 100;  }

	// �Ű� ���� member���� ��� ������ ���޵Ǿ���Ѵ�. �� ���� ���� ȣ���� �ƴ϶�
	// ������ ���� ȣ���� �Ǿ�� �Ѵ�. ���� �Ű����� member���� �����ڷ� �����Ѵ�.
	inline void SetScore(int& member, int score) { member = IsvalidScore(score) ? score : 0; }

public:
	// 4. ������(getter)
	// �� ��� �Լ��� inline �Լ��̸�, Ŭ���� ���ο��� �����ؾ��Ѵ�.
	inline const char* GetName() { return name; }
	inline int GetKorean() { return korean; }
	inline int GetMAth() { return math; }
	inline int GetEnglish() { return english; }

	double GetAverage();
	char GetGrade();

	// 5. ���
	void Print();
};