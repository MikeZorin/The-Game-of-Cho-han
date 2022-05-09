/***********************************************************************************************
 *   Author:      Julian Rose
 *   File:        ChoHan.cpp
 *   Course:      CS 7B
 *   Assignment:  The Game of Cho-Han
 *   Date:        5-9-2022
 ***********************************************************************************************/

#include "ChoHan.h"
#include <iostream>
#include <string>

ChoHan::ChoHan(int numRounds) {
    maxRounds = numRounds;
}

void ChoHan::Start() {
    std::string name1, name2;

    std::cout << "Welcome to a simple Cho-Han game!" << std::endl;
    std::cout << "Enter the first player's name: ";
    std::cin >> name1;

    std::cout << "Enter the second player's name: ";
    std::cin >> name2;

    player1->SetName(name1);
    player2->SetName(name2);

    std::cout << "------------------------------" << std::endl;

    for (int i = 0; i < maxRounds; i++) {
        std::cout << "Now playing round " << i + 1 << std::endl;
        PlayRound();
        std::cout << "------------------------------" << std::endl;
    }

    DisplayGrandWinner();
}

void ChoHan::PlayRound() {
    std::string guess1, guess2;

    dealer->RollDice();

    std::cout << "Enter the guess for player " << player1->GetName() << ": ";
    std::cin >> guess1;

    std::cout << "Enter the guess for player " << player2->GetName() << ": ";
    std::cin >> guess2;

    player1->SetGuess(guess1);
    player2->SetGuess(guess2);

    std::cout << "The dealer rolled " << dealer->GetDie1Value() << " and " << dealer->GetDie2Value() << std::endl;

    CheckGuess(player2);
}

void ChoHan::CheckGuess(Player* player) {
    // Get result
    std::cout << "Result: " << dealer->GetChoOrHan();
    if (dealer->GetChoOrHan() == "Cho") {
        std::cout << " (even)" << std::endl;
    }
    else {
        std::cout << " (odd)" << std::endl;
    }

    // Check player 1 guess
    std::cout << "The player " << player1->GetName() << " guessed " << player1->GetGuess();
    if (player1->GetGuess() == "Cho") {
        std::cout << " (even)" << std::endl;
    }
    else {
        std::cout << " (odd)" << std::endl;
    }
    if (player1->GetGuess() == dealer->GetChoOrHan()) {
        std::cout << "Awarding 1 point to " << player1->GetName() << std::endl;
        player1->AddPoint();
    }

    // Check player 2 guess
    std::cout << "The player " << player2->GetName() << " guessed " << player2->GetGuess();
    if (player2->GetGuess() == "Cho") {
        std::cout << " (even)" << std::endl;
    }
    else {
        std::cout << " (odd)" << std::endl;
    }
    if (player2->GetGuess() == dealer->GetChoOrHan()) {
        std::cout << "Awarding 1 point to " << player2->GetName() << std::endl;
        player2->AddPoint();
    }
}

void ChoHan::DisplayGrandWinner() {
    std::cout << "Game over. Here are the results:" << std::endl;

    // Display points
    std::cout << player1->GetName() << ": " << player1->GetPoints() << " points" << std::endl;
    std::cout << player2->GetName() << ": " << player2->GetPoints() << " points" << std::endl;

    // Declare winner
    if (player1->GetPoints() > player2->GetPoints()) {
        std::cout << player1->GetName() << " is the grand winner!" << std::endl;
    }
    if (player2->GetPoints() > player1->GetPoints()) {
        std::cout << player2->GetName() << " is the grand winner!" << std::endl;
    }
    if (player2->GetPoints() == player1->GetPoints()) {
        std::cout << "Tied game!" << std::endl;
    }
}
