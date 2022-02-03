#include <algorithm>
#include <iostream>

#include "Mastermind.hpp"

using namespace mastermind;
using namespace utilities;

void
Mastermind::PrintGameRules()
{
    std::cout << "\n************************************************"
              << std::endl;
    std::cout << "\nWelcome to the game of Mastermind.\n" << std::endl;
    std::cout << "\nThe parameters we have set for you are:\n" << std::endl;
    std::cout << "\nNumber of colors: " << constants::numColors << "\n"
              << std::endl;
    std::cout << "\nNumber of holes: " << constants::numHoles << "\n"
              << std::endl;
    std::cout << "\nMax number of moves: " << constants::maxMoves << "\n"
              << std::endl;
    std::cout << "************************************************\n"
              << std::endl;
}

RoundOutcome
Mastermind::PlayRound(const std::string& input)
{
    std::vector<int> inputValues{};
    if (!_inputValidator.ValidateInput(input, inputValues)) {
        return RoundOutcome::INVALID_ROUND;
    }

    if (ProcessInput(inputValues)) {
        return RoundOutcome::GAME_WON;
    } else {
        return RoundOutcome::CONTINUE;
    }
}

bool
Mastermind::ProcessInput(const std::vector<int>& inputValues)
{
    int correctColAndPos = 0;
    int correctColWrongPos = 0;

    int index = 0;
    for (const auto& value : inputValues) {
        if (value == _secretGenerator.GetSecret()[index]) {
            ++correctColAndPos;
        } else {
            if (std::find(_secretGenerator.GetSecret().begin(),
                          _secretGenerator.GetSecret().end(),
                          value) != _secretGenerator.GetSecret().end()) {
                ++correctColWrongPos;
            }
        }
        ++index;
    }

    std::cout << "\nPins with correct color and correct position: "
              << correctColAndPos << std::endl;
    std::cout << "\nPins with correct color and wrong position: "
              << correctColWrongPos << std::endl;

    if (correctColAndPos == constants::numHoles) {
        return true;
    } else {
        return false;
    }
}