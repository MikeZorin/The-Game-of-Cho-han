/***********************************************************************************************
 *   Author:      Julian Rose
 *   File:        main.cpp
 *   Course:      CS 7B
 *   Assignment:  The Game of Cho-Han
 *   Date:        5-9-2022
 ***********************************************************************************************/

#include <iostream>
#include <ctime>
#include "Die.h"
#include "Dealer.h"
#include "Player.h"
#include "ChoHan.h"

using namespace std;

int main() {

    srand(time(0));

    ChoHan myGame(5);
    myGame.Start();

    return 0;
}