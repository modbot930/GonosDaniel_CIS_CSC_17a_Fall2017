/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   ranked.h
 * Author: Daniel
 *
 * Created on December 11, 2017, 1:16 PM
 */

#ifndef RANKED_H
#define RANKED_H
#include "Pinfo.h"

//inherited class from regular pinfo class. Difference is that ranked players have a rank for a leaderboard 
class ranked: public Pinfo {
public:
    int rank;
    ranked();
    


};

#endif /* RANKED_H */

