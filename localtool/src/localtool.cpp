//============================================================================
// Name        : localtool.cpp
// Author      : Julaine
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>


using namespace std;

int Calculator (int num1, int num2, int option);

int main() {
	cout << "!!!Hello World!!!" << endl; // prints !!!Hello World!!!
	cout << "This App shows Data" << endl;
	cout << "Test the process of github with eclipse" << endl;

	int option;
	option = 1;

	int num1 =10, num2 = 5;

	cout << Calculator (num1, num2, option);
	return 0;
}
