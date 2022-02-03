#pragma once

#include "IRoundBasedGame.hpp"
#include <memory>

namespace utilities {

/**
 * \class RoundBasedGameExecutor
 *
 * \brief Class that runs a round based game for an object that implements the
 * IRoundBaseGame class.
 *
 * The executor is configured by the number of rounds provided in the config and
 * runs the abstract game for the user's console input.
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