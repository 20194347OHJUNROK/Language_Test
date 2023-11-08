//	@file						BankAccoun.cpp 
//	@brief					BankAccount Ŭ������ �ҽ� ����

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
	// TQQQ : ���� ��ȣ �˻�
	accountNumber = number;
}
//--------------------------------------------------------------------------------------------------------------------------------------------

BankAccount& BankAccount::Deposit(int amount)
{
	// E) �Ա��ϰ��� �ϴ� �ݾ��� �����̸� ����!
	if (amount <= 0)
	{
		cout << "ERROR : Invalid amount!" << endl;
		return *this;
	}

	// �Ա��ϸ� �ӱ��� �ݾ׸�ŭ �ܰ� ����
	balance += amount;

	// �Ա� ��� ���
	cout << "You have deposited " << amount << "won." << endl;

	// �ڱ� ������ ��ȯ
	return *this;
}
//--------------------------------------------------------------------------------------------------------------------------------------------

BankAccount& BankAccount::Withdraw(int amount)
{
	// E)	����ϰ��� �ϴ� �ݾ��� �ܰ��� �� ũ�� ����!
	// E)	����ϰ��� �ϴ� �ݾ��� �����̸� ����!
	if (amount > balance || amount <= 0)
	{
		cout << "ERROR : Invalid amount!" << endl;
		return *this;
	}


	// ����ϸ� ����� �ݾ׸�ŭ �ܰ� ����
	balance -= amount;

	// ��� ��� ���
	cout << "Yout have Withdrawn " << amount << "won." << endl;

	// �ڱ� ������ ��ȯ
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


