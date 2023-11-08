//	@file						BankAccoun.cpp 
//	@brief					BankAccount 클래스의 소스 파일

#include<iostream>
#include<cstring>
#include"BankAccount.h"

using std::cin;
using std::cout;
using std::endl;

BankAccount::BankAccount(const char* owner, int accountNumber)
	: owner(nullptr), accountNumber(0), balance(0)
{
	Set_Owner(owner);
	Set_AccountNumber(accountNumber);
}

BankAccount::BankAccount() : owner(nullptr), accountNumber(0), balance(0)
{ }

BankAccount::BankAccount(const BankAccount & copy)
	: owner(nullptr), accountNumber(copy.accountNumber), balance(copy.balance)
{
	Set_Owner(copy.owner);
}
//--------------------------------------------------------------------------------------------------------------------------------------------

BankAccount::~BankAccount()
{
	if (owner) delete[] owner;
}
//---------------------------------------------------------------------------------------------------------------------------------------------

void BankAccount::Set_Owner(const char* name)
{
	if (!name)return;

	size_t length = strlen(name);
	if (length <= 0) return;

	if (owner) delete[] owner;

	owner = new char[length + 1];

	if (!owner)
	{
		cout << "ERROR : Insufficient memory! " << endl;
		exit(1);
	}

	strcpy(owner, name);
}
//--------------------------------------------------------------------------------------------------------------------------------------------

void BankAccount::Set_AccountNumber(int number)
{
	// TQQQ : 계좌 번호 검사
	accountNumber = number;
}
//--------------------------------------------------------------------------------------------------------------------------------------------

BankAccount& BankAccount::Deposit(int amount)
{
	// E) 입금하고자 하는 금액이 음수이면 오류!
	if (amount <= 0)
	{
		cout << "ERROR : Invalid amount!" << endl;
		return *this;
	}

	// 입금하면 임금한 금액만큼 잔고가 증가
	balance += amount;

	// 입금 결과 출력
	cout << "You have deposited " << amount << "won." << endl;

	// 자기 참조자 반환
	return *this;
}
//--------------------------------------------------------------------------------------------------------------------------------------------

BankAccount& BankAccount::Withdraw(int amount)
{
	// E)	출금하고자 하는 금액이 잔고보다 더 크면 오류!
	// E)	출금하고자 하는 금액이 음수이면 오류!
	if (amount > balance || amount <= 0)
	{
		cout << "ERROR : Invalid amount!" << endl;
		return *this;
	}


	// 출금하면 출금한 금액만큼 잔고를 감소
	balance -= amount;

	// 출금 결과 출력
	cout << "Yout have Withdrawn " << amount << "won." << endl;

	// 자기 참조자 반환
	return *this;
}
//--------------------------------------------------------------------------------------------------------------------------------------------

void BankAccount::Print_Balance() const
{
	cout << "Balance : " << balance << endl << endl;
}
//--------------------------------------------------------------------------------------------------------------------------------------------

void BankAccount::Print() const
{
	cout << "Owner : " << owner << endl;
	cout << "AccountNumber : " << accountNumber << endl;
	Print_Balance();
}


