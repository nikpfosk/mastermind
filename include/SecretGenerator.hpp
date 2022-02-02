#pragma once

#include <vector>

namespace utilities {

/**
 * \class SecretGenerator
 *
 * Generic class that produces the secret.
 */
class SecretGenerator {
public:
  SecretGenerator() = delete;

  SecretGenerator(const SecretGenerator &) = delete;

  const SecretGenerator &operator=(const SecretGenerator &) = delete;

  SecretGenerator(int length, int maxValue);

  ~SecretGenerator();

  const std::vector<int> &GetSecret() const { return _secret; };

private:
  std::vector<int> _secret;

  void GenerateSecret(int length, int maxValue);
};

} // namespace utilities