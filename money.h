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

	bool operator < (const Money& m);	
	bool operator >(const Money& m);
	bool operator <= (const Money& m);
	bool operator >= (const Money& m);
	bool operator != (const Money& m);
	bool operator == (const Money& m);

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

	friend std::ostream& operator<<(std::ostream& out, const Money &m);	

};
#endif
