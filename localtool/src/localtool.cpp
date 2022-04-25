//============================================================================
// Name        : localtool.cpp
// Author      : Julaine
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>

#include <math.h>
#include<cstdlib>
#include<string>
#include<vector>
#include<numeric>
#include<sstream>
#include<ctime>
#include<cmath>

using namespace std;

int Calculator (int num1, int num2, int option);
//bool isPalindrome(int number);
int ticket_price(int person);

int main() {

	int price;
	price = ticket_price(5);
	cout<<"Ticket price = " << price <<endl;

	int num1 = 2, num2 = 2;
	int option = 1;
	int result = Calculator(num1, num2, option);
	cout <<"The value of result is " << result <<endl;
	return 0;
}


