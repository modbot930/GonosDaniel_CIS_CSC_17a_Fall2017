/*
Daniel Gonos
CIS 17A (48969)
Assignment 9.3 (Drop Lowest Score)
This is a modified program of 9.2. It has a user input test scores to get an average but drops the lowest score. 
*/




#include <cstdlib>
#include <iostream>//alows us to use cin and cout
using namespace std;//used for cin and cout

const int TESTS = 100;

//main body of our program
int main() {
    int *dynamic;//created pointer that will be used to point to an array
    dynamic = new int[TESTS];//pointer is set to an array that has up to 100 const ints
    int user;//user will be used to hold the number of tests the user would like to input

    cout << "How many tests would you like to input? " << endl;//program asks user how many tests they would like to enter
    cin >> user;//user enters in total number of tests
    
    //loop that has user enter in the test scores for the desired number of tests
    for (int i=0; i < user; i++){
        cout << "Enter in test score " << i + 1 << endl;
        cin >> dynamic[i];
        if (dynamic[i] < 0){//if test is not positive it returns an error and exits the program
            cout << "Must be a positive number. Please try again. " << endl;
            return EXIT_SUCCESS;
        }
    }
    
    //sort to arrange the tests from least score to greatest score
    
     for (int i=0; i < user; i++){
         for (int x=i+1;x<user;x++){
             int temp;
             if (dynamic[i]>dynamic[x]){
                 temp = dynamic[i];
                 dynamic[i] = dynamic[x];
                 dynamic[x] = temp;
             }
         }
     }
    
    
    
    //outputs the scores after being organized
    cout << "Here are your scores from lowest to highest" << endl;
    for (int i=0; i < user; i++){
        cout << dynamic[i] << " ";
    }
    //skips the first element of the sorted array to not include the lowest test score
    cout << endl << "Lets drop the lowest" << endl;
    for (int i=1; i < user; i++){
        cout << dynamic[i] << " ";
    }
    //loops to add all of the test scores into the average integer    
    int average = 0;
    cout << endl << "This is the average of all of your test: "; 
    for (int i=1; i < user; i++){
        average += dynamic[i];
    }
    cout << average/(user-1);//calculates the average test score by dividing total by number of tests minus the lowest score that was dropped
    
    //deletes the memory so there is no memory leaks
    delete [] dynamic; 
    
    return 0;
}



