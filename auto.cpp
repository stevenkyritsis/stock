//autosave
//
//
//
#include <iostream>
#include "stock.h"
#include <fstream>
#include <string>
#include <iomanip>
using namespace std;
int main()
{
	fstream rec;
	double price;
	double high;
	double amount_LTB;
	string name;
	rec.open("stock.txt", ios::out);
	rec << "\tStock:" << endl;
	rec.close();

	cout << "This program will calculate how much money you should put into a certain\n";
	cout << "stock at today's prices.\n";
	cout << "Please enter the name of the stock (SYMB/COMP): ";
	cin >> name;
	cout << "Please enter the amount the stock is listed at: ";
	cin >> price;
	
	//Trigger
	if (price < 0)
	{
		cout << "Invalid input! Please try again!\n";
		cout << "Please enter the amount the stock is listed at: ";
		cin >> price;
	}
	cout << "Now enter the amuont the high was in the last year: ";
	cin >> high;
	if (high < 0)
	{
		cout << "Invalid input! Please try again!\n";
		cout << "Enter the amount the high was in the last year: ";
		cin >> high;
	}
	if (price == high)
	{
		cout << "Not a good time to buy!\n";
		cout << "This is the highest the stock has been. Watch for decline.\n";
	}
	else
	
	cout << "Now enter the amount you are looking to purchase: ";
	cin >> amount_LTB;
	
	

	rec.open("stock.txt", ios::in | ios::out, ios::app);
		rec << "Name: " << name << endl;
		rec << "Price: " << fixed << showpoint << setprecision(2) << price << endl;
		rec << "Amount of stock: " << fixed << showpoint << setprecision(2) << amount_LTB << endl;
	rec.close();

	stock myStock(price, amount_LTB, high);

	myStock.amountPurchased(&rec, price, &amount_LTB);

	myStock.getGains(&rec, &price, &high);

	myStock.getPossible_double(&rec, &price, &amount_LTB);
	
	return 0;
}
