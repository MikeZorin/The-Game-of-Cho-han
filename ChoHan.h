/***********************************************************************************************
 *   Author:      Julian Rose
 *   File:        ChoHan.h
 *   Course:      CS 7B
 *   Assignment:  The Game of Cho-Han
 *   Date:        5-9-2022
 ***********************************************************************************************/

#ifndef CHOHAN_H
#define CHOHAN_H
#include "Player.h"
#include "Dealer.h"

class ChoHan {
public:
    ChoHan(int numRounds);
    void Start();
    void PlayRound();
    void DisplayGrandWinner();
    void CheckGuess(Player* player);
private:
    int maxRounds;
    Dealer* dealer = new Dealer();
    Player* player1 = new Player();
    Player* player2 = new Player();
};

#endif