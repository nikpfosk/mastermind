#pragma once

#include <cassert>
#include <cstdlib>
#include <iostream>
#include <limits>
#include <string>
#include <type_traits>
#include <vector>

namespace utilities {

/**
 * \class InputValidator
 *
 * \brief Generic class that validates the input based on a selected number of
 * conditions.
 *
 */
template<typename T>
class InputValidator
{
  public:
    InputValidator() = delete;

    InputValidator(T length,
                   T minValue,
                   T maxValue,
                   const std::string& separator)
      : _length{ length }
      , _minValue{ minValue }
      , _maxValue{ maxValue }
      , _separator{ separator }
    {
        CheckTypeTraits();
    }

    InputValidator(const InputValidator&) = delete;

    const InputValidator& operator=(const InputValidator&) = delete;

    ~InputValidator(){};

    bool ValidateInput(const std::string& input) const
    {
        std::cout << "ValidateInputCalled: " << input << std::endl;
        return true;
    }

  private:
    T _length;
    T _minValue;
    T _maxValue;

    bool _arithmeticValues = true;
    bool _integralValues = true;
    std::string _separator;

    void CheckTypeTraits()
    {
        if (_arithmeticValues)
            CheckArithmetic();

        if (_integralValues)
            CheckIntegral();
    }

    void CheckArithmetic()
    {
        static_assert(std::is_arithmetic<T>::value,
                      "Template argument T must be arithmetic");
    }

    void CheckIntegral()
    {
        static_assert(std::is_integral<T>::value,
                      "Template argument T must be integral");
    }
};

} // namespace utilities