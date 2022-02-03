#include <iostream>
#include <string>

#include "Mastermind.hpp"
#include "RoundBasedGameExecutor.hpp"

using namespace utilities;
using namespace mastermind;

int
main()
{
    RoundBasedGameExecutor executor(std::make_shared<Mastermind>());
    executor.PlayGame();
}