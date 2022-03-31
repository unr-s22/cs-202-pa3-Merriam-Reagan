#ifndef ACCOUNT_H
#define ACCOUNT_H
#include "money.h"
#include <vector>

using namespace std;

class Account{

<<<<<<< HEAD
	
public:
=======
	Money Money;
	vector<Money> depVec;
	vector<Money> withVec;
	bool needUpdate = false;
	
public:
	Account(Money);
	void deposit(Money);
	void withdrawal(Money);
	Money balance();
	friend ostream& opreator << (ostream&, Account& account);
>>>>>>> 35f3402b3a8556b6342b7fd05e34ce8d5e12459e
	

};
#endif
