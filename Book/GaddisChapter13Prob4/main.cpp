/*
Daniel Gonos
CIS 17A (48969)
Assignment 13.4 (personal information class)
 * This program creates a class that is used to hold personal data of myself and two others as well as output the data
*/

#include <iostream> //used for cin and cout
#include <cstdlib>//used for standard library

using namespace std;

class usrinfo{//class called usrinfo is created
private://private variables of userinfo class
    string name;//string to hold name
    string address;//string to hold address
    int age;//in to hold the age
    string phone;//string to hold the phone number
    
public://public variables and functions of class
    usrinfo(){//default cunstructor
        name = "";
        address = "";
        age = 1;
        phone = "";
    };
    void setname(string x){//mutator for name
        name = x;
    };
    void setaddr(string y){//mutator for address
        address = y;
    };
    void setage(int a){//mutator for age
        age = a;
    };
    void setnumb(string b){//mutator for number
        phone = b;
    };
    string getname(){//accessor for name
        return name;
    };
    string getaddr(){
        return address;//accessor for address
    };
    int getage(){
        return age;//accessor for age
    };
    string getnumb(){
        return phone;//accessor for number
    };
};

int main(){//main body of program
    //temp local variables
    string name;
    string address;
    int age;
    string number;
    
    usrinfo daniel;//object daniel from usrinfo class
    daniel.setname(name = "Daniel");
    daniel.setaddr(address = "123 6th St., Melbourne, FL 32904");
    daniel.setage(age = 25);
    daniel.setnumb(number = "9515658232");
    
    usrinfo erin;//object erin from usrinfo class
    erin.setname(name = "Erin");
    erin.setaddr(address = "71 Pilgrim Avenue, Chevy Chase, MD 20815");
    erin.setage(age = 25);
    erin.setnumb(number = "9092225688");
    
    usrinfo nick;//object nick from usrinfo class
    nick.setname(name = "Nick");    
    nick.setaddr(address = "70 Bowman St., South Windsor, CT 06074");
    nick.setage(age = 20);
    nick.setnumb(number = "8002345665");

    //all data is output:
    cout << "First users info: " << endl;
    cout << "Name: " << daniel.getname()  << endl; 
    cout << "Address: " << daniel.getaddr()  << endl; 
    cout << "Age: " << daniel.getage()  << endl; 
    cout << "Phone Number: " <<  daniel.getnumb() << endl << endl; 
    
    cout << "Second users info: " << endl;
    cout << "Name: " <<  erin.getname() << endl; 
    cout << "Address: " << erin.getaddr()  << endl; 
    cout << "Age: " <<  erin.getage() << endl; 
    cout << "Phone Number: " << erin.getnumb()  << endl << endl; 
    
    cout << "Third users info: " << endl;
    cout << "Name: " << nick.getname()  << endl; 
    cout << "Address: " <<  nick.getaddr() << endl; 
    cout << "Age: " << nick.getage()  << endl; 
    cout << "Phone Number: " << nick.getnumb()  << endl << endl; 
    
    return 0;
}

