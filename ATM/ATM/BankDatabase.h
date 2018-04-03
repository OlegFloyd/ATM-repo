
#ifndef BANKDATABASE_H
#define BANKDATABASE_H

class Account;

class BankDatabase
{
public:
	BankDatabase();
	~BankDatabase();
	bool authenticatedUser();
	double getAvailableUser();
	double getTotalBalance();
	void credit();
	void debit();
private:
	Account &account;
};
#endif

