/*
Daniel Gonos
CIS 17A (48969)
Assignment 13.3 (car class)
 * This program creates a class called car that stores data about a car and has two functions to increase and decrease the speed of the car
*/

#include <iostream>//used for cin and cout
#include <cstdlib>//used for functions from the standard library

using namespace std;
class car{//class called car is created
private://private variables of car class
    int yearmdl;//will hold year model
    string make;//will hold make of car
    int speed;//int to hold the speed of the car
    
public://public variables and functions of car
    car(int a, string b){//constructor 
        yearmdl = a;
        make = b;
        speed = 0;
    };
    
    int getmdl(){//accessor for car model
        return yearmdl;
    };
    
    string getmake(){//accessor for car make
        return make;
    };
    int getspee(){//accessor for car speed
        return speed;
    };
    int acclrat(int x = 0){//function to increase the speed of the car by 5
        x = x + 5;
        speed += x;
        return speed;
    }
    int brake(int x = 0){//function to decrease the speed of the car by 5
        x = x - 5;
        speed += x;
        return speed;
    }
};

int main(){//main body of program
    car toyota(2014, "Corolla");//object toyota is created
    for (int i = 0; i < 5; i++ )    //loop to increase the speed by calling the accelerate function 5 times
    {
      toyota.acclrat();
      cout << "The speed of your " << toyota.getmdl() << " " << toyota.getmake() << " is " << toyota.getspee() << " MPH"<< endl;
    };
    for (int i = 0; i < 5; i++ )    
    {
      toyota.brake();  //loop to decrease the speed by calling the accelerate function 5 times
      cout << "The speed of your " << toyota.getmdl() << " " << toyota.getmake() << " is " << toyota.getspee() << " MPH"<< endl;
    };
    
  
    
    
    return 0;
};

