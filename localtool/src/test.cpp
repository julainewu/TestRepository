/*
 * test.cpp
 *
 *  Created on: Apr 17, 2022
 *      Author: green
 */

#include <iostream>

using namespace std;
int add(int num1, int num2);
int sub(int num1, int num2);
int mul(int num1, int num2);
int reverse(int number);
bool isPalindrome(int number);

int Calculator(int num1, int num2, int option)
{
	if (option == 1) {
		return add (num1, num2);
	}
	if (option == 2) {
		return sub(num1, num2);
	}
	// calling mul function within calculator function
	if (option == 3) {
		return mul(num1, num2);
	}
	return 0;
}

int add(int num1, int num2)
{
	return (num1 + num2);
}

int sub(int num1, int num2)
{
	return (num1 - num2);
}

// function for multiplying two number
int mul(int num1, int num2)
{
	return (num1 * num2);
}

bool isPalindrome(int number){

	if (number < 0)
		return false;
	number == reverse(number);
}
int reverse(int number)
{
	int ret = 0;
	while (number != 0){
		ret = ret * 10 + number % 10;
		number = number / 10;
	}
	return ret;

}

int ticket_price(int person){
	int price;
	if (person == 1){
		price = 100;
		return price;
	}
	else {
		person--;
	}
	return ticket_price(person);

}

