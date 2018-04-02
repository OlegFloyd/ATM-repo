#pragma once
#ifndef BANKDATABASE_H
#define BANKDATABASE_H
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
};
#endif

