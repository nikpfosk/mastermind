# Mastermind

A simple console implementation of the Mastermind game in C++.

Author: nikpfosk

## Running the code 

To compile and run the project go to the build directory and run cmake and make

```
cd build
cmake ..
make
./mastermind
```
## Dependencies

Compiled and tested with
- CMake 3.16.3
- Clang 10

## Getting started

The classic Mastermind game is implemented in the console. The program is the *codemaker* and the user is the *codebreaker*. There are 6 colors and 4 code pegs. Therefore the valid inputs are [1111, 1112, ..., 6665, 6666]. 

The *codebreaker* must find the code in a maximum of 12 moves.

The *codemaker* responds in each guess by the number of black and white key pegs. For example:
- 00: Means 0 black and 0 white pegs.
- 20: Means 2 black and 0 white pegs.
- 01: Means 0 black and 1 white peg.