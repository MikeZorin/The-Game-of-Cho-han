/***********************************************************************************************
 *   Author:      Julian Rose
 *   File:        Die.cpp
 *   Course:      CS 7B
 *   Assignment:  The Game of Cho-Han
 *   Date:        5-9-2022
 ***********************************************************************************************/

#include "Die.h"
#include <cstdlib>

Die::Die(int numSides) {
    sides = numSides;
}

void Die::Roll() {
    value = (rand() % 6 + 1);
}

int Die::GetSides() {
    return sides;
}

int Die::GetValue() {
    return value;
}