/*
Daniel Gonos
CIS 17A (48969)
Assignment 11.4 (Weather Statistics)
This is a program that uses a structure that houses the data for monthly weather. There is an array holding 12 different 
variables based off the structure that will have data inputed by the user which will then be calculated and displayed accordingly 
*/
#include <iostream>//used to input the library for cin and cout

using namespace std;//used to be able to right cin and cout without std::

struct weather{//structure created for weather that holds all of the data types we will be using
    string name;//will be used to store name of the month
    float total;//will be used to store the total rainfall each month
    float high;//will be used to store the high temperature of the month
    float low;//will be used to store the low temperature of the month
    float average;//will be used to store the average temperature of the month
};

//main body of our program
int main() {
    
    weather *array = new weather[12];//created pointer that points to a new array
    for(int i=0;i<12;i++){//loop that has user enter in all data required to fill the array of structures
      cout << "Please enter in the month" << endl;
      cin >> array[i].name;
      cout << "What was the total rainfall for the month? " << endl;
      cin >> array[i].total;
      cout << "What was the highest temperature for the month? " << endl;
      cout << "Temp must be between -100 and 140 " << endl;
      cin >> array[i].high;
      cout << "What was the lowest temperature for the month? " << endl;
      cout << "Temp must be between -100 and 140 " << endl;
      cin >> array[i].low;
      array[i].average = (array[i].high + array[i].low) / 2;         //calculates the average temperature based off the inputs of high and low for each month
    }
    //loop that finds the total rainfall for the year and store into an int. This int will also be used to display the monthly average 
    int totrain = 0;
    for(int i=0;i<12;i++){
    totrain += array[i].total;   
    }
    
    int rnyravg = 0;
    for(int i=0;i<12;i++){
    totrain += array[i].average;   
    }
    
     //sort function to sort the highest temps of the month in order from greatest to least
    for(int i=0;i<12;i++){
        for (int j=i+1;j<=12;j++){
        int temp;
        
        if (array[i].high<array[j].high){
            temp = array[i].high;
            array[i].high = array[j].high;
            array[j].high = temp;
        }
        }
    }
    for(int i=0;i<12;i++){
        cout << array[i].high << " ";
    }
    
    //sort function to sort the lowest temps of the month in order from least to greatest
    for(int i=0;i<12;i++){
        for (int j=i+1;j<=12;j++){
        int temp;
        if (array[i].low>array[j].low){
            temp = array[i].low;
            array[i].low = array[j].low;
            array[j].low = temp;
        }
        }
    }
    for(int i=0;i<12;i++){
        cout << array[i].low << " ";
    }
    //loop that is used to add all of the monthly average temperatures together
    int yearavg = 0;
    for(int i=0;i<12;i++){
        yearavg += array[i].average;
    }
    
    
    //displays all the data user wants to see
    cout << " This is the average monthly rainfall: " << totrain/12 <<endl;
    cout << " This is the total yearly rainfall: " << totrain <<endl;
    cout << " This is the lowest temperature of the year" << array[0].low << endl;
    cout << " This is the highest temperature of the year" << array[0].high << endl;
    cout << " This is the highest temperature of the year" << rnyravg/12 << endl;
    return 0;
}






