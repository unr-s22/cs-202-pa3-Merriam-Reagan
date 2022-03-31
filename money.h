#ifndef MONEY_H
#define MONEY_H

#include<iostream>
#include <string>

class Money {
private:
	int dollars;
	int cents;
public:
	//constructor that takes dollars and cents
	Money(int dollars, int cents){}
	//default constructor
	Money(){}
	//overload of <,>,<=,>=,!=,==
	
	//overload to add/subtract money in account
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

	//overload of string operator
	friend std::ostream &operator<<(std::ostream &out, const Money &Money){
		Money m(100,10);
		std::cout << m << std::endl;
		return m;
	} 

		//std::cout << m << std::endl;
	

};
#endif
