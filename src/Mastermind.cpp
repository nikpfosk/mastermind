#include <iostream>

#include "Mastermind.hpp"

using namespace mastermind;
using namespace utilities;

void
Mastermind::PrintGameRules()
{
    std::cout << "GAME RULESSSSS" << std::endl;
}

RoundOutcome
Mastermind::PlayRound(const std::string& input)
{
    return RoundOutcome::GAME_WON;
}