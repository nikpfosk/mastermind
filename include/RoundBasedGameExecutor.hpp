#pragma once

#include "IRoundBasedGame.hpp"
#include <memory>

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

    RoundBasedGameExecutor(std::shared_ptr<IRoundBasedGame> game)
      : _game{ game }
    {}

    virtual ~RoundBasedGameExecutor(){};

    void PlayGame();

  private:
    std::shared_ptr<IRoundBasedGame> _game;
};

} // namespace utilities