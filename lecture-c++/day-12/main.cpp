#include<iostream>
#include"BankAccount.h"

using std::cin;
using std::cout;
using std::endl;

/*
	*	������Ʈ ���� ����
	* 1. BankAccount.h - BankAccount Ŭ������ ��� ����
	* 2. BankAccoun.cpp - BankAccount Ŭ������ �ҽ� ����
	* 3. main.cpp	- main�Լ��� ���Ե� �ҽ� ����
*/
int main()
{
	// BankAccount Ŭ������ �ν��Ͻ�(��ü) ����
	BankAccount myAccount("Michael Jackson", 13275);

	// ���� ���� ���
	myAccount.Print();

	// ���¿� �Ա��� ���� �ܰ� ���
	myAccount.Deposit(10000).Print_Balance();

	// ���¿��� ����� ���� �ܰ� ���
	myAccount.Withdraw(5000).Print_Balance();

	myAccount.Withdraw(8000).Print_Balance();

	myAccount.Withdraw(-10000).Print_Balance();

	// ���¿��� �Ա��� ���� ���
	myAccount.Deposit(-10000).Print_Balance();


	return 0;
}