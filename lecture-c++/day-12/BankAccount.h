//	@file				BankAccount.h 
// @breif			BankAccount Ŭ������ ��� ����

class BankAccount
{
private:

	char* owner;					// ������
	int accountNumber;		// ���¹�ȣ
	int balance;					// �ܰ�

public:

	// 1.������
	BankAccount(const char* owner, int accountNumber);
	BankAccount();
	
	// 1.1 ���� ������
	BankAccount(const BankAccount& copy);

	// 2.�Ҹ���
	~BankAccount();

private:
	// 3.������
	// �� ��ü �ܺο����� �������� ���ϵ��� private ����� ����
	void Set_Owner(const char* name);
	void Set_AccountNumber(int number);

public:
	// 4.������
	inline const char* Get_Owner()const { return owner; }
	inline int Get_AccountNumber()const { return accountNumber; }
	inline int Get_Balance()const { return balance; }

	// 5. �Աݰ� ��� ���
	BankAccount& Deposit(int amount);
	BankAccount& Withdraw(int amount);

	// 6. �ܰ� ��°� ���� ������ ����ϴ� ���
	void Print_Balance() const;
	void Print() const;
};