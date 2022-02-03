#pragma once

#include <algorithm>
#include <cassert>
#include <cstdlib>
#include <ctime>
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

    SecretGenerator(T length, T minValue, T maxValue)
    {
        static_assert(std::is_integral<T>::value,
                      "Template argument T must be integral");
        static_assert(sizeof(T) > 1,
                      "Template argument T should not be bool or (u)char");
        assert(length > 0);
        GenerateSecret(length, minValue, maxValue);
    }

    virtual ~SecretGenerator(){};

    const std::vector<T>& GetSecret() const { return _secret; };

  private:
    std::vector<T> _secret;

    void GenerateSecret(T length, T minValue, T maxValue)
    {

        if (maxValue > std::numeric_limits<T>::max()) {
            maxValue = std::numeric_limits<T>::max();
        }

        if (minValue < std::numeric_limits<T>::min()) {
            minValue = std::numeric_limits<T>::min();
        }

        _secret.resize(length);

        std::srand((unsigned int)time(NULL));
        std::generate(_secret.begin(), _secret.end(), [minValue, maxValue]() {
            return minValue + static_cast<T>(std::rand()) % maxValue;
        });
    }
};

} // namespace utilities