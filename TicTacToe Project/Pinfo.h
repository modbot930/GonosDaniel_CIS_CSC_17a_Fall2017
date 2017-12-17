/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Pinfo.h
 * Author: Daniel
 *
 * Created on December 9, 2017, 7:45 PM
 */

#ifndef PINFO_H
#define PINFO_H
#include <iostream>
using namespace std;

//player class used for all player in game
class Pinfo {
public:
    //all player info
    string name; //player name
    int age; //player age 
    char exper; //check to see if player knows how to play
    Pinfo();
    Pinfo(int);
    int wallet = 1000;
    Pinfo operator+(Pinfo);
private:

};




#endif /* PINFO_H */

