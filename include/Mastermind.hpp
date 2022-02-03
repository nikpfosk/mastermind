#pragma once

#include "Constants.hpp"
#include "IRoundBasedGame.hpp"
#include "InputValidator.hpp"
#include "SecretGenerator.hpp"

namespace mastermind {

/**
 * \class Mastermind
 *
 * \brief Class that implements the Mastermind game as a IRoundBasedGame
 *
 *
 */
class Mastermind : public utilities::IRoundBasedGame
{
  public:
    Mastermind()
      : _secretGenerator{ constants::numHoles, 1, constants::numColors }
      , _inputValidator{ constants::numHoles, 1, constants::numColors, "," }
    {}
    virtual ~Mastermind();

    void PrintGameRules() override;
    utilities::RoundOutcome PlayRound(const std::string& input) override;

  private:
    utilities::SecretGenerator<int> _secretGenerator;
    utilities::InputValidator<int> _inputValidator;
};

} // namespace utilities