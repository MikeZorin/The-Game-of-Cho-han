/***********************************************************************************************
 *   Author:      Julian Rose
 *   File:        Die.h
 *   Course:      CS 7B
 *   Assignment:  The Game of Cho-Han
 *   Date:        5-9-2022
 ***********************************************************************************************/

#ifndef DIE_H
#define DIE_H

class Die {
public:
    Die(int numSides);
    void Roll();
    int GetSides();
    int GetValue();
private:
    int sides;
    int value;
};

#endif