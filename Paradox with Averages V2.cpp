// Paradox with Averages V2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int T;
int numCS;
int numECON;
int storedCS[1000];
int storedECON[1000];
int iqCS, iqCS_Total;
int iqECON, iqECON_Total;
double averageCS;
double averageECON;
int FunnyEvent;

int main()
{
	cin >> T;
	for (int i = 0; i < T; i++)
	{
		cin >> numCS >> numECON;
		/*Gather Values and store them in arrays to be referenced later*/
		for (int j = 0; j < numCS; j++)
		{
			cin >> iqCS;
			storedCS[j] = iqCS;
			iqCS_Total += iqCS;
		}
		averageCS = iqCS_Total / double(numCS);
		for (int k = 0; k < numECON; k++)
		{
			cin >> iqECON;
			storedECON[k] = iqECON;
			iqECON_Total += iqECON;
		}
		averageECON = iqECON_Total / double(numECON);

		/*Determine if IQ is greater than average ECON but less than average CS*/
		for (int l = 0; l < numCS; l++)
		{
			if (storedCS[l] < averageCS && storedCS[l] > averageECON)
				FunnyEvent++;
		}
		cout << FunnyEvent << endl;
		fill_n(storedCS, numCS, 0);
		fill_n(storedECON, numECON, 0);
		iqCS_Total = 0;
		iqECON_Total = 0;
		averageCS = 0;
		averageECON = 0;
		FunnyEvent = 0;
	}
	return 0;
}

