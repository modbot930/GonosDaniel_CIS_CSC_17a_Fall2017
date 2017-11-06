/*
Daniel Gonos
CIS 17A (48969)
Assignment 10.4 (Average number of letters)
This is a program that has a user enter enter a sentence and the program will output the average number of letters for the words in the sentence
*/


#include <iostream>//used for cin and cout
#include <string.h>//used for strlen

using namespace std;
//funstion prototypes
void avgltrs(char *ptr, int SIZE);

int main() {//main body of our function
    const int SIZE = 201; 
    char phrase[SIZE];
    char *ptr = phrase;
    
    
   avgltrs(ptr,SIZE);
    
     
    
    return 0;
}

void avgltrs(char *ptr, int SIZE){//function created to calculate the average number of characters in the words of and inputed sentence
     cout << "Enter in a sentence and I will tell you the average characters in the words of your sentence" << endl;//tells user what the program does
    cin.getline(ptr, SIZE);//user inputs sentence
    int words = 0;//words set to zero to hold the total number of words in a sentence
    for (int i =0; ptr[i] != '\0';i++)//loop to calculate total number of words in a sentence
    {
        if(ptr[i]==' ')
            words++;
    }
    int length = strlen(ptr);//created int length set to the number of characters in a cstring
    cout << "This is how many words are in your sentence: " << words + 1 << endl;//outputs the number of words in cstring
    cout << "This is how many characters are in your sentence: " << length << endl;//outputs the number of characters in cstring
    cout << "The average number of letter in each word is: " << length / (words + 1);//outputs the average number of characters in the words of a cstring
    
   
    
}


