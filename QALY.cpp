// QALY.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;


int main()
{
	int Periods;
	float QALY_SUM = 0;
	float Quality, Years, Product;
	cin >> Periods;
	for (int i = 0; i < Periods; i++) 
	{
		cin >> Quality >> Years;
		Product = Quality * Years;
		QALY_SUM += Product;
	}
	cout << QALY_SUM << endl;
    return 0;
}

