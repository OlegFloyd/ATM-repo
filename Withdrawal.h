#pragma once
#ifndef WITHDRAWAL_H
#define WITHDRAWAL_H
class Withdrawal
{
public:
	Withdrawal();
	~Withdrawal();
	void execute();
private:
	int accountNumber;
	double amount;
};
#endif

