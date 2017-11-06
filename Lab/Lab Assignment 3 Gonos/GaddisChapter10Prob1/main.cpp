/*
Daniel Gonos
CIS 17A (48969)
Assignment 10.1 (String Length)
This is a program that has a user enter in a word or phrase which is passed to a function that ouputs the number of characters
*/

#include <iostream>//used for cin/cout
#include <string.h>//used for strlen

using namespace std;
//prototypes
void charcnt(char *ptr, int SIZE);

int main() {//main function body
    const int SIZE = 201; //const int for the Cstring
    char phrase[SIZE];//creation of Cstring
    char *ptr = phrase;//pointer to Cstring
  
    charcnt(phrase, SIZE); //calling of character counting function
    
    return 0;
}

void charcnt(char *ptr, int SIZE){//characted counting function
    cout << "Enter in a word or phrase and I will tell you how many characters there are" << endl;//asks user to enter in word or phrase
    cin.getline(ptr, SIZE);//user inputs word or phrase
    int length = strlen(ptr);//length of word or phrase is assigned to int length
    cout << "The length of your string is " << length << " characters long";//result of the length of the string is outputed to user
}



