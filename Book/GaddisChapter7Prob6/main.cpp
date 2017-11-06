/*
Daniel Gonos
CIS 17A (48969)
Assignment 7.6 (Rain Or Shine)
This is a program that reads from a an external .txt file that prints it to an array
*/


#include <iostream>//used for input and output
#include <fstream>//used to read from file

using namespace std;

int main() {
    int days = 30;//int for number of days
    int months = 3;//int for number of months
    char weather[days][months];//2d char array for days and months
    ifstream file;//used to declare name of file i will access
    
    
    file.open("condit.txt");//opening th efile
    if(file.fail()){
        cout <<"Your file did not work";//checks to see if file opened if not return error
        //loop to read data from file and assign to elements of array
    }
    else {
    for (int x = 0; x < days; x++){
        file>>weather[days];
        cout << weather[days]<<" ";
    for (int x = 0; x < months; x++){
        file>>weather[months];
        cout << weather[months]<<" ";
    }         
    }    
    }   
            
    
    return 0;
}