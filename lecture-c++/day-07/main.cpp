#include<iostream>
using std::cin;
using std::cout;
using std::endl;
/*
	* @file			main.cpp 
	*  @brief		main 함수가 포함된 소스 파일
*/
#include"Student.h"

/*
	*	프로젝트 파일 구성
	*  1 . Student.h - Student 클래스의 헤더 파일(Student 클래스 정의)
	* 2.	 Student.cpp - Student 클래스의 소스 파일(Student 클래스의 멤버 함수 정의)
	* 3.	main.cpp - main 함수가 포함된 소스 파일
	*/
int main()
{
	// 객체 생성
	Student kim("김철수", 88, 76, 64);
	Student park("박명희", 92, 88, 94);
	Student hong("홍길동", 96, 64, 48);
	

	// Print 멤버 함수를 이용해 객체의 정보를 출력
	kim.Print();
	park.Print();
	hong.Print();

	return 0;
}