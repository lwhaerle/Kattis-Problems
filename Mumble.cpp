// Mumble.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;



int main()
{
	int Count;
	char c[8];
	int Word;
	bool MakeSense;
	int Wrong = 0;
	cin >> Count;
	for (int i = 1; i <= Count; i++) {
		cin >> c;
		Word = atoi(c);
		if (c[0] == 'm') {
			MakeSense = true;
		}
		else if (Word == i) {
			MakeSense = true;
		}
		else {
			MakeSense = false;
			Wrong = 10;
		}

	} 
	if (Wrong == 10) {
		cout << "something is fishy" << endl;
	}
	else {
		cout << "makes sense" << endl;
	}
	
    return 0;
}

