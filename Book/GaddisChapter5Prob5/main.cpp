/*
Daniel Gonos
CIS 17A (48969)
Assignment 5.5 (Membership Fee Increase)
This is a program that will calculated a country clubs fee increase over the next 6 years 
*/

#include <iostream>//used for cin & cout

using namespace std;//used for cin & cout (to be able to call them without std)


int main() {
    int base = 2500;//hold to value for the initial cost of the country club
    float upcharg = 1.04;//holds the value that will be used to find the new cost of the country club
    int newrate = base * upcharg;//value of the new cost of the country club
    int i = 1;//used for the loop argument
       
    cout << "The cost of the country club is currently $" << base << " yearly \n";//information about the rate
    cout << "The country club will be increasing their fees by 4% each year for the next six years \n";//information about the increase
    while (i < 7){
       cout << "This is how much you will be charged $" << newrate << " for year " << i << endl;//loop that displays the new rates of the country club to the user
       newrate = newrate * upcharg;
       i++;
    }
     return 0;
}

