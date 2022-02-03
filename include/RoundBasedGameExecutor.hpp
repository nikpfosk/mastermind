#pragma once

#include "IRoundBasedGame.hpp"

namespace utilities {

/**
 * \class RoundBasedGameExecutor
 *
 * \brief Pure abstract class that defines a round based game.
 *
 * Objects of this class can be executed by the RoundBasedGameExecutor.
 *
 */
class RoundBasedGameExecutor
{
  public:
    RoundBasedGameExecutor() = delete;

    RoundBasedGameExecutor(const RoundBasedGameExecutor&) = delete;

    const RoundBasedGameExecutor& operator=(const RoundBasedGameExecutor&) =
      delete;

    RoundBasedGameExecutor(const IRoundBasedGame& game) {}

    ~RoundBasedGameExecutor(){};

    void PlayGame();
};

} // namespace utilities