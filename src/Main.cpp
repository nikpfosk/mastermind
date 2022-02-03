#include <iostream>
#include <string>

#include "Mastermind.hpp"
#include "RoundBasedGameExecutor.hpp"

using namespace utilities;
using namespace mastermind;

int
main()
{
    auto mastermind = std::make_shared<Mastermind>();
    RoundBasedGameExecutor executor(mastermind);
    executor.PlayGame();
}