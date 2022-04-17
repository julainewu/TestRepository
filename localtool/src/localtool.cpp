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

	/*int option;
	option = 1;

	int num1 =10, num2 = 5;

	cout << "The addition result is = " << Calculator (num1, num2, option);*/

	char setOperator;
	float firstNum = 0.00, secondNum = 0.00;
	cout << "Enter your operator: +, -, *, /: \n";
	cin >> setOperator;
	cout <<"Enter your first calculation:  \n";
	cin >> firstNum;
	cout <<" Enter your second calculation:  \n";
	cin >> secondNum;

	switch (setOperator) {
	case '+':
		cout << "The answer is: " << firstNum + secondNum;
		break;
	case '-':
		cout << "The answer is: " << firstNum - secondNum;
		break;
	case '*':
		cout << "The answer is: " << firstNum * secondNum;
		break;
	case '/':
		cout << "The answer is: " << firstNum / secondNum;
		break;

	}

	return 0;
}
