/*
Daniel Gonos
CIS 17A (48969)
Assignment 5.11 (Population)
This is a program that takes a users input of population and rate of increase per day which it loops to show the increase in population by day.
*/

#include <iostream>

using namespace std; //Used for Cin and Cout

//main body that contains all of the functions of the program
int main(){
    int origin;//holds the value of the original starting population
    float increas;//holds the value for the rate of increase entered in
    int days;//holds value for the number of days entered in
    int x;//used for loop (loops number of times as days that where entered in)
    float convert;//hold the decimal value for the rate of increase
    x = 0;//used for loop (loops number of times as days that where entered in)
    cout << "This program will show you how quickly organisms can grow in population \n";//tells user what program does
    cout << "Please enter in the starting population of the organisms (no less than two) \n";//asks user to enter in starting population
    cin >> origin;//user inputs population
    if (origin < 2){
        cout <<"Sorry this is less than the allowed number of starting organisms";//makes sure that input is within allowed constraints 
    }
    else {
    cout << "Enter in the rate at which you want the organisms to grow each day (no less than 1) \n";//asks user to input rate of increase for population
    cin >> increas;//user inputs rate of increase
    convert = increas / 100 + 1;//converts inputed number to make sure that it is not going to make population smaller 
    if (increas < 1){
        cout << "Sorry the rate is not allowed to be less than 1";//checks to make sure that inputed number is within constraints
    }
    else {
    cout << "Enter the number of days that you want to see the change in growth of the population (no less than 1 day) \n";//tell user to input days of population increase
    cin >> days;//user inputs number of days
    if (days < 1){
        cout << "Sorry the number of days cannot be less than 1";//make sure that inputed integer is within constraints                  
    }
    //loop function that calculated increasing population based off of user inputed variables, loop ends when the number of days inputed has been reached
    else {
        while(x < days){
            cout << origin << endl;
            origin = convert * origin;
                  
            x++;
        }  
    }
    }
    }
    
    
    return 0;
}


