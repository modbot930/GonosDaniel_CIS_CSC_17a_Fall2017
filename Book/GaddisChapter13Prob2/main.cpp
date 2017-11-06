/*
Daniel Gonos
CIS 17A (48969)
Assignment 13.2 (Employee Class)
 * This program creates a class called employee that stores information about employees and then outputs the data
*/


#include <cstdlib>//used for standard library
#include <iostream>//used for cin and cout


using namespace std;

class employee{//class called employee created
private://private employee variables
    string name;//holds employee name
    int idnumbr;//holds id number
    string depart;// hold department
    string posit;//holds position
public:     //public employee variables, functions, and constructors
    employee(string a, int b, string c, string d){//constuctor
        name = a;
        depart = c;
        posit = d;
        idnumbr = b;
    };
    
    employee(string a, int b){//constuctor
        name = a;
        depart = "";
        posit = "";
        idnumbr = b;
    };
    employee(){//default constuctor
        name = "";
        depart = "";
        posit = "";
        idnumbr = 0;
    };
    void setname(string n){//mutator for name
        name=n;
    };
    void setid(int i){//mutator for id
        idnumbr=i;
    };
    void setdpt(string d){//mutator for department
        depart=d;
    };
    void setpos(string p){//mutator for position
        posit=p;
    };
    string getname(){//accessor for name
        return name;
    };
     int getid(){//accessor for id
         return idnumbr;
    };
      string getdpt(){//accessor for department
        return depart;
    };
       string getpos(){//accessor for position
        return posit;
    };
};

int main(){//main body of program
    cout << "Name           " << "Id Number     " << "Department      " << "Position" << endl;//all data for the three employees is output
    employee susan("Susan Meyers", 47899,"Accounting","Vice President");//susan object is created and data is stored in variables
    cout << susan.getname() << "   ";
    cout << susan.getid() << "         ";
    cout << susan.getdpt() << "      ";
    cout << susan.getpos() << endl; 
    employee mark("Mark Jones", 39119,"IT","Programmer");//mark object is created and data is stored in variables
    cout << mark.getname() << "     ";
    cout << mark.getid() << "         ";
    cout << mark.getdpt() << "              ";
    cout << mark.getpos() << endl;
    employee joy("Joy Rogers", 81774,"Manufacturing","Engineer");//joy object is created and data is stored in variables
    cout << joy.getname() << "     ";
    cout << joy.getid() << "         ";
    cout << joy.getdpt() << "   ";
    cout << joy.getpos() << endl;
    return 0;
}






