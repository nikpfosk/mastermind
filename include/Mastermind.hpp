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
 * The mastermind class uses the generic secret generator and input validator
 * and builds them with integer values taken from the global constants. In the
 * future it can read different parameters from a config file and alter the
 * game's complexity and rules.
 *
 *
 */
class Mastermind : public utilities::IRoundBasedGame
{
  public:
    Mastermind()
      : _secretGenerator{ utilities::constants::numHoles,
                          1,
                          utilities::constants::numColors }
      , _inputValidator{ utilities::constants::numHoles,
                         1,
                         utilities::constants::numColors,
                         "," }
    {}
    virtual ~Mastermind(){};

    void PrintGameRules() override;
    utilities::RoundOutcome PlayRound(const std::string& input) override;

  private:
    utilities::SecretGenerator<int> _secretGenerator;
    utilities::InputValidator<int> _inputValidator;

    bool ProcessInput(const std::vector<int>& inputValues);
};

} // namespace utilities