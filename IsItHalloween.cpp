// IsItHalloween.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;


int main()
{
	string UserInputMonth;
	int UserInputDay;
	cin >> UserInputMonth >> UserInputDay;
	if (UserInputMonth == "OCT" && UserInputDay == 31) //halloween test
		cout << "yup";
	else if (UserInputMonth == "DEC" && UserInputDay == 25)
		cout << "yup";
	else
		cout << "nope";
    return 0;
}

