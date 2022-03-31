#ifndef MONEY_H
#define MONEY_H

#include<iostream>
#include <string>

using namespace std;

class Money {
private:
	int dollars;
	int cents;
public:
	Money(int dollars, int cents){}
	Money(){}

	Money operator < () {
		Money < Account
	}
	Money operator > () {
		Money > Account
	}
	Money operator <= () {
		Money <= Account
	}
	Money operator >= () {
		Money >= Account
	}
	Money operator != () {
		Money != Account
	}
	Money operator == () {
		Money == Account
	}

	Money operator- () {
		dollars = -dollars;
		cents = -cents;
		return Money(dollars,cents);
	}
	Money operator+ () {
		dollars = +dollars;
		cents = +cents;
		return Money(dollars,cents);
	}

	friend std::ostream &operator<<(std::ostream &out, Money &m){
		Money m(100,10);
		cout << m << endl;
		return m;
	} 	

};
#endif
