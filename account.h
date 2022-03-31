#ifndef ACCOUNT_H
#define ACCOUNT_H
#include "money.h"
#include <vector>

using namespace std;

class Account{

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
	

};
#endif
