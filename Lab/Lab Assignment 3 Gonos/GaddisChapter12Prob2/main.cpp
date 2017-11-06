/*
Daniel Gonos
CIS 17A (48969)
Assignment 12.2 (File Display Program)
This is a program that opens up a txt file and displays the first 15 lines of text it will wait for the user to hit enter before displaying the next 15
*/



#include <fstream>//used for file input and ouput
#include <iostream>//used for cin and cout

using namespace std;

/*
 * 
 */
int main() {
    fstream data;//name of fstream data type
    string input;//string to hold the text that is read in
    
    data.open("data.txt", ios::in);//opens the data file for input
    if (data.fail()){//checks to see whether the data file was opened or not
        cout << " The file failed to open"  << endl;
    }
    else
    {
    int counter = 0;//int counter used to store a count on how many lines are displayed as program loops through lines
     
    
     while(data)//performs one more loop to get a count on the total number of lines in the file
        {
            
            while(counter < 15)//loops through the txt file and displays 15 text lines in the output
        {
            cout << input << endl;
            getline(data, input);
            counter++;
            
        }
            
            cin.get();//added this to invoke pause after one cycle of 15 loops
            counter = 0;
        }
   
    }
    data.close();//closes the txt file
    return 0;
}


