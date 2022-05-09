/***********************************************************************************************
 *   Author:      Julian Rose
 *   File:        Player.h
 *   Course:      CS 7B
 *   Assignment:  The Game of Cho-Han
 *   Date:        5-9-2022
 ***********************************************************************************************/

#ifndef PLAYER_H
#define PLAYER_H
#include <string>

class Player {
public:
    Player();
    void SetName(std::string newName);
    void SetGuess(std::string newGuess);
    void AddPoint();
    std::string GetName();
    std::string GetGuess();
    int GetPoints();
private:
    std::string name;
    std::string guess;
    int points;
};

#endif