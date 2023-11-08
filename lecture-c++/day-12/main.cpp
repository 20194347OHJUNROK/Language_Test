#include<iostream>
#include"BankAccount.h"

using std::cin;
using std::cout;
using std::endl;

/*
	*	프로젝트 파일 구성
	* 1. BankAccount.h - BankAccount 클래스의 헤더 파일
	* 2. BankAccoun.cpp - BankAccount 클래스의 소스 파일
	* 3. main.cpp	- main함수가 포함된 소스 파일
*/
int main()
{
	// BankAccount 클래스의 인스턴스(객체) 생성
	BankAccount myAccount("Michael Jackson", 13275);

	// 계좌 정보 출력
	myAccount.Print();

	// 계좌에 입금한 다음 잔고 출력
	myAccount.Deposit(10000).Print_Balance();

	// 계좌에서 출금한 다음 잔고 출력
	myAccount.Withdraw(5000).Print_Balance();

	myAccount.Withdraw(8000).Print_Balance();

	myAccount.Withdraw(-10000).Print_Balance();

	// 계좌에서 입금한 다음 출력
	myAccount.Deposit(-10000).Print_Balance();


	return 0;
}