/*
Daniel Gonos
CIS 17A (48969)
Assignment 13.6 (iventory)
 * This program creates a class called inventory that is used to hold and calculate data from a stores inventory
*/
#include <iostream>
#include <cstdlib>

using namespace std;

class Inventory{
 private:
     int itemNumber;
     int quantity;
     float cost;
     float totalCost;
     
public:
    Inventory(){
        itemNumber = 0;
        quantity = 0;
        cost = 0; 
        totalCost = 0;
    }
    Inventory(int a, int b, float c){
        itemNumber = a;
        quantity = b;
        cost = c;
    }
    void setItemNumber(int x){
        itemNumber = x;
    };
    void setQuantity(int x){
        quantity = x;
    };
    void setCost(float x){
        cost = x;
    };
    float setTotalCost(int x, float y){
        totalCost = x*y;
        return totalCost;
    };
    int getItemNumber(){
      return itemNumber;  
    };
    int getQuantity(){
        return quantity;
    };
    float getCost(){
        return cost;
    };
    float getTotalCost(){
      return totalCost;  
    };
    
};
int main(){
    Inventory tomato(489,45,.89);
    Inventory lettuce;(470,38,.98);
    Inventory carrot;(463,85,.76);
    cout << tomato.getItemNumber()  << endl;
    cout << tomato.getQuantity()  << endl;
    cout <<  tomato.getCost() << endl;
    cout <<  tomato.getTotalCost() << endl;
    cout << lettuce.getItemNumber()  << endl;
    cout << lettuce.getQuantity()  << endl;
    cout <<  lettuce.getCost() << endl;
    cout <<  lettuce.getTotalCost() << endl;
    cout << carrot.getItemNumber()  << endl;
    cout << carrot.getQuantity()  << endl;
    cout <<  carrot.getCost() << endl;
    cout <<  carrot.getTotalCost() << endl;
    cout << carrot.setTotalCost(carrot.getQuantity(), carrot.getCost()) << endl;
    cout << lettuce.setTotalCost(lettuce.getQuantity(), lettuce.getCost()) << endl;
    cout << tomato.setTotalCost(tomato.getQuantity(), tomato.getCost()) << endl;
    return 0;
}