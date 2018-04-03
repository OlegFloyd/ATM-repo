
#ifndef DEPOSIT_H
#define DEPOSIT_H
class Deposit
{
public:
	Deposit();
	~Deposit();
	void execute();
private:
	int accountNumber;
	double amount;
};
#endif

