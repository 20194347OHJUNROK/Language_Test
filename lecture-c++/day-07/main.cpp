#include<iostream>
using std::cin;
using std::cout;
using std::endl;
/*
	* @file			main.cpp 
	*  @brief		main �Լ��� ���Ե� �ҽ� ����
*/
#include"Student.h"

/*
	*	������Ʈ ���� ����
	*  1 . Student.h - Student Ŭ������ ��� ����(Student Ŭ���� ����)
	* 2.	 Student.cpp - Student Ŭ������ �ҽ� ����(Student Ŭ������ ��� �Լ� ����)
	* 3.	main.cpp - main �Լ��� ���Ե� �ҽ� ����
	*/
int main()
{
	// ��ü ����
	Student kim("��ö��", 88, 76, 64);
	Student park("�ڸ���", 92, 88, 94);
	Student hong("ȫ�浿", 96, 64, 48);
	

	// Print ��� �Լ��� �̿��� ��ü�� ������ ���
	kim.Print();
	park.Print();
	hong.Print();

	return 0;
}