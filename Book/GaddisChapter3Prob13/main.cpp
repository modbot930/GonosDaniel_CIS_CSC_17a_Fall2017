/*
Daniel Gonos
CIS 17A (48969)
Assignment 3.13 (Money Conversion USD to Yen)
This is a program that converts the inputed amount of USD to the equivalent in Yen as well as Euro
*/

#include <iostream>
#include <iomanip> //Needed to be included to allow me to call on the fixed and set precision functions
using namespace std; //Used for Cin and Cout
int dollar; //Amount used to store the dollar amount that is entered in by user (whole number)
float YEN_PER_DOLLAR; // stores the formula that will be used to convert from USD to Yen
float EUROS_PER_DOLLAR; // stores the formula that will be used to convert from USD to Euros


//body of main function that will convert from usd to yen and euro
int main(){

cout << "Please enter the amount in USD that you would like converted to Yen and Euros" << endl; //asks user to input usd amount to have it converted    
cin >> dollar; // program waits for amount in usd to be entered in
YEN_PER_DOLLAR = 109.47 * dollar; // formula to convert from usd to yen
EUROS_PER_DOLLAR = 0.84 * dollar; // formula to convert from usd to euros 
cout << "This is the amount in Yen: \n" << fixed << setprecision(2) << YEN_PER_DOLLAR << endl; //outputs the dollar amount converted into Yen
cout << "This is the amount in Euro: \n" << fixed << setprecision(2) << EUROS_PER_DOLLAR; //outputs the dollar amount converted into Yen
    return 0;
}

