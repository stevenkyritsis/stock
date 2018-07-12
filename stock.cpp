//
//
//
//
//
#include <iostream>
#include <iomanip>
#include "stock.h"
#include <fstream>
#include <iomanip>

stock::stock(double p, double a, double h)
{
	p = price;
	a = amount_of_Stock;
	h = high;
}

void stock::amountPurchased(double p, double &a)
{
	double aI;
	aI = p * a;
	aI = amountBought;
	return;
}

void stock::getGains(&fstream r, double &p, double h, double perc_gains, double poss_gains)
{
	double prG;
	double poG;
	poG = h / p;
	prG = poG * 100;
	poss_gains = poG;
	perc_gains = prG;
	r.open("stock.txt", ios::in, ios::app);
	r << "Possible gains: " << fixed << showpoint << setprecission(2) << poG;
	r << fixed << showpoint << setprecission(2) << prg << "%" << endl;
	r.close();
	return;
}

void stock::getPossible_double(&fstream r, double &p, double &a)
{
	double two_x;
	double aB;
	aB = amountBought;
	two_x = ((2 * p) * a) - aB;
	r.open("stock.txt", ios::in, ios::app);
	r << "Amount of profit if doubled: " << fixed << showpoint << setprecission(2) << two_x << endl;
	r.close();

	return;
}