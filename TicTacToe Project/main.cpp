

#include <iostream>
#include <cctype>
#include <cstdlib>
#include <fstream>
#include <ctime>
#define nullptr nullptr
#include "Pinfo.h"


using namespace std;



char board[3][3] = {'1','2','3','4','5','6','7','8','9'} ;//2d array that will created a 3x3 grid for out tic tac toe 
char cplayer = 'X'; //default player that is set to X
char p1; // player 1
char p2; // player 2
int xwins=0;//keeps count of x wins for the games with 2 of 3 or 3 of 5
int owins=0;//keeps count of x wins for the games with 2 of 3 or 3 of 5  
ofstream history;//variable history will be used to keep track of past games


//function prototypes 
char winchek();
void pswap();
void turn();
void display();
void reset();
void plyrinf(Pinfo *ptr);
int wager(int x, Pinfo *ptr);


//template to compare two values, used to see which player has a larger wallet ballance after each wager match
template <class T>
T walcheck(T a, T b){
    if(a>b){
        cout << "Player 1 has a bigger wallet by: " << a-b << endl;
    }
    if(b>a){
        cout << "Player 2 has a bigger wallet by: " << b-a << endl;
    }
    };
       
    

int main() {
    
    
    //opens game history txt file if it doesn't exist it will create a new one
    history.open("game_history.txt", fstream::app);//creates a txt file that will store wins and losses history
    
    
    
    Pinfo *ptr = nullptr;//ptr of struct 
    ptr = new Pinfo[2];//memory allocated for a struct array
    int count = 0;//count used to keep track of loop number
    int gameopt;//user option to decide which game mode to play (ex. 1 game, 2 of 3, or 3 of 5)
    char betting;//asks user if the match will be a wager match or not
    int bet; //tells wager function whether it is a tier 1, 2, or 3 bet
    
    
    //ctime function that allows me to output current date and time to txt file of each match
    time_t now;
    struct tm nowLocal;
    now=time(NULL);
    nowLocal=*localtime(&now);
    
    
    
    //welcomes user to game
    cout << "Welcome To My TicTacToe Game" << endl;//welcome message
    
    //user asked for input 
    cout << "Player 1 Enter Name:" << endl;
    getline(cin, ptr[0].name);
    cout << "Player 1 Enter Age:" << endl;
    cin >> ptr[0].age;
    //makes sure that the input is an numeric value will loop until valid input is entered
    while(cin.fail() == true){
        cin.clear();
        cin.ignore(10000, '\n');
        cout << "Not a valid age! " << endl;
        cout << "Must be an integer!" << endl;
        cout << "Player 1 Enter Age:" << endl;
        cin >> ptr[0].age;
    }
    //asks user if instructions are needed 
    cout << "Player One Needs Instructions?" << endl;
    cout << "y for yes & n for no" << endl;
    cin >> ptr[0].exper;
    // needed to fix error with cin buffer
    cin.ignore();
    
     //second user asked for input
    cout << "Welcome To My TicTacToe Game" << endl;
    cout << "Player 2 Enter Name:" << endl;
    getline(cin, ptr[1].name);
    cout << "Player 2 Enter Age:" << endl;
    cin >> ptr[1].age;
    //makes sure that the input is an numeric value will loop until valid input is entered
    while(cin.fail() == true){
        cin.clear();
        cin.ignore(10000, '\n');
        cout << "Not a valid age! " << endl;
        cout << "Must be an integer!" << endl;
        cout << "Player 2 Enter Age:" << endl;
        cin >> ptr[1].age;}
    //asks second player if instructions are needed 
    cout << "Player One Needs Instructions?" << endl;
    cout << "y for yes & n for no" << endl;
    cin >> ptr[1].exper;
    
    
    //user has options for different game modes (single,2 of 3,3 of 5)
    cout << "How many games will you be playing?" << endl;
    cout << "1 = 1 game" << endl;
    cout << "2 = best two out of three" << endl;
    cout << "3 = best three out of five" << endl;
    //user enters in which game mode they will be playing
    cin >> gameopt;
    cout << endl << "Good Luck!" << endl;
    
    //if either user enters yes for needing instructions then the instructions will be displayed. 
    if((ptr[1].exper=='y') || (ptr[0].exper=='y')){
        cout <<"**************************************************************************************"<< endl;
        cout <<"Tic Tac Toe is a fairly simple game. One player is X and one player is O. " << endl;
        cout <<"You take turns by picking a spot on the 3x3 playing field and cannot pick " << endl;
        cout <<"a spot that your opponent has already selected. The goal is to get three X's " << endl;
        cout <<"or three O's in a row (depending on which one you are)." << endl;
        cout <<"You can line up three in a row in any direction (vertical, horizontal & diagonal)" << endl;
        cout <<"Example wins:"<< endl;
        cout <<"X X X   X 2 3   X 2 3"<< endl;
        cout <<"4 5 6   X 5 6   4 X 6"<< endl;
        cout <<"7 8 9   X 8 9   7 8 X"<< endl;
        cout <<"Good Luck!"<< endl;
        cout <<"**************************************************************************************"<< endl;
    };
    
    //outputs player info: name and balance
   plyrinf(ptr);
   int betrtrn;//used to hold amount that user decides to wager on match
    char another;//added to hold y or n giving players that only play one game an option to play another
    
    //game mode type one that executes if selection one is chosen, single game
    if(gameopt == 1){
        //user asked whether it will be a wager match 
        cout <<"Will you be waging on this match? y/n" << endl;
        cin >> betting;
        if(betting == 'y'){
            bet = 1;
        betrtrn = wager(bet, ptr);
        }
     
        //bool loops until a break meaning that someone has one match
    bool active = true;//bool to keep loop running until it hits a break
    while(active=1){
        count++;//adds one to count as it loops 
        display();//runs display function that shows current board layout
        turn();//turn function that has user input selection
        
        // if win function decides x one program will execute the following
        if(winchek()=='X'){//checks win function to see that it has returned an 'X'
            cout << "Player 1 Wins! (X)" << endl;
            cout << "Congratulations " << ptr[0].name << "!" << endl;
            history << ptr[0].name << " Won A Game Against " << ptr[1].name << " On " << nowLocal.tm_mon+1 << 
            "/" << nowLocal.tm_mday << "/" << nowLocal.tm_year+1900 << " at " << nowLocal.tm_hour << ":" << nowLocal.tm_min << "\r\n";
            xwins++;
            ptr[0].wallet = ptr[0].wallet + betrtrn;
            ptr[1].wallet = ptr[1].wallet - betrtrn;
            cout << "X Wins:" << xwins << endl;
            cout << "O Wins:" << owins << endl;
            plyrinf(ptr);
            walcheck(ptr[0].wallet, ptr[1].wallet);
            
            //user asks if they would like to play another game
            cout << "Do You Want To Play Another? " << endl;
            cout << "y = yes" << endl;
            cout << "n = no" << endl;
            cin >> another;
            
            //if user plays it will reset the board along with the round count/also switches player that will start the game
            if((another == 'y') || (another == 'Y')){
            reset();
            count = 0;
            cout << "O Starts This Game" << endl;  }  
            
            //if user decides not to play another then the loop will break and program will end
            if((another == 'n') || (another == 'N'))
            break;//program ends on winner
        }
        
        // if win function decides o one program will execute the following
        else if(winchek()=='O'){//checks win function to see that it has returned an 'O'
            cout << "Player 2 Wins! (O)" << endl;
            cout << "Congratulations " << ptr[1].name << "!" << endl;
            history << ptr[1].name << " Won A Game Against " << ptr[0].name << " On " << nowLocal.tm_mon+1 << 
            "/" << nowLocal.tm_mday << "/" << nowLocal.tm_year+1900 << " at " << nowLocal.tm_hour << ":" << nowLocal.tm_min << "\r\n";
            owins++;
            ptr[0].wallet = ptr[0].wallet - betrtrn;
            ptr[1].wallet = ptr[1].wallet + betrtrn;
            cout << "X Wins:" << xwins << endl;
            cout << "O Wins:" << owins << endl;
            plyrinf(ptr);
            walcheck(ptr[0].wallet, ptr[1].wallet);
            cout << "Do You Want To Play Another? " << endl;
            cout << "y = yes" << endl;
            cout << "n = no" << endl;
            cin >> another;
            
            //if user plays it will reset the board along with the round count/also switches player that will start the game
            if((another == 'y') || (another == 'Y')){
            reset();
            count = 0;
            cout << "X Starts This Game" << endl;  }  
            
            //if user decides not to play another then the loop will break and program will end
            if((another == 'n') || (another == 'N'))
            break;//program ends on winner
            
        }
        else if(winchek()=='C' && count==9){//checks win function to see that it has returned an 'C' and that it has looped 9 times
            cout << "It Was A Draw!" << endl;
            history << ptr[0].name << " Tied A Game Against " << ptr[1].name << " On " << nowLocal.tm_mon+1 << 
            "/" << nowLocal.tm_mday << "/" << nowLocal.tm_year+1900 << " at " << nowLocal.tm_hour << ":" << nowLocal.tm_min << "\r\n";
            
            cout << "X Wins:" << xwins << endl;
            cout << "O Wins:" << owins << endl;
            plyrinf(ptr);
            cout << "Do You Want To Play Another? " << endl;
            cout << "y = yes" << endl;
            cout << "n = no" << endl;
            cin >> another;
            
            //if user plays it will reset the board along with the round count/also switches player that will start the game
            if((another == 'y') || (another == 'Y')){
            reset();
            count = 0;
            cout << "X Starts This Game" << endl;  }  
            
            //if user decides not to play another then the loop will break and program will end
            if((another == 'n') || (another == 'N'))
            break;//program ends on winner
        }
            
        pswap();//at the end of each cycle the player char swaps
        
        
    };
    }
    
    //executes if user choses game mode 2 (2 of 3)
    if(gameopt == 2){
        
        //user asked whether it will be a wager match 
         cout <<"Will you be waging on this match? y/n" << endl;
        cin >> betting;
        if(betting == 'y'){
            bet = 2;
        betrtrn = wager(bet, ptr);
        }
        //bool loops until a break meaning that someone has one match
    bool active = true;//bool to keep loop running until it hits a break      
    while(active = 1){
        count++;//adds one to count as it loops 
        display();//runs display function that shows current board layout
        turn();//turn function that has user input selection
        
        // if win function decides x one program will execute the following
        if(winchek()=='X'){//checks win function to see that it has returned an 'X'
            cout << "Player 1 Wins! (X)" << endl;
            cout << "Congratulations " << ptr[0].name << "!" << endl;
            history << ptr[0].name << " Won A Game Against " << ptr[1].name << " On " << nowLocal.tm_mon+1 << 
            "/" << nowLocal.tm_mday << "/" << nowLocal.tm_year+1900 << " at " << nowLocal.tm_hour << ":" << nowLocal.tm_min << "\r\n";
            xwins++;
            reset();
            count = 0;
            cout << "X Wins:" << xwins << endl;
            cout << "O Wins:" << owins << endl;
            cout << "O Starts This Game" << endl;
            
            //checks to see if x has one two games if so wallet will be updated if it was a wager match then loop will break
            if(xwins==2){
                ptr[0].wallet = ptr[0].wallet + betrtrn;
                ptr[1].wallet = ptr[1].wallet - betrtrn;
                plyrinf(ptr);
                walcheck(ptr[0].wallet, ptr[1].wallet);
                break;
            }
        }
        
        // if win function decides o one program will execute the following
        else if(winchek()=='O'){//checks win function to see that it has returned an 'O'
            cout << "Player 2 Wins! (O)" << endl;
            cout << "Congratulations " << ptr[1].name << "!" << endl;
            history << ptr[1].name << " Won A Game Against " << ptr[0].name << " On " << nowLocal.tm_mon+1 << 
            "/" << nowLocal.tm_mday << "/" << nowLocal.tm_year+1900 << " at " << nowLocal.tm_hour << ":" << nowLocal.tm_min << "\r\n";
            owins++;
            reset();
            count = 0;
            cout << "X Wins:" << xwins << endl;
            cout << "O Wins:" << owins << endl;
            cout << "X Starts This Game" << endl;
            
            //checks to see if o has one two games if so wallet will be updated if it was a wager match then loop will break
            if(owins==2){
                ptr[0].wallet = ptr[0].wallet - betrtrn;
                ptr[1].wallet = ptr[1].wallet + betrtrn;
                plyrinf(ptr);
                walcheck(ptr[0].wallet, ptr[1].wallet);
                break;
            }
        }
        //if it is a draw noone will receive points and the board will reset
        else if(winchek()=='C' && count==9){//checks win function to see that it has returned an 'C' and that it has looped 9 times
            cout << "It Was A Draw!" << endl;
            history << ptr[0].name << " Tied A Game Against " << ptr[1].name << " On " << nowLocal.tm_mon+1 << 
            "/" << nowLocal.tm_mday << "/" << nowLocal.tm_year+1900 << " at " << nowLocal.tm_hour << ":" << nowLocal.tm_min << "\r\n";
            reset();
            count = 0;
            cout << "X Wins:" << xwins << endl;
            cout << "O Wins:" << owins << endl;
            plyrinf(ptr);
            
        }
        pswap();//at the end of each cycle the player char swaps
        
        
    };    
            
        
    }
    
    //executes if user chooses game mode 3 (3 of 5)
    if(gameopt == 3){
        
        //asks user if it will be a wager match if yes it will execute wager function
         cout <<"Will you be waging on this match? y/n" << endl;
        cin >> betting;
        if(betting == 'y'){
            bet = 3;
        betrtrn = wager(bet, ptr);
        }
        
        //bool set to true will loop until break hits
    bool active = true;//bool to keep loop running until it hits a break      
    while(active = 1){
        count++;//adds one to count as it loops 
        display();//runs display function that shows current board layout
        turn();//turn function that has user input selection
        
        //checks to see if x won the match if x did then it will execute
        if(winchek()=='X'){//checks win function to see that it has returned an 'X'
            cout << "Player 1 Wins! (X)" << endl;
            cout << "Congratulations " << ptr[0].name << "!" << endl;
            history << ptr[0].name << " Won A Game Against " << ptr[1].name << " On " << nowLocal.tm_mon+1 << 
            "/" << nowLocal.tm_mday << "/" << nowLocal.tm_year+1900 << " at " << nowLocal.tm_hour << ":" << nowLocal.tm_min << "\r\n";
            xwins++;
            reset();
            count = 0;
            cout << "X Wins:" << xwins << endl;
            cout << "O Wins:" << owins << endl;
            
            //if user has won 3 games then it will execute update wallets and break loop
            if(xwins==3){
                ptr[0].wallet = ptr[0].wallet + betrtrn;
                ptr[1].wallet = ptr[1].wallet - betrtrn;
                plyrinf(ptr);
                walcheck(ptr[0].wallet, ptr[1].wallet);
                break;
            }
        }
        
        //checks to see if o won the match if o did then it will execute
        else if(winchek()=='O'){//checks win function to see that it has returned an 'O'
            cout << "Player 2 Wins! (O)" << endl;
            cout << "Congratulations " << ptr[1].name << "!" << endl;
            history << ptr[1].name << " Won A Game Against " << ptr[0].name << " On " << nowLocal.tm_mon+1 << 
            "/" << nowLocal.tm_mday << "/" << nowLocal.tm_year+1900 << " at " << nowLocal.tm_hour << ":" << nowLocal.tm_min << "\r\n";
            owins++;
            reset();
            count = 0;
            cout << "X Wins:" << xwins << endl;
            cout << "O Wins:" << owins << endl;
            
            //if user has won 3 games then it will execute update wallets and break loop
            if(owins==3){
                ptr[0].wallet = ptr[0].wallet - betrtrn;
                ptr[1].wallet = ptr[1].wallet + betrtrn;
                plyrinf(ptr);
                
                break;
            }
            
        }
        
        //checks to see if nobody won the match if noone did then it will execute
        else if(winchek()=='C' && count==9){//checks win function to see that it has returned an 'C' and that it has looped 9 times
            cout << "It Was A Draw!" << endl;
            history << ptr[0].name << " Tied A Game Against " << ptr[1].name << " On " << nowLocal.tm_mon+1 << 
            "/" << nowLocal.tm_mday << "/" << nowLocal.tm_year+1900 << " at " << nowLocal.tm_hour << ":" << nowLocal.tm_min << "\r\n";
            reset();
            count = 0;
            cout << "X Wins:" << xwins << endl;
            cout << "O Wins:" << owins << endl;
            plyrinf(ptr);
            
        }
        pswap();//at the end of each cycle the player char swaps
        
        
    };    
            
        
    }
    //closes the fstream txt file and frees up memory from the array
    history.close();
    delete [] ptr;  //free up allocated memory 
    return 0;
}




//Function that displays the game board after each move as an update
void display(){//function that outputs the 2d array after each loop
    cout << "*******" << endl;
    cout  << board[0][0] << "  "<<board[0][1]<< "  " << board[0][2] << endl;
    cout  << board[1][0] << "  "<<board[1][1]<< "  " << board[1][2] << endl;
    cout  << board[2][0] << "  "<<board[2][1]<< "  " << board[2][2] << endl; 
    cout << "*******" << endl;
    
};


//Function takes in an input from the player and then changes the corresponding element to an X or O depending on whos turn it is
void turn(){//function that checks user input and modifies its appropriate element

 int move; //used to check user input   
  
 cout << "Enter in the number you choose:" << endl;//user is asked to input a number
 cin >> move;//user inputs number
 
 //before space is changed it is check to make sure that the space has not already been taken by a previous turn
 while((move == 1) && (board[0][0] == 'X' || board[0][0] == 'O')){
    cout << "Space Is Already Selected Pick Another Spot" << endl;
  cin >> move;  
 }
 
 //before space is changed it is check to make sure that the space has not already been taken by a previous turn
  while((move == 2) && (board[0][1] == 'X' || board[0][1] == 'O')){
    cout << "Space Is Already Selected Pick Another Spot" << endl;
  cin >> move;  
 }
 
 //before space is changed it is check to make sure that the space has not already been taken by a previous turn
  while((move == 3) && (board[0][2] == 'X' || board[0][2] == 'O')){
    cout << "Space Is Already Selected Pick Another Spot" << endl;
  cin >> move;  
 }
 
 //before space is changed it is check to make sure that the space has not already been taken by a previous turn
  while((move == 4) && (board[1][0] == 'X' || board[1][0] == 'O')){
    cout << "Space Is Already Selected Pick Another Spot" << endl;
  cin >> move;  
 }
 
 //before space is changed it is check to make sure that the space has not already been taken by a previous turn
  while((move == 5) && (board[1][1] == 'X' || board[1][1] == 'O')){
    cout << "Space Is Already Selected Pick Another Spot" << endl;
  cin >> move;  
 }
 
 //before space is changed it is check to make sure that the space has not already been taken by a previous turn
  while((move == 6) && (board[1][2] == 'X' || board[1][2] == 'O')){
    cout << "Space Is Already Selected Pick Another Spot" << endl;
  cin >> move;  
 }
 
 //before space is changed it is check to make sure that the space has not already been taken by a previous turn
  while((move == 7) && (board[2][0] == 'X' || board[2][0] == 'O')){
    cout << "Space Is Already Selected Pick Another Spot" << endl;
  cin >> move;  
 }
 
 //before space is changed it is check to make sure that the space has not already been taken by a previous turn
  while((move == 8) && (board[2][1] == 'X' || board[2][1] == 'O')){
    cout << "Space Is Already Selected Pick Another Spot" << endl;
  cin >> move;  
 }
 
 //before space is changed it is check to make sure that the space has not already been taken by a previous turn
  while((move == 9) && (board[2][2] == 'X' || board[2][2] == 'O')){
    cout << "Space Is Already Selected Pick Another Spot" << endl;
  cin >> move;  
 }
 
 //if spot is available it will be changed from a number to either x or o depending on the turn
 if(move == 1)
 {
    board[0][0]=cplayer;//if equals the check it will change the number to an 'X' or 'O' 
 }  
 //if spot is available it will be changed from a number to either x or o depending on the turn
 if(move == 2)
 {
     board[0][1]=cplayer;
 }
 //if spot is available it will be changed from a number to either x or o depending on the turn
 if(move == 3)
 {
     board[0][2]=cplayer;
 }
 //if spot is available it will be changed from a number to either x or o depending on the turn
 if(move == 4)
 {
     board[1][0]=cplayer;
 }
 //if spot is available it will be changed from a number to either x or o depending on the turn
 if(move == 5)
 {
     board[1][1]=cplayer;
 }
 //if spot is available it will be changed from a number to either x or o depending on the turn
 if(move == 6)
 {
     board[1][2]=cplayer;
 }
 //if spot is available it will be changed from a number to either x or o depending on the turn
 if(move == 7)
 {
     board[2][0]=cplayer;
 }
 //if spot is available it will be changed from a number to either x or o depending on the turn
 if(move == 8)
 {
     board[2][1]=cplayer;
 }
 //if spot is available it will be changed from a number to either x or o depending on the turn
 if(move == 9)
 {
     board[2][2]=cplayer;
 }
};


//function that changes player char after one loop it will check and turn 'X' to 'O' as well as 'O' to 'X'

void pswap(){
    if(cplayer=='X')
    {   cplayer='O';
        p2=cplayer;}
    else if(cplayer=='O'){ 
        cplayer='X';
        p1=cplayer;
    }
}



//checks for matching 'X' or 'O' vertically, horizontally, and diagonally after each player turn
char winchek(){
//checks to see if x player has won after each turn by having three in a row
  if (board[0][0]=='X' && board[0][1]=='X' && board[0][2]=='X'){ 
      return 'X';
      reset();}
  if (board[1][0]=='X' && board[1][1]=='X' && board[1][2]=='X'){ 
      return 'X';
      reset();}
  if (board[2][0]=='X' && board[2][1]=='X' && board[2][2]=='X'){ 
      return 'X';
      reset();}
  if (board[0][0]=='X' && board[1][0]=='X' && board[2][0]=='X'){ 
      return 'X';
      reset();}
  if (board[0][1]=='X' && board[1][1]=='X' && board[2][1]=='X'){ 
      return 'X';
      reset();}
  if (board[0][2]=='X' && board[1][2]=='X' && board[2][2]=='X'){
      return 'X';
      reset();}
  if (board[0][0]=='X' && board[1][1]=='X' && board[2][2]=='X'){ 
      return 'X';
      reset();}
  if (board[0][2]=='X' && board[1][1]=='X' && board[2][0]=='X'){ 
      return 'X';//return winner
      reset();}
  
  //checks to see if o player has won after each turn by having three in a row
    if (board[0][0]=='O' && board[0][1]=='O' && board[0][2]=='O'){ 
      return 'O';
      reset();}
    if (board[1][0]=='O' && board[1][1]=='O' && board[1][2]=='O'){
      return 'O';
      reset();}
   if (board[2][0]=='O' && board[2][1]=='O' && board[2][2]=='O'){ 
      return 'O';
      reset();}
   if (board[0][0]=='O' && board[1][0]=='O' && board[2][0]=='O'){ 
      return 'O';
      reset();}
   if (board[0][1]=='O' && board[1][1]=='O' && board[2][1]=='O'){ 
      return 'O';
      reset();}
   if (board[0][2]=='O' && board[1][2]=='O' && board[2][2]=='O'){
      return 'O';
      reset();}
   if (board[0][0]=='O' && board[1][1]=='O' && board[2][2]=='O'){ 
      return 'O';
      reset();}
   if (board[0][2]=='O' && board[1][1]=='O' && board[2][0]=='O'){ 
      return 'O';//return winner
      reset();}
  
   //checks to see if no players have won
      return 'C';//if there is no winner then 'C' is returned
      reset();
};


//used to set 2d array back to all default values for two out of three or three out of five games
void reset(){
board[0][0]='1';
board[0][1]='2';
board[0][2]='3';
board[1][0]='4';
board[1][1]='5';
board[1][2]='6';
board[2][0]='7';
board[2][1]='8';
board[2][2]='9';
};

//outputs player info at the beginning of a wager match and after each bet match has completed
void plyrinf(Pinfo *ptr){
   cout << "**************************************************************************************" << endl; 
    cout << "Player 1 Info:" << endl;
    cout << "Name: " << ptr[0].name << endl;
    cout << "Age: " << ptr[0].age << endl;
    cout << "Wallet Ballance: " << ptr[0].wallet << endl;
    cout << "**************************************************************************************" << endl; 
    cout << "Player 2 Info:" << endl;
    cout << "Name: " << ptr[1].name << endl;
    cout << "Age: " << ptr[1].age << endl;
    cout << "Wallet Ballance: " << ptr[1].wallet << endl;
    cout << "**************************************************************************************" << endl;  
    
    
};

//depending on whether it is a wager mach and what type of match this will allow players to bet and make sure they have the balance for the bet
int wager(int x, Pinfo *ptr){
    cout << "Both Player Must Have Enough Wallet Ballance For Chosen Ammount" << endl;
    int betamt;
    do{
        //betting options for single game
if(x==1){
    cout << "How much would you like to wager?" << endl;
    cout << "1 = 10 credits" << endl;
    cout << "2 = 50 credits" << endl;
    cout << "3 = 100 credits" << endl;
    cin >> betamt;
    if(betamt == 1)
        betamt = 10;
    if(betamt == 2)
        betamt = 50;
    if(betamt == 3)
        betamt = 100;
}

//betting options for 2 of 3 game
    if(x==2){
    cout << "How much would you like to wager?" << endl;
    cout << "1 = 100 credits" << endl;
    cout << "2 = 300 credits" << endl;
    cout << "3 = 500 credits" << endl;
    cin >> betamt;
    if(betamt == 1)
        betamt = 100;
    if(betamt == 2)
        betamt = 300;
    if(betamt == 3)
        betamt = 500;
}
    
//betting option for 3 of 5 game
       if(x==3){
    cout << "How much would you like to wager?" << endl;
    cout << "1 = 100 credits" << endl;
    cout << "2 = 300 credits" << endl;
    cout << "3 = 500 credits" << endl;
    cout << "4 = 1000 credits" << endl;
    cin >> betamt;
    if(betamt == 1)
        betamt = 100;
    if(betamt == 2)
        betamt = 300;
    if(betamt == 3)
        betamt = 500;
    if(betamt == 4)
        betamt = 1000;
}
    }
    while((betamt>ptr[0].wallet) || (betamt>ptr[1].wallet));
    
    return betamt;

};
