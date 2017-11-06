/*
Daniel Gonos
CIS 17A (48969)
Assignment 9.4 (Test Scores #2)
This program is a modified version of program 9.2. This program has user input student names and test score. 
 It will sort them from lowest to highest score and output the results along with the name of the student*/




#include <cstdlib>
#include <iostream>//alows us to use cin and cout
using namespace std;//used for cin and cout

const int TESTS = 100;

//main body of our program
int main() {
    int *dynamic;//created pointer that will be used to point to an array
    string *names;//created pointer that will be used to point to an array
    names = new string[TESTS];//pointer is set to an string array that has up to 100 const ints
    dynamic = new int[TESTS];//pointer is set to an int array that has up to 100 const ints
    int user;//user will be used to hold the number of tests the user would like to input
    cout <<"This program will allow you to enter in student names and their test scores" << endl;
    cout << "How many students are there? " << endl;//program asks user how many students/scores they would like to enter
    cin >> user;//user enters in total number of students
    
    //loop that has user enter in both the students names and test scores for the desired number.
    for (int i=0; i < user; i++){
        cout << "Enter in student's name " << endl;
        cin >> names[i];
        cout << "Enter in " << names[i] << "'s test score " << endl;
        cin >> dynamic[i];
        if (dynamic[i] < 0){//if test is not positive it returns an error and exits the program
            cout << "Must be a positive number. Please try again. " << endl;
            return EXIT_SUCCESS;
        }
    }
    
    //sort to arrange the tests from least score to greatest score
    //sort also sorts the names of the test taker with their score
     for (int i=0; i < user; i++){
         for (int x=i+1;x<user;x++){
             int temp;
             string temp2;
             if (dynamic[i]>dynamic[x]){
                 temp = dynamic[i];
                 dynamic[i] = dynamic[x];
                 dynamic[x] = temp;
                 temp2 = names[i];
                 names[i] = names[x];
                 names[x] = temp2;
                         
             }
         }
     }
    
    
    
    //outputs the students and scores after being organized
    cout << "Here are the scores from lowest to highest" << endl;
    for (int i=0; i < user; i++){
        cout << names[i] << " " << dynamic[i] << endl;
    }
   
    //loops to add all of the test scores into the average integer    
    int average = 0;
    cout << endl << "This is the class average of all the tests: "; 
    for (int i=0; i < user; i++){
        average += dynamic[i];
    }
    cout << average/(user);//calculates the average test score by dividing total by number of tests 
    
    //deletes the memory so there is no memory leaks
    delete [] dynamic; 
    delete [] names; 
    return 0;
}


