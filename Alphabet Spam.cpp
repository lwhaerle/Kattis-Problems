// Alphabet Spam.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;

string input;
char c;
int asciival;
double whitespace, lowercase, upperletter, symbols, string_size;
double whitespace_ratio, lowercase_ratio, upperletter_ratio, symbols_ratio;

int main()
{
	cin >> input;
	string_size = input.length();
	for (int i = 0; i < string_size; i++) {
		char c = input[i]; //Gets individual character from string
		asciival = int(c); //Converts said character to Interval ASCII Value
		/* Based on ASCII Value, add 1 to associated category (assumes numbers count as symbols) */
		if (asciival == 95)
			whitespace++;
		else if (asciival >= 97 && asciival <= 122)
			lowercase++;
		else if (asciival >= 65 && asciival <= 90)
			upperletter++;
		else if (asciival >= 33 && asciival <= 64)
			symbols++;
		else if (asciival >= 91 && asciival <= 96)
			symbols++;
		else if (asciival >= 123 && asciival <= 126)
			symbols++;
		}

	/*Math to determine the ratios of the respective characters*/
	whitespace_ratio = whitespace / string_size;
	lowercase_ratio = lowercase / string_size;
	upperletter_ratio = upperletter / string_size;
	symbols_ratio = symbols / string_size;

	/*Output Value*/
	cout << whitespace_ratio << "\n";
	cout << lowercase_ratio << "\n";
	cout << upperletter_ratio << "\n";
	cout << symbols_ratio << "\n";
    return 0;
}


//This will be the basis of this program, essentially checking the value of a character and comparing it against values in the ASCII table
/*
char c;
cin >> c;
cout << "Value of " << c << " is: " << int(c) << "\n";
*/