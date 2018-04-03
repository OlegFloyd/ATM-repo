
#ifndef WITHDRAWAL_H
#define WITHDRAWAL_H

class Screen;
class CashDispenser;
class Keypad;
class BankDatabase;

class Withdrawal
{
public:
	Withdrawal();
	~Withdrawal();
	void execute();
private:
	int accountNumber;
	double amount;

	Screen &screen;
	CashDispenser &cashDispenser;
	Keypad &keypad;
	BankDatabase &bankDatabase;
};
#endif

