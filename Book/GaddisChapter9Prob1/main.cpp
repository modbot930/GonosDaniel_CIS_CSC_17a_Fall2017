/*
Daniel Gonos
CIS 17A (48969)
Assignment 9.1 (Array Allocator)
 * This program creates a dynamic array that is allocated and destroyed. The size is determined by the user.  
*/

#include <iostream>

using namespace std;

int main(){
    int *pointer;
    int user;
    pointer = new int[user];
    cout <<"Today we are going to dynamically allocate and array, I hope you are ready!" << endl;
    cout <<"How many numbers do you want your array to hold?" << endl;
    cin >> user;
    
    for (int i=0;i<user;i++){
        cout << "Enter in number " << i+1 << endl; 
        cin >> pointer[i];
    }
    
    cout <<"Here are the numbers that you entered: "<< endl;
    for(int i=0;i<user;i++){
        cout << pointer[i] << " ";
    }
          
    
    delete [] pointer;
    
    
    return 0;
}

