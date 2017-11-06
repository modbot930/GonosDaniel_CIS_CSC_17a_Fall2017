/*
Daniel Gonos
CIS 17A (48969)
Assignment 10.2 (Backward String)
This is a program that has a user enter in a word or phrase which is passed to a function that ouputs the string backwards
*/


#include <iostream>//used for cin/cout
#include <string.h>//used for strlen


using namespace std;

//prototypes
void backwrd(char *ptr, int SIZE);

int main() {//body of main function
    const int SIZE = 201; //constant int for the max size of the cstring
    char phrase[SIZE];//creation of cstring
    char *ptr = phrase;//pointer to cstring
    backwrd(ptr, SIZE);//calling of backwards function
    return 0;


}

void backwrd(char *ptr, int SIZE){//backwards function take a char pointer and and int
    cout << "Enter in a word or phrase and I will read it to you backwards" << endl;//asks user to input text and what it will do with the text
    cin.getline(ptr, SIZE);//user inputs text
    cout << "Here is the word you entered backwards: " << endl;
    for(int i = strlen(ptr); i >= 0; i--){//heart of the function that displays the string backwards
        cout << ptr[i];
        
    }
    
    
}


