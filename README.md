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

The classic Mastermind game is implemented in the console. The program is the *codemaker* and the user is the *codebreaker*. There are 6 colors and 4 code pegs. The valid inputs are comma separated integer values 

**1,1,1,1**

**1,1,1,2**

**...**

**6,6,6,5**

**6,6,6,6** 

The *codebreaker* must find the code in a maximum of 12 moves.

The *codemaker* responds in each guess by the number of pins with correct color and correct position, and correct color but wrong position. For example:

**Pins with correct color and correct position: 2**


**Pins with correct color and wrong position: 0**

## Demo

This is a sample from an actual round that the player won

```
************************************************

Welcome to the game of Mastermind.


The parameters we have set for you are:


Number of colors: 6


Number of holes: 4


Max number of moves: 12

************************************************


Provide input for round 1 ...
1,2,3,4

Pins with correct color and correct position: 2

Pins with correct color and wrong position: 0

Provide input for round 2 ...
1,2,5,6

Pins with correct color and correct position: 3

Pins with correct color and wrong position: 0

Provide input for round 3 ...
1,2,5,3

Pins with correct color and correct position: 3

Pins with correct color and wrong position: 0

Provide input for round 4 ...
1,2,5,2

Pins with correct color and correct position: 3

Pins with correct color and wrong position: 1

Provide input for round 5 ...
1,2,5,5

Pins with correct color and correct position: 3

Pins with correct color and wrong position: 1

Provide input for round 6 ...
1,2,5,1

Pins with correct color and correct position: 4

Pins with correct color and wrong position: 0

Congratulations! You have won the game!
```