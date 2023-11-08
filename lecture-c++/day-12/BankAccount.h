//	@file				BankAccount.h 
// @breif			BankAccount 클래스의 헤더 파일

class BankAccount
{
private:

	char* owner;					// 소유주
	int accountNumber;		// 계좌번호
	int balance;					// 잔고

public:

	// 1.생성자
	BankAccount(const char* owner, int accountNumber);
	BankAccount();
	
	// 1.1 복사 생성자
	BankAccount(const BankAccount& copy);

	// 2.소멸자
	~BankAccount();

private:
	// 3.설정자
	// → 객체 외부에서는 접근하지 못하도록 private 멤버로 선언
	void Set_Owner(const char* name);
	void Set_AccountNumber(int number);

public:
	// 4.접근자
	inline const char* Get_Owner()const { return owner; }
	inline int Get_AccountNumber()const { return accountNumber; }
	inline int Get_Balance()const { return balance; }

	// 5. 입금과 출금 기능
	BankAccount& Deposit(int amount);
	BankAccount& Withdraw(int amount);

	// 6. 잔고 출력과 계좌 정보를 출력하는 기능
	void Print_Balance() const;
	void Print() const;
};