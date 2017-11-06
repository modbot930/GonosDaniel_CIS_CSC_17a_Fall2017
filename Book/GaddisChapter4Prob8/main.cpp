/*
Daniel Gonos
CIS 17A (48969)
Assignment 4.8 (Color Mixer)
This is a program that asks the user to enter in two primary colors to ouput the secondary color it makes. 
*/

#include <iostream>
using namespace std; //Used for Cin and Cout
string color1; //string for the first color
string color2; //string for the second color

//main body that contains all of the functions of the program
int main(){
    cout << "This program will tell you what color you will get when you mix colors \n";//tells user what the program does
    cout << "Please enter in red, blue, or yellow \n";//gives the user instruction
    cin >> color1;//user enters in first color
    cout << "Now enter in a second color you would like to mix with the first color you chose \n";//asks user to enter in second color
    cout << "It must be red, blue, or yellow (Do not choose the color you chose already \n";//more instructions for the user
    cin >> color2;//user enters in second color
    
    //runs checks to add the two strings and output the color that is created
    if (color1 == "red" && color2 == "blue"){
        
            cout << "The color you get is purple";
    }
    else if (color1 == "blue" && color2 == "red"){
        
            cout << "The color you get is purple";
    }   
    else if (color1 == "red" && color2 == "yellow"){
        
            cout << "The color you get is orange";
    }
    else if (color1 == "yellow" && color2 == "red"){
        
            cout << "The color you get is orange";
    }   
    else if (color1 == "blue" && color2 == "yellow"){
        
            cout << "The color you get is green";
    }
    else if (color1 == "yellow" && color2 == "blue"){
        
            cout << "The color you get is green";
    }   
    else {
        cout << "This is not an allowed color combination please try again";//if something other than an allowed color combination is entered it displays this error
    }
    return 0;
}


