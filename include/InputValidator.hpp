#pragma once

#include <cassert>
#include <cstdlib>
#include <iostream>
#include <limits>
#include <sstream>
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
        assert(_separator.size() ==
               1); // TODO: Smarter static separator validation.
    }

    InputValidator(const InputValidator&) = delete;

    const InputValidator& operator=(const InputValidator&) = delete;

    ~InputValidator(){};

    bool ValidateInput(const std::string& input)
    {
        std::vector<T> inputValues{};
        std::cout << "ValidateInputCalled: " << input << std::endl;
        PopulateInputValues(input, inputValues);

        if (!CheckInputLength(inputValues)) {
            return false;
        }

        return true;
    }

  private:
    const T _length;
    const T _minValue;
    const T _maxValue;

    const bool _arithmeticValues = true;
    const bool _integralValues = true;
    const std::string _separator;

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

    void PopulateInputValues(const std::string& input,
                             std::vector<T>& inputValues)
    {
        std::stringstream ss(input);
        std::cout << "separator" << _separator[0] << std::endl;

        for (int i; ss >> i;) {
            inputValues.push_back(i);
            if (ss.peek() == _separator[0])
                ss.ignore();
        }
    }

    bool CheckInputLength(const std::vector<T>& inputValues)
    {
        if (inputValues.size() != _length) {
            std::cout << "You have provided " << inputValues.size()
                      << " values." << std::endl;
            std::cout << "Please provide " << _length << " values "
                      << "separated by: " << _separator << std::endl;
            return false;
        } else {
            return true;
        }
    }
};

} // namespace utilities