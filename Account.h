#pragma once
#ifndef ACCOUNT_H
#define ACCOUNT_H
class Account
{
public:
	Account();
	~Account();
	bool validatePIN();
	double getAvailableBalance();
	double getTotalBalance();
	void credit();
	void debit();
private:
	int accountNumber;
	int pin;
	double availableBalance;
	double totalBalance;
};
#endif

