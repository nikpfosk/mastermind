#pragma once

#include <string>

namespace utilities {

enum RoundOutcome
{
    GAME_WON,
    INVALID_ROUND,
    CONTINUE
};

/**
 * \class IRoundBasedGame
 *
 * \brief Pure abstract class that defines a round based game.
 *
 * Objects of this class can be executed by the RoundBasedGameExecutor. The
 * initial implementation has two virtual methods that need to be implemented. A
 * method that prints the rules of the game for the user, and a method that
 * executes a round and returns a RoundOutcome. The RoundOutcome enum can be
 * extended with more fields.
 *
 */
class IRoundBasedGame
{
  public:
    virtual void PrintGameRules() = 0;
    virtual RoundOutcome PlayRound(const std::string& input) = 0;
};

} // namespace utilities