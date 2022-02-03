#include <iostream>
#include <string>

#include "Mastermind.hpp"
#include "RoundBasedGameExecutor.hpp"

using namespace utilities;
using namespace mastermind;

int
main()
{
    // Secret code generator
    // While loop max 12 rounds
    // Wait for input from user
    // Input validation
    // Return results
    // Files needed
    auto mastermind = std::make_shared<Mastermind>();
    RoundBasedGameExecutor executor(mastermind);
    executor.PlayGame();
    /*
        int round = 1;
        while (round <= constants::maxMoves) {
            std::cout << "\n****** Provide input for round " << round <<
       std::endl; std::string userInput; std::cin >> userInput;

            std::cout << "Your input: " << userInput << std::endl;

            if (!inputValidator.ValidateInput(userInput))
                continue;

            ++round;
        }
    */
}