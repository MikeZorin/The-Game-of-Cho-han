/***********************************************************************************************
 *   Author:      Julian Rose
 *   File:        Dealer.h
 *   Course:      CS 7B
 *   Assignment:  The Game of Cho-Han
 *   Date:        5-9-2022
 ***********************************************************************************************/

#ifndef DEALER_H
#define DEALER_H
#include <string>
#include "Die.h"

class Dealer {
public:
    Dealer();
    void RollDice();
    std::string GetChoOrHan();
    int GetDie1Value();
    int GetDie2Value();
private:
    Die* die1 = new Die(6);
    Die* die2 = new Die(6);
};

#endif