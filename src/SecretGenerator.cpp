#include <algorithm>
#include <cstdlib>
#include <ctime>
#include <iostream>

#include "SecretGenerator.hpp"

using namespace utilities;

SecretGenerator::SecretGenerator(int length, int maxValue)
{
    GenerateSecret(length, maxValue);
}

SecretGenerator::~SecretGenerator() {}

void SecretGenerator::GenerateSecret(int length, int maxValue)
{

    _secret.resize(length);

    std::srand((unsigned int)time(NULL));
    std::generate(_secret.begin(), _secret.end(),
                  [maxValue]() { return std::rand() % maxValue; });

    std::cout << "\n";
    for (auto const &elem : _secret)
    {
        std::cout << elem;
    }
    std::cout << "\n";
}