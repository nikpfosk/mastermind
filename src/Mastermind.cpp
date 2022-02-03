#include <iostream>

#include "Mastermind.hpp"

using namespace mastermind;
using namespace utilities;

void
Mastermind::PrintGameRules()
{
    std::cout << "************************************************"
              << std::endl;
    std::cout << "\nWelcome to the game of Mastermind.\n" << std::endl;
    std::cout << "\nThe parameters we have set for you are:\n" << std::endl;
    std::cout << "\nNumber of colors: " << constants::numColors << "\n"
              << std::endl;
    std::cout << "\nNumber of holes: " << constants::numHoles << "\n"
              << std::endl;
    std::cout << "\nMax number of moves: " << constants::maxMoves << "\n"
              << std::endl;
    std::cout << "************************************************"
              << std::endl;
}

RoundOutcome
Mastermind::PlayRound(const std::string& input)
{
    return RoundOutcome::GAME_WON;
}