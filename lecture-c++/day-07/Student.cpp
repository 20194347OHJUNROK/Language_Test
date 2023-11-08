/*
	@file		Student.cpp
	@brief	Student Ŭ������ �ҽ� ����(Student Ŭ������ ����Լ� ����)
*/
#include<iostream>
#include<cstring>
#include"Student.h"

using std::cout;
using std::cin;
using std::endl;

/*
	* Ŭ������ ��� �Լ��� Ŭ���� �ܺο��� �����Ѵ�.
	* �̶�, ���� ���� ������( : : )�� �̿��� ��� �Լ��� � Ŭ������ ��� �Լ����� ����Ѵ�.


	* �������� ��� �ʱ�ȭ ����Ʈ�� ���� ��� ������ �ʱ�ȭ�ؾ� �Ѵ�.
	* �����ڸ� ����ο� ���Ǻη� ���� �ۼ��� ���� ��� �ʱ�ȭ ����Ʈ�� ���Ǻο��� �ۼ��Ѵ�.
*/ 
Student::Student(const char* name, int korean, int math, int english)
	: name(nullptr), korean(0), math(0), english(0), average(0), grade('F')
{
	/* 
		*  ��� ������ �߸��� ���� �ʱ�ȭ�Ǵ� ���� �����ϱ� ����, ��� �ʱ�ȭ ����Ʈ������
		*  ��� �������� 0���� �ʱ�ȭ�ϰ�, �����ڸ� ���� �˻��� ���� ��� ������ �����Ѵ�.
		*  ��� ������ ���� ������ �ĺ��ڰ� �浹�ϸ�, ���� ������ �켱�Ѵ�.
		*  ��, ��� �ʱ�ȭ ����Ʈ������ ��� ������ ��Ÿ����, �ʱ�ȭ�ϴ� ���� �Ű� ������ �ȴ�.
	*/ 
	SetName(name);
	SetKorean(korean);
	SetMath(math);
	SetEnglish(english);
}

Student::Student()
	: name(nullptr), korean(0), math(0), english(0), average(0), grade('F')
{ }

/*
	*	�Ҹ���(destructor)�� ��ü�� �Ҹ�� �� ȣ��Ǹ�, ��ü�� �Ҹ�Ǳ�����
		��ü���� �Ҵ� ���� �ý��� �ڿ��� �����ϱ� ���� ����Ѵ�.

*/
Student::~Student()
{
	// �������� �Ҵ� ���� ���� ������ �ݵ�� �����ؾ� �Ѵ�!

	// ��� ���� name�� �Ҵ� ���� ���� ������ �ִ��� �˻��� ����, �Ҵ���� ��������� �����Ѵ�.
	if (name)delete[]name;
}

void Student::SetName(const char* str)
{
	// ��� ������ ���� �����ϱ� ���� ��ȿ�� ������ �˻��ؾ��Ѵ�.
	if (!str)return;

	// �Ű������� ���޵� ���ڿ��� ���̸� Ȯ��
	size_t length = strlen(str);
	if (length <= 0)return;

	// �������� ���� ������ �Ҵ� �ޱ� ����, ������ �Ҵ�� ���� ������ �ִ��� �˻��ϰ�,
	// �Ҵ�� ���� ������ ������ ���ο� ���� ������ �Ҵ� �ޱ� ���� �����Ѵ�.
	if (name)delete[]name;

	// ���ڿ��� �����ϱ� ����, ���ڿ��� ���̸�ŭ ���� ������ �Ҵ�
	name = new char[length + 1];

	// IMPORTANT : �������� ���� ������ �Ҵ� ���� ���, ����ϱ� ���� �ݵ�� �˻��ؾ��Ѵ�.
	if (!name)
	{
		cout << "ERROR : Insufiicient memory!" << endl;
		exit(1);
	}

	// �Ҵ� ���� ���� ������ �Ű����� str�� ���޵� ���ڿ��� ����
	strcpy(name, str);
}

void Student::SetKorean(int score)
{
	// ��� ������ ���� �����ϱ� ���� ��ȿ�� ������ �˻�
	//��	korean = score >= 0 && score <= 100 ? score : 0;
	//��	korean = IsvalidScore(score) ? score : 0;
	SetScore(korean, score);
	// �� SetScore ��� �Լ����� ��� ���� korean�� ���� �����ϴ°� �ƴ϶�,
	//		�Ű������� ��� ���� korean�� �����ϵ��� �ؾ� �Ѵ�. ���� SetScore�Լ��� ù���� �Ű�������
	//		�����ڰ� �Ǿ�� �Ѵ�.
}

void Student::SetMath(int score)
{
	SetScore(math, score);
}

void Student::SetEnglish(int score)
{
	SetScore(english, score);
}

double Student::GetAverage()
{
	// ��հ� ���� ����ؾ� �ϴ� ���� �����ڿ��� ����� ���� ��ȯ�Ѵ�.
	average = (double)(korean + math + english) / 3;

	return average;
}

char Student::GetGrade()
{
	// ����� ����ϱ� ���� ��պ��� ����ؾ� �Ѵ�.
	GetAverage();

	// ����� �̿��� ����� ���� ���� ��ȯ
	if (average >= 90) grade = 'A';
	else if (average >= 80)grade = 'B';
	else if (average >= 70)grade = 'C';
	else if (average >= 60)grade = 'D';
	else  grade = 'F';

	return grade;
}

void Student::Print()
{
	// ����ϱ� ���� ��հ� ��޺��� ����ؾ� �Ѵ�.
	GetGrade();

	// �̸��� ��� ����� ���
	cout << "�̸� : " << name << endl;
	cout << "��� : " << average << endl;
	cout << "��� : " << grade << endl << endl;
}



