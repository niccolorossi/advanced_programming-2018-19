#include <iostream>
#include <cmath>                   // includes std::sqrt()

int main () {

  int n{1}, m{1};
  std::cout << "upper value?\n";   // largest number tested
  std::cin >> n;
  m = (int)std::sqrt(n);           // m+1 is an upper bound for the prime divisors of numbers
                                   // ranging from 2 to n

  bool* primes{new bool[n+1]};     // we're interested in the indexes from 2 to n; they store boolean
                                   // values initialized to "false"
//-----------------------------------------------------------------------------------------------------
// the outer loop generates all the possible prime divisors of numers ranging from 2 to n
// if they are, in fact, prime, all their multiples are labeled "true" = non prime
  for (int j = 2; j <= m+1; j++) {
    if (primes[j] == false) {

      for (int i = j+1; i < n+1; i++)
        if (i%j == 0) primes[i] = true;

    }
  }

  std::cout << "the prime numbers ranging from 2 to " << n << " are\n";
  for (int i = 2; i < n+1; i++)
    if (!(primes[i])) std::cout << i << "\n";

}
