/***********************************************************************************************
 *   Author:      Julian Rose
 *   File:        Player.cpp
 *   Course:      CS 7B
 *   Assignment:  The Game of Cho-Han
 *   Date:        5-9-2022
 ***********************************************************************************************/

#include "Player.h"
#include <string>

Player::Player() {
    points = 0;
}

void Player::SetName(std::string newName) {
    name = newName;
}

void Player::SetGuess(std::string newGuess) {
    guess = newGuess;
}

void Player::AddPoint() {
    points++;
}

std::string Player::GetName() {
    return name;
}

std::string Player::GetGuess() {
    return guess;
}

int Player::GetPoints() {
    return points;
}