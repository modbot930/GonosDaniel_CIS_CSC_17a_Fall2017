/*
Daniel Gonos
CIS 17A (48969)
Assignment 11.9 (Speakers’ Bureau)
This is a program that uses a struct that houses the data that will be gathered by a user on 10 speakers. Once the data 
is inputed user will have option to edit or display the inputed data

*/



#include <iostream>//used for cin and cout
#include <string>//used for getline function

using namespace std;
//struct that houses all of the data types that will be used for each speaker
struct speaker{
    string name;
    int number;
    string topic;
    float fee;
};

//main body of program
int main() {
    const int SIZE = 10;//constant int of 10 that will be used for the array that will hold the 10 structs
    speaker person[SIZE];//array created of struct person
    for (int i=0;i<SIZE;i++){//program loops to have user input all of the data required for each speaker
        cout <<"Enter in the name of speaker" << i +1 << endl;
        cin >> speaker[i].name;
        cout <<"Enter in the phone number of the speaker" << endl;
        cin >> speaker[i].number;
        cout <<"Enter in the topic the speaker will be speaking on" << endl;
        getline(cin , speaker[i].topic , '\n');
        cout << "Enter in the fee for the speaker" << endl;
        cin >> speaker[i].fee;
    }
    int x;//created int that will be used to take in user input for the follow switch statement
    cout <<"What would you like to do now?" << endl;
    cout <<"To edit a speaker type 1" << endl;
    cout <<"To display all data entered on speakers type 2" << endl;
    cout <<"To exit program enter in anything else" << endl;
    cin >> x;
    
    switch (x){//based off the previous input the switch will either display, edit or exit program
        case 1:
            cout<<"Which speaker would you like to edit? " << endl;
            cout<<"Enter in the speaker's position in list" << endl;
            cout<<"Must be between 1-10" <<endl;
            int select;
            cin >> select;
            cout <<"Enter in the name of speaker" << endl;
            cin >> speaker[select].name;
            cout <<"Enter in the phone number of the speaker" << endl;
            cin >> speaker[select].number;
            cout <<"Enter in the topic the speaker will be speaking on" << endl;
            getline(cin , speaker[select].topic , '\n');
            cout << "Enter in the fee for the speaker" << endl;
            cin >> speaker[select].fee;
            break;
        case 2:
            for(int i = 0;i <SIZE;i++){
            cout << "Speaker name: " << speaker[i].name << endl;
            cout << "Phone number: " << speaker[i].number << endl;
            cout << "Topic: " << speaker[i].topic << endl;      
            cout << "Fee: " << speaker[i].fee << endl;
            }
            break;
        default:
                    
        cout << "Goodbye";             
    }
    
    
    
    
    return 0;
}


