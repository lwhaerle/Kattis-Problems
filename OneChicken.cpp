// OneChicken.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int N; //Number of People Attending
int M; //Pieces of Chicken to be distributed
int P; //Pieces of Chicken Left
int Q; //Pieces of Chicken Needed


int main()
{
	cin >> N >> M;
	if (N > M) {
		P = N - M;
		if (P == 1)
			cout << "Dr. Chaz needs " << P << " more piece of chicken!" << endl;
		else
			cout << "Dr. Chaz needs " << P << " more pieces of chicken!" << endl;
	}
	else if (N < M) {
		Q = M - N;
		if (Q == 1)
			cout << "Dr. Chaz will have " << Q << " piece of chicken left over!" << endl;
		else
			cout << "Dr. Chaz will have " << Q << " pieces of chicken left over!" << endl;
	}
    return 0;
}

