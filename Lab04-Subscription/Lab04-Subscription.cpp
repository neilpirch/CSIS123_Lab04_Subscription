// Lab04-Subscription.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main()
{
	const double SUBSCRIPTION_COST = 27.95;

	string firstName;
	string middle;
	string lastName;
	int qty;
	double totalCost;

	//inputs

	cout << endl << "  First Name:  ";
	cin >> firstName;
	cout << endl << "      Middle:  ";
	cin >> middle;
	cout << endl << "   Last Name:  ";
	cin >> lastName;
	cout << endl << "    Quantity:  ";
	cin >> qty;

	//outputs
	totalCost = qty * SUBSCRIPTION_COST;

	cout << fixed << setprecision(2);
	cout << endl << " === Subscription Order === " << endl;
	cout << endl << " " << firstName << " " << middle << " " << lastName << endl;
	cout << endl << " " << qty << "    @  $" << SUBSCRIPTION_COST << "    $" << totalCost << endl;
	
	cout << endl;
	system("pause");
    return 0;
}

