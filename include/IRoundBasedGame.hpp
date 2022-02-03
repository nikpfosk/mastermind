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
 * Objects of this class can be executed by the RoundBasedGameExecutor.
 *
 */
class IRoundBasedGame
{
  public:
    virtual void PrintGameRules() = 0;
    virtual RoundOutcome PlayRound(const std::string& input) = 0;
};

} // namespace utilities