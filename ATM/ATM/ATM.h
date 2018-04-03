
#ifndef ATM_
#define ATM_

class DepositSlot;
class Keypad;
class CashDispenser;
class Screen;
class BankDatabase;

class ATM
{
public:
	ATM();
	~ATM();
private:
	bool userAuthenticated = false;

	DepositSlot &depositSlot;
	Keypad &keypad;
	CashDispenser &cashDispenser;
	Screen &screen;
	BankDatabase &bankDatabase;
};
#endif
