//Menu function
//
//
//
#include <iostream>
#include "stock.h"
#include <fstream>
#include <string>
#include <iomanip>
using namespace std;

void inputNew();

void inputView();


int main()
{
	//Variable for input
	char userInput;
	//Loop for menu
do{
	cout << "------Menu------";
	cout << "Please enter the coresponding letter for the action you wish\n";
	cout << "to perform\n";
	cout << endl;
	cout << "New (N)  View (V)";
	cin >> userInput;
	} while(userInput != 'N' || userInput != 'n' && userInput != 'V' || userInput != 'v')
	if (userInput == 'N' || userInput == 'n')
	{
		inputNew();
	}
	else if (userInput == 'V' || userInput == 'v')
	{
		inputView();
	}
	else;
	
	return 0;
}

void inputNew()
{
	//variables
	fstream rec;
	double price;
	double high;
	double amount_LTB;
	string name;
	char answer;
	char answer1
	string answer2;
	
	//start file
	rec.open("stock.txt", ios::in | ios::out)
	rec << "---Stock---" << endl;
	rec.close();

	cout << "This program will calculate how much money you should put into a certain\n";
	cout << "stock at today's prices.\n";
	cout << "Please enter the name of the stock (SYMB/COMP): ";
	cin >> name;
	cout << "Please enter the amount the stock is listed at: ";
	cin >> price;
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
	else if (high == price)
	{
		cout << "Not a good time to buy!\n";
		cout << "It could go be a possible bubble.\n";
	}
	else;
	
	cout << "Now enter the amount you are looking to purchase: ";
	cin >> amount_LTB;
	
	cout << "Would you like to save the stock? ";
	cin >> answer;

	if (answer == 'Y' || answer == 'y')
	{
	rec.open("stock.txt", ios::in | ios::out, ios::app);
		rec << "Name: " << name << endl;
		rec << "Price: " << fixed << showpoint << setprecision(2) << price << endl;
		rec << "Amount of stock: " << fixed << showpoint << setprecision(2) << amount_LTB << endl;
		rec << "Amount Purchased: " << fixed << showpoint << setprecission(2) << amountPurchased << endl;
		rec << 
	rec.close();
	}
	else if (answer == 'N' || answer == 'n')
	{
		cout << "Would you like to change anything? (Y/N): ";
		cin >> answer1;
		if (answer1 == 'Y' || answer1 == 'y')
		{
			cout << "What would you like to change? (price, name, stock purchased, : ";
			cin >> answer2;
		}
			if (answer2 == 'Price' || answer2 == 'price')
			{
				cout << "Please enter the amount the stock is listed at: ";
				cin >> price;
				if (price < 0)
				{
					cout << "Invalid input! Please try again!\n";
					cout << "Please enter the amount the stock is listed at: ";
					cin >> price;
				}
			}
			else if (answer2 == 'Name' || answer2 == 'name')
			{
				cout << "Please enter the name of the stock (SYMB/COMP): ";
				cin >> name;
			}
			else if (answer2 == '')
	}
	else if (answer1 == 'N' || answer1 == 'n')
	{
	
	}
	else;

	

	
	
	return;
}
