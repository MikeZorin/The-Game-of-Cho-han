/***********************************************************************************************
 *   Author:      Julian Rose
 *   File:        Dealer.cpp
 *   Course:      CS 7B
 *   Assignment:  The Game of Cho-Han
 *   Date:        5-9-2022
 ***********************************************************************************************/

#include "Dealer.h"

Dealer::Dealer() {

}

void Dealer::RollDice() {
    die1->Roll();
    die2->Roll();
}

std::string Dealer::GetChoOrHan() {
    int sum = die1->GetValue() + die2->GetValue();

    if (sum % 2 == 0) {
        return "Cho";
    }
    else {
        return "Han";
    }
}

int Dealer::GetDie1Value() {
    return die1->GetValue();
}

int Dealer::GetDie2Value() {
    return die2->GetValue();
}