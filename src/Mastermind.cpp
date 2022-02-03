#include "Constants.hpp"
#include "InputValidator.hpp"
#include "SecretGenerator.hpp"

#include <iostream>
#include <string>

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
    SecretGenerator<int> secretGenerator{ constants::numHoles,
                                          1,
                                          constants::numColors };

    std::string inputSeparator(1, ',');
    InputValidator<int> inputValidator{
        constants::numHoles, 1, constants::numColors, inputSeparator
    };

    int round = 0;
    while (round < constants::maxMoves) {
        std::string userInput;
        std::cin >> userInput;

        std::cout << "Your input: " << userInput << std::endl;

        auto val = inputValidator.ValidateInput(userInput);

        ++round;
    }
}