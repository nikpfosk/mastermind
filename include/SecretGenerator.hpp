#pragma once

#include <algorithm>
#include <cassert>
#include <cstdlib>
#include <ctime>
#include <iostream>
#include <limits>
#include <type_traits>
#include <vector>

namespace utilities {

/**
 * \class SecretGenerator
 *
 * \brief Generic class that produces an integral secret combination.
 *
 * The class is constructed with two parameters. The length of the secret, and
 * the maxValue of each secret element. The class is templated and supports
 * only integral types.
 */
template<typename T>
class SecretGenerator
{
  public:
    SecretGenerator() = delete;

    SecretGenerator(const SecretGenerator&) = delete;

    const SecretGenerator& operator=(const SecretGenerator&) = delete;

    SecretGenerator(T length, T maxValue)
    {
        static_assert(std::is_integral<T>::value,
                      "Template argument T must be integral");
        static_assert(sizeof(T) > 1,
                      "Template argument T should not be bool or (u)char");
        assert(length > 0);
        assert(maxValue > 0);
        GenerateSecret(length, maxValue);
    }

    ~SecretGenerator(){};

    const std::vector<T>& GetSecret() const { return _secret; };

  private:
    std::vector<T> _secret;

    void GenerateSecret(T length, T maxValue)
    {

        if (maxValue > std::numeric_limits<T>::max() - 1) {
            maxValue = std::numeric_limits<T>::max() - 1;
        }

        _secret.resize(length);

        std::srand((unsigned int)time(NULL));
        std::generate(_secret.begin(), _secret.end(), [maxValue]() {
            return static_cast<T>(std::rand()) % maxValue + 1;
        });

        std::cout << "\n";
        for (auto const& elem : _secret) {
            std::cout << elem;
        }
        std::cout << "\n";
    }
};

} // namespace utilities