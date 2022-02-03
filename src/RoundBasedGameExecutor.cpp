#include <iostream>

#include "Constants.hpp"
#include "RoundBasedGameExecutor.hpp"

using namespace utilities;

void
RoundBasedGameExecutor::PlayGame()
{
    _game->PrintGameRules();

    int round = 1;
    while (round <= constants::maxMoves) {
        std::cout << "\n****** Provide input for round " << round << std::endl;
        std::string userInput;
        std::cin >> userInput;

        auto roundOutcome = _game->PlayRound(userInput);

        switch (roundOutcome) {
            case RoundOutcome::GAME_WON:
                std::cout << "Congratulations! You have won the game!"
                          << std::endl;
                return;
                break;
            case RoundOutcome::INVALID_ROUND:
                continue;
                break;
            case RoundOutcome::CONTINUE:
                ++round;
                break;

            default:
                break;
        }
    }
}