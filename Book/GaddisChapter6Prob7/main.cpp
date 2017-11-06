/*
Daniel Gonos
CIS 17A (48969)
Assignment 6.7 (Celsius Temperature Table)
This is a program that takes a users input of Fahrenheit and converts it to Celsius
*/ 
#include <iostream>
using namespace std;//used to avoid having to type std:: every time for cin/cout


/*this is a function called Celsius that I created, it can convert a temperature entered in from Fahrenheit to Celsius. 
 * it also has a built in loop function that will show you the temp of 0-20 for Fahrenheit to Celsius
 */ 
void celsius() {
    float faren;//float to hold the Fahrenheit value
    float celci;//float to hold the Celsius value
    cout << "This program will convert a temperature from Fahrenheit to Celsius \n";//tells user what program will do
    cout << "Please enter in a temperature that you would like to have converted \n";//asks user to enter in temp to be converted
    cin >> faren;//user inputs temp in Fahrenheit
    celci = (faren - 32) * 5 / 9; // formula that converts Fahrenheit to Celsius
    cout << "The temperature you entered is " << celci << " in Celsius" << endl;//outputs the converted temperature to the user
    faren = 0;//resets Fahrenheit to 0 for the loop table
    //loop table that will display the values of 0-20 Fahrenheit to Celsius
    while (faren <= 20){
        celci = (faren - 32) * 5 / 9;
        cout << "When Fahrenheit is " << faren << " Celsius is " << celci << endl;
        faren++;
    }
    }

int main (){
    celsius();//calls on the Celsius function we made above
    
    
    
    return 0;
}
