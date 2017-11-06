/*
Daniel Gonos
CIS 17A (48969)
Assignment 4.11 (Math Tutor)
This is a program that helps children practice there addition through solving math problems
*/

#include <iostream>
#include <ctime>//needed to use time to make the number generated random/change every time the program was ran
#include <cstdlib>//needed for the random function
using namespace std; //Used for Cin and Cout
int a;//int for first number
int b;//int for second number
int sum;//int for a + b (the answer)
int answer;//used to store users input

//main body that contains all of the functions of the program
int main(){
    srand (time(NULL));//setting up the rand funciton to use the time 
    a = rand()%1000;//making int a random (numbers between 1 and 1000)
    b = rand()%1000;//making int b random (numbers between 1 and 1000)
    cout << "What is " << a << " plus " << b << "? \n";//asks user a randomly generated math problem
    sum = a + b;//sum adds up the two randomly generated numbers
    cin >> answer;//user inputs the answer
    //program checks to see if the sum and the user entered answer match
    if (answer == sum){
        cout << "Very good that is the correct answer!";//result if answer is correct
    }
    else {
        cout << "Sorry that is not correct the answer is " << sum << endl;//if incorrect it will tell the user the correct answer 
        cout << "Keep practicing you will get better!";
    }   
            
    return 0;
}


