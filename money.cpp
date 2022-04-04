#include "money.h"
#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

Money::Money(){
	dollars=0;
	cents=0;
	pennies=0;
}

Money::Money(int dollars, int cents){
	dollars = dollars;
	cents = dollars*100+cents;
}

bool Money::operator < (const Money&m){
	if(cents<m.cents){
		return true;
	}
	return false;
}

bool Money::operator > (const Money&m){
	if(cents > m.cents){
		return true;
	}
	return false;
}
bool Money::operator <= (const Money&m){
	if(cents <= m.cents){
		return true;
	}
	return false;
}
bool Money::operator >= (const Money&m){
	if(cents >= m.cents){
		return true;
	}
	return false;
}
bool Money::operator == (const Money&m){
	if(cents == m.cents){
		return true;
	}
	return false;
}

ostream& operator<<(ostream& out, const Money& m) {
	out << "$"<<m.dollars<< "."<<m.cents;
	return out;
}
