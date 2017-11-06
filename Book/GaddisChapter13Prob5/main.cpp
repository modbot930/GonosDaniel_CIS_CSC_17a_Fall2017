/*
Daniel Gonos
CIS 17A (48969)
Assignment 13.5 (RetailItem Class)
 * This program creates a class called retailitem that is used to store data on an item in a retail store
*/

#include <iostream>//used for cin and cout
#include <cstdlib>//used for standard library

using namespace std;

class RetailItem{//class retailitem is created
private://private variables of class
    string name;//used for item name
    string desc;//description of item
    int qnty;//int for the quantity of item available
    float price;//stores the price of the item
public:
    RetailItem(string a, string b, int c, float d){//constructor
        name = a;
        desc = b;
        qnty = c;
        price = d;
                
    };
    void setname(string a){//mutator for name
       name = a; 
    };
    void setdesc(string b){//mutator for description
        desc = b;
    };
    void setqnty(int c){
        qnty = c;//mutator for quantity
    };
    void setpric(float d){
        price = d;//mutator for price
    };
    string getname(){//accessor for name
       return name; 
    };
    string getdesc(){//accessor for description
        return desc;
    };
    int getqnty(){//accessor for quantitiy
        return qnty;
    };
    float getpric(){
        return price;//accessor for price
    };
};
int main(){//main body lof program
    RetailItem item1("item#1","Jacket",12,59.95);//object for item 1 and its variables are created and filled
    RetailItem item2("item#2","Designer Jeans",40,34.95);//object for item 2 and its variables are created and filled
    RetailItem item3("item#3","Shirt",20,24.95 );//object for item 3 and its variables are created and filled
    cout << "Name" << "    " << "  Description" << "       " << "Units Available" << "     " << "Price" << endl;//all data from the objects s output
    cout << item1.getname() << "    " << item1.getdesc() << "            " << item1.getqnty() << "                  " << item1.getpric() << endl;
    cout << item2.getname() << "    " << item2.getdesc() << "    " << item2.getqnty() << "                  " << item2.getpric() << endl;
    cout << item3.getname() << "    " << item3.getdesc() << "             " << item3.getqnty() << "                  " << item3.getpric() << endl;
    return 0;
}

