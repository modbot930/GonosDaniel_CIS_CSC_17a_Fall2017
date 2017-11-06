/*
Daniel Gonos
CIS 17A (48969)
Assignment 4.10 (Days In A Month)
This is a program that is used to output the number of days in a user entered month/year. 
*/

#include <iostream>
using namespace std; //Used for Cin and Cout
int month; //will hold value for the given month entered by the user
int year; //will hold value for the given year entered by the user
int days; //will calculate 

//main body that contains all of the functions of the program
int main(){
    cout << "Hello, I will tell you how many days are in any month of any year for you!2 \n";//outputs purpose of program to user
    cout << "Please enter in the month you want to know the number of days in \n";//asks user to input a month to find out the number of days in it
    cout << "Use number 1 for January 2 for February etc. through 12 for December \n" << endl;//explains the format on how to enter in the month
    cin >> month;//user enters in month
    cout << "Now enter in the year that you want for the desired month \n";//asks user to enter the year they want to find out the days of month for 
    cin >> year;//user enters year
    //each number 1-12 decides what will be output with the exception of 2 (it has more checks)
    if (month == 1){
    
        cout << "There are 31 days in that month of that year"; 
    }
    //february has the possibility of having an extra day depending on if it is a leap year it has to pass a few checks to decided if it is or is not
    if (month == 2){
        if (year % 100 == 0){
            if (year % 400 == 0){
                cout << "It is a leap year! There are 29 days in that month of that year";
            }
        }
        else if (year % 4 == 0){
            cout << "It is a leap year! There are 29 days in that month of that year";
        }   
        else {
            cout << "There are 28 days in that month of that year";
        }
    }
    
    else if (month == 3){
    
        cout << "There are 31 days in that month of that year"; 
    }
    else if (month == 4){
    
        cout << "There are 30 days in that month of that year"; 
    }
    else if (month == 5){
    
        cout << "There are 31 days in that month of that year"; 
    }
    else if (month == 6){
    
        cout << "There are 30 days in that month of that year"; 
    }
    else if (month == 7){
    
        cout << "There are 31 days in that month of that year"; 
    }
    else if (month == 8){
    
        cout << "There are 31 days in that month of that year"; 
    }
    else if (month == 9){
    
        cout << "There are 30 days in that month of that year"; 
    }
    else if (month == 10){
    
        cout << "There are 31 days in that month of that year"; 
    }
    else if (month == 11){
    
        cout << "There are 30 days in that month of that year"; 
    }
    else if (month == 12){
    
        cout << "There are 31 days in that month of that year"; 
    }
    else {
        cout << "Sorry I do not understand please make sure to enter in the month in the correct formating"; //added this in case someone enters in something that is not allowed
    }
   
    return 0;
}


