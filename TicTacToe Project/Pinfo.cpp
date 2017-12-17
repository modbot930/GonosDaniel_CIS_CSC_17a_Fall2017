/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Pinfo.cpp
 * Author: Daniel
 * 
 * Created on December 9, 2017, 7:45 PM
 */

#include "Pinfo.h"
#include <iostream>

using namespace std;

Pinfo::Pinfo() {
    
    
}


Pinfo::Pinfo(int a) {
    wallet = a;
}

//operator overload gives the ability to add one existing wallet ballance and a new wallet balance to a class
//purpose is for weekly reset of wallet ballance (1000) credits a week
Pinfo Pinfo::operator+(Pinfo another){
    Pinfo added;
    added.wallet = wallet + another.wallet;
    return(added);
}