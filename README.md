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

This is a sample from an actual round that the player won, also demonstrating two cases where the user provided invalid input.

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

Pins with correct color and correct position: 0

Pins with correct color and wrong position: 1

Provide input for round 2 ...
10,3,4,5
Value 10 is out of bounds.
Please provide values between 1 and 6

Provide input for round 2 ...
3,4,5,6,7
You have provided 5 values.
Please provide 4 values separated by: ,

Provide input for round 2 ...
1,2,5,6

Pins with correct color and correct position: 0

Pins with correct color and wrong position: 2

Provide input for round 3 ...
5,6,1,2

Pins with correct color and correct position: 2

Pins with correct color and wrong position: 0

Provide input for round 4 ...
5,6,3,4

Pins with correct color and correct position: 1

Pins with correct color and wrong position: 0

Provide input for round 5 ...
3,6,1,2

Pins with correct color and correct position: 2

Pins with correct color and wrong position: 0

Provide input for round 6 ...
1,6,1,2

Pins with correct color and correct position: 2

Pins with correct color and wrong position: 1

Provide input for round 7 ...
3,6,1,1

Pins with correct color and correct position: 3

Pins with correct color and wrong position: 0

Provide input for round 8 ...
2,6,1,1

Pins with correct color and correct position: 3

Pins with correct color and wrong position: 0

Provide input for round 9 ...
4,6,1,1

Pins with correct color and correct position: 3

Pins with correct color and wrong position: 0

Provide input for round 10 ...
5,6,1,1

Pins with correct color and correct position: 3

Pins with correct color and wrong position: 0

Provide input for round 11 ...
6,6,1,1

Pins with correct color and correct position: 4

Pins with correct color and wrong position: 0

Congratulations! You have won the game!
```