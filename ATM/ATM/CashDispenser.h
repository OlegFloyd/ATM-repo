
#ifndef CASHDISPENSER_H
#define CASHDISPENSER_H
class CashDispenser
{
public:
	CashDispenser();
	~CashDispenser();
	void dispenseCash();
	bool isSufficientCashAvailable();
private:
	int count = 500;
};
#endif

