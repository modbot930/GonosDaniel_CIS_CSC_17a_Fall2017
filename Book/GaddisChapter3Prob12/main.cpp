/*
Daniel Gonos
CIS 17A (48969)
Assignment 3.12 (Temperature conversion)
This is a program that converts the inputed temperature from Celsius to Fahrenheit
*/

#include <iostream>
using namespace std;
float Far; //declared a float for the equation that will be used to convert Celsius to Fahrenheit 
float Cel; //float to hold the Celsius temperature that is inputed by user

//the body of our program takes whole number or decimal number temperature in Cesius which it then converts and outputs into Fahrenheit  
int main(){
    cout << "Insert a temperature in Celsius you want converted to Fahrenheit" << endl; //asks user to input temperature to be converted
    cin >> Cel; //user inputs temp in Celsius
    Far = Cel * 9.0/5.0 + 32.0; //formula that converts the temperature
    cout << "The temperature in Fahrenheit is "<< Far << endl; //outputs final converted temperature value to user
	
	
	return 0;
}

