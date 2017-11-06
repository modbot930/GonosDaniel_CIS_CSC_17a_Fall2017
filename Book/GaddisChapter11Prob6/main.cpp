/*
Daniel Gonos
CIS 17A (48969)
Assignment 11.6 (Soccer Scores)
This is a program that uses a structure that houses the data for players of a soccer team. 
It holds the players name, number, and points which it then displays in a table format with the total points and highest scoring player.  
*/


#include <iostream>//used to import the cin/cout library

using namespace std;

struct soccer {//struct created to hold the variables that will be used for each soccer player
    string name;//string created for players name
    int number;//int created for players team number
    int points;//int for number of points player scored    
};

int main(){
    const int SIZE = 12;//const int for the size of the structure array
    soccer player[SIZE];//structure array created
    
    cout << "This program helps keep track of a soccer team's players and scores" << endl;//outputs programs purpose
    for (int i=0;i<SIZE;i++){//loop that has user enter in all required player data
        cout <<"Enter the name of player " << i+1 << endl; 
        cin >> player[i].name;
        cout <<"Enter in the player's number " << endl;
        cin >> player[i].number;
        while (player[i].number < 0){
            cout <<"Enter in the player's number " << endl;
            cin >> player[i].number;
        }
        cout <<"Enter in the points scored by the player " << endl;
        cin >> player[i].points;
        while (player[i].points < 0){
            cout <<"Enter in the points scored by the player " << endl;
            cin >> player[i].points;
        }
    }
    
    cout << "Here are the teams info: " << endl;//outputs all of the inputed data in a form of table
    for (int i=0;i<SIZE;i++){
        cout << "Name: " << player[i].name << " Number: " << player[i].number << " Points Scored: " << player[i].points << endl;    
    }
    
    int totpnt = 0;//variable to hold total points scored by team
    for (int i=0;i<SIZE;i++){//loop to add each individual player points to the teams total points
        totpnt += player[i].points;        
    }
    
    for (int i=0;i<SIZE;i++){//bubble sort used to organize the players from highest points scored to lowest along with their name
        int temp;
        string swap;
        for (int j=i+1;j<SIZE;j++){
            if (player[i].points < player[j].points){
            temp = player[i].points;
            swap = player[i].name;
            player[i].points = player[j].points;
            player[i].name = player[j].name;
            player[j].points = temp;
            player[j].name = swap;
            }
            
        }
    }
    
    cout << "The highest scoring player: " << player[0].name << " Points: " << player[0].points << endl;//outputs the highest scoring player and his score
    cout << "The total points scored by the team: " << totpnt << endl;//outputs the total points scored by the team
    
    return 0;
}




