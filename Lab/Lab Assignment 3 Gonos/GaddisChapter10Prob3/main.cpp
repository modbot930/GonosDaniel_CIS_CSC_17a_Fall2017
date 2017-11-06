/*
Daniel Gonos
CIS 17A (48969)
Assignment 10.3 (Word Counter)
This is a program that has a user enter enter a sentence and the program will output the number of words in the sentence
*/


#include <iostream>//library used for cin cout


using namespace std;
//function prototypes
void wrdcntr(char *ptr, int SIZE);

int main() {//main body of program
    const int SIZE = 201; //const int for the size of the cstring
    char phrase[SIZE];//declaration of cstring
    char *ptr = phrase;//pointer to cstring
    wrdcntr(phrase,SIZE);//calling word counter function
    
    return 0;
}


void wrdcntr(char *ptr, int SIZE){//word counter function counts how many words are in a cstring
    cout << "Enter in a sentence and I will tell you how many words there are" << endl;//asks user to enter in a sentence
    cin.getline(ptr, SIZE);//user inputs sentence
    int words = 0;//int words to hold the number of words is set to 0
    for (int i =0; ptr[i] != '\0';i++)//loop that runs and counts how many spaces there are to get the number of words
    {
        if(ptr[i]==' ')
            words++;
    }
    cout << "This is how many words are in your sentence: " << words + 1 << endl;//outputs the result back to the user
}



