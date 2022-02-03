#pragma once

/**
 * \brief Global constants for the mastermind game.
 *
 * In future versions these can be handled with Singleton objects and be parsed
 * from config files etc.
 *
 */

namespace utilities {
namespace constants {

const int numColors{ 6 };
const int numHoles{ 4 };
const int maxMoves{ 12 };

} // namespace constants
} // namespace utilities