/*
Daniel Gonos
CIS 17A (48969)
Assignment 12.1 (File Head Program)
This is a program that opens up a txt file and displays the first 10 lines of text it will tell the user if that is the whole file or if there are more lines of data
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
        getline(data, input);//gets line of data
    int counter = 0;//int counter used to store a count on how many lines are displayed as program loops through lines
    while(counter < 10)//loops through the txt file and displays the text in the output
        {
            cout << input << endl;
            getline(data, input);
            counter++;
            
        }
    counter = 0;//reset counter
     while(data)//performs one more loop to get a count on the total number of lines in the file
        {
            
            getline(data, input);
            counter++;
            
        }
    if (counter < 10){//if there are less than 10 lines it displays
        cout << "The entire file has been show " << endl;
        
    }
    else
        cout << "This is the first 10 lines of the file " << endl;//if there are over 10 lines it displays
    
    data.close();//closes file
    return 0;
}


