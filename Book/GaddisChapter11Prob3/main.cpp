/*
Daniel Gonos
CIS 17A (48969)
Assignment 11.3 (Corporate Sales Data)
This is a program that uses a struct that houses the data that will be gathered by a user on one of four branches of a company. Once the sales data 
is inputed it will add the four quarters of sales together and output the inserted data along with the total and average. 

*/
#include <iostream>//used to input the library for cin and cout

using namespace std;//used to be able to right cin and cout without std::

struct corprt{//structure created to house all of the data types that will be used to gather info from 4 corporate branches
    string name;//string to hold the name of the branch
    float firstsl;//float to hold the first quarter sales
    float scndsl;//float to hold the second quarter sales
    float thrdsl;//float to hold the third quarter sales
    float fourtsl;//float to hold the fourth quarter sales
    float total;//float to hold the total of all quarter sales
    float avg;//float to hold the average of the quarter sales
};
int main() {
    corprt north{//first variable created for north devision using the struct previously created
        "North Devision", 0, 0, 0, 0, 0, 0 //named branch and set the values of all floats to zero         
    };//has user input the sales for each quarter of specified devision. Each input loops until an input that is positive is entered.
    cout << "Please enter in North Devisions first quarter of sales: " << endl;
    cout << "Must be a positive integer " << endl;
    do {cin >> north.firstsl;}
    while (north.firstsl < 0);
    cout << "Please enter in North Devisions second quarter of sales: " << endl;
    cout << "Must be a positive integer " << endl;
    do {cin >> north.scndsl;}
    while (north.scndsl < 0);
    cout << "Please enter in North Devisions third quarter of sales: " << endl;
    cout << "Must be a positive integer " << endl;
    do {cin >> north.thrdsl;}
    while (north.thrdsl < 0);
    cout << "Please enter in North Devisions fourth quarter of sales: " << endl;
    cout << "Must be a positive integer " << endl;
    do {cin >> north.fourtsl;}
    while (north.fourtsl < 0);
    north.total = north.firstsl + north.scndsl + north.thrdsl + north.fourtsl;//calculates and outputs the total sales
    north.avg = north.total/4; //calculates the average of the yearly sales 
    
    corprt east{//first variable created for east devision using the struct previously created
        "East Devision", 0, 0, 0, 0, 0, 0      //named branch and set the values of all floats to zero            
    };//has user input the sales for each quarter of specified devision. Each input loops until an input that is positive is entered.
    cout << "Please enter in East Devisions first quarter of sales: " << endl;
    cout << "Must be a positive integer " << endl;
    do {cin >> east.firstsl;}
    while (east.firstsl < 0);
    cout << "Please enter in East Devisions second quarter of sales: " << endl;
    cout << "Must be a positive integer " << endl;
    do {cin >> east.scndsl;}
    while (east.scndsl < 0);
    cout << "Please enter in East Devisions third quarter of sales: " << endl;
    cout << "Must be a positive integer " << endl;
    do {cin >> east.thrdsl;}
    while (east.thrdsl < 0);
    cout << "Please enter in East Devisions fourth quarter of sales: " << endl;
    cout << "Must be a positive integer " << endl;
    do {cin >> east.fourtsl;}
    while (east.fourtsl < 0);
    east.total = east.firstsl + east.scndsl + east.thrdsl + east.fourtsl;//calculates and outputs the total sales
    east.avg = east.total/4; //calculates the average of the yearly sales 
    
    corprt south{//first variable created for south devision using the struct previously created
        "South Devision", 0, 0, 0, 0, 0, 0     //named branch and set the values of all floats to zero             
    };//has user input the sales for each quarter of specified devision. Each input loops until an input that is positive is entered.
    cout << "Please enter in South Devisions first quarter of sales: " << endl;
    cout << "Must be a positive integer " << endl;
    do {cin >> south.firstsl;}
    while (south.firstsl < 0);
    cout << "Please enter in South Devisions second quarter of sales: " << endl;
    cout << "Must be a positive integer " << endl;
    do {cin >> south.scndsl;}
    while (south.scndsl < 0);
    cout << "Please enter in South Devisions third quarter of sales: " << endl;
    cout << "Must be a positive integer " << endl;
    do {cin >> south.thrdsl;}
    while (south.thrdsl < 0);
    cout << "Please enter in South Devisions fourth quarter of sales: " << endl;
    cout << "Must be a positive integer " << endl;
    do {cin >> south.fourtsl;}
    while (south.fourtsl < 0);
    south.total = south.firstsl + south.scndsl + south.thrdsl + south.fourtsl;//calculates and outputs the total sales
    south.avg = south.total/4; //calculates the average of the yearly sales 
    
     
       corprt west{//first variable created for west devision using the struct previously created
        "West Devision", 0, 0, 0, 0, 0, 0        //named branch and set the values of all floats to zero          
    };//has user input the sales for each quarter of specified devision. Each input loops until an input that is positive is entered.
    cout << "Please enter in West Devisions first quarter of sales: " << endl;
    cout << "Must be a positive integer " << endl;
    do {cin >> west.firstsl;}
    while (west.firstsl < 0);
    cout << "Please enter in West Devisions second quarter of sales: " << endl;
    cout << "Must be a positive integer " << endl;
    do {cin >> west.scndsl;}
    while (west.scndsl < 0);
    cout << "Please enter in West Devisions third quarter of sales: " << endl;
    cout << "Must be a positive integer " << endl;
    do {cin >> west.thrdsl;}
    while (west.thrdsl < 0);
    cout << "Please enter in West Devisions fourth quarter of sales: " << endl;
    cout << "Must be a positive integer " << endl;
    do {cin >> west.fourtsl;}
    while (west.fourtsl < 0);
    west.total = west.firstsl + west.scndsl + west.thrdsl + west.fourtsl;//calculates and outputs the total sales
    west.avg = west.total/4; //calculates the average of the yearly sales 
    
    
    //the section below just neatly outputs all of the data that was gathered above in a broken up easy to ready way.
    cout << "North Division " << endl;
    cout << "First Quarter Sales: " << north.firstsl << endl;
    cout << "Second Quarter Sales: " << north.scndsl << endl;
    cout << "Third Quarter Sales: " << north.thrdsl << endl;
    cout << "Fourth Quarter Sales: " << north.fourtsl << endl;
    cout << "Total Sales For Year: " << north.total << endl;
    cout << "Average Quarterly Sales: " << north.avg << endl;
    
    cout << "East Division " << endl;
    cout << "First Quarter Sales: " << east.firstsl << endl;
    cout << "Second Quarter Sales: " << east.scndsl << endl;
    cout << "Third Quarter Sales: " << east.thrdsl << endl;
    cout << "Fourth Quarter Sales: " << east.fourtsl << endl;
    cout << "Total Sales For Year: " << east.total << endl;
    cout << "Average Quarterly Sales: " << east.avg << endl;
    
     cout << "South Division " << endl;
    cout << "First Quarter Sales: " << south.firstsl << endl;
    cout << "Second Quarter Sales: " << south.scndsl << endl;
    cout << "Third Quarter Sales: " << south.thrdsl << endl;
    cout << "Fourth Quarter Sales: " << south.fourtsl << endl;
    cout << "Total Sales For Year: " << south.total << endl;
    cout << "Average Quarterly Sales: " << south.avg << endl;
    
     cout << "West Division " << endl;
    cout << "First Quarter Sales: " << west.firstsl << endl;
    cout << "Second Quarter Sales: " << west.scndsl << endl;
    cout << "Third Quarter Sales: " << west.thrdsl << endl;
    cout << "Fourth Quarter Sales: " << west.fourtsl << endl;
    cout << "Total Sales For Year: " << west.total << endl;
    cout << "Average Quarterly Sales: " << west.avg << endl;
    return 0;
}



