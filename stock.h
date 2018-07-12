//
//
//
//
#ifndef STOCK_H
#define STOCK_H

#include <iostream>
#include <fstream>
using namespace std;

class stock{
private:
	double price;
	double amountBought;
	double amount_of_Stock;
	double perc_gains;
	double poss_gains;
	double high;
	fstream record;

public:
	stock (double, double, double);

	void amountPurchased(fstream& record, double &price, double &amount);

	void getGains(fstream& record, double &price, double high);

	void getPossible_double(fstream& record, double &price, double &amount);
};
#endif