/*
Daniel Gonos
CIS 17A (48969)
Assignment 13.1 (Date)
 * This program creates a class called date that is used to output the date in three different formats
*/
#include <cstdlib>//include c standary library
#include <iostream>//include iostream for cin/cout 

using namespace std;

class date//class called date
{
    
    
public://date class has three variables
    int month;//int to hold month
    int day;//int to hold day
    int year;//int to hold year
    
    void style1(int month, int day, int year){//function to display the date in first format
        cout << month << "/" << day << "/" << year << endl;
    }
      
    void style2(int month, int day, int year){//function to display the date in second format
        if (month == 1){
            cout << "January " << day << ", " << year << endl;
        }
        else if (month == 2){
            cout << "February " << day << ", " << year << endl;
        }
        else if (month == 3){
            cout << "March " << day << ", " << year << endl;
        }
        else if (month == 4){
            cout << "April " << day << ", " << year << endl;
        }
        else if (month == 5){
            cout << "May " << day << ", " << year << endl;
        }
        else if (month == 6){
            cout << "June " << day << ", " << year << endl;
        }
        else if (month == 7){
            cout << "July " << day << ", " << year << endl;
        }
        else if (month == 8){
            cout << "August " << day << ", " << year << endl;
        }
        else if (month == 9){
            cout << "September " << day << ", " << year << endl;
        }
        else if (month == 10){
            cout << "October " << day << ", " << year << endl;
        }
        else if (month == 11){
            cout << "November " << day << ", " << year << endl;
        }
        else if (month == 12){
            cout << "December " << day << ", " << year << endl;
        }
        
    }

 void style3(int month, int day, int year){//function to display the date in third format
        if (month == 1){
            cout << day << " January " << year << endl;
        }
        else if (month == 2){
            cout << day << " February " << year << endl;
        }
        else if (month == 3){
            cout << day << " March " << year << endl;
        }
        else if (month == 4){
            cout << day << " April " << year << endl;
        }
        else if (month == 5){
            cout << day << " May " << year << endl;
        }
        else if (month == 6){
            cout << day << " June " << year << endl;
        }
        else if (month == 7){
            cout << day << " July " << year << endl;
        }
        else if (month == 8){
            cout << day << " August " << year << endl;
        }
        else if (month == 9){
            cout << day << " September " << year << endl;
        }
        else if (month == 10){
            cout << day << " October " << year << endl;
        }
        else if (month == 11){
            cout << day << " November " << year << endl;
        }
        else if (month == 12){
            cout << day << " December " << year << endl;
        }
        
    }

}
 ;
 
 


int main() {//main body
    date today;//created object called today
    cout << "This program will have you enter in a date and it will output the date entered into 3 different formats" << endl;//tells user what program will do
    cout <<"Enter in the desired month: (Use numerical values 1-12!)" << endl;//user input
    cin >> today.month;//user inputs month
    while (today.month < 1 || today.month > 12){//month is checked to make sure it is in allowed range, if not it loops until it is
            cout << "This is not a valid month" << endl;
            cout << "Please enter a valid month(1-12)" << endl;
            cin >> today.month;
    };
    cout <<"Enter in the desired day: (Use numerical values 1-31!)" << endl;//user asked to input day
    cin >> today.day;//user inputs day
    while (today.day < 1 || today.day > 31){//check to make sure day is in allowed range if not it loops
            cout << "This is not a valid day" << endl;
            cout << "Please enter a valid day(1-31)" << endl;
            cin >> today.day;
    };
    cout <<"Enter in the desired year: (Use numerical values!)" << endl;//user is asked to enter in the year
    cin >> today.year;//user enters in the year
    cout << "Formating style 1: "; //date outputed in format 1
    today.style1(today.month, today.day, today.year);
    cout << "Formating style 2: "; //date outputed in format 2
    today.style2(today.month, today.day, today.year);
    cout <<"Formating style 3: "; //date outputed in format 3
    today.style3(today.month, today.day, today.year);
    return 0;
}

