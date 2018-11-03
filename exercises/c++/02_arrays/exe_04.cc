#include <iostream>
#include <vector>

// this is a simple algorithm that computes the prime numbers ranging from 2 to m
// every time a new prime number is found, it is added to the end of a dynamical array std::vector
// employing the function push_back()

int main () {

  int i, j;
  int m{1}, n{1};                  // n is the number of prime numbers found so far; initialized to 1 (2)
  std::cout << "upper value?\n";
  std::cin >> m;                   // m is the largest number tested
  std::vector <int> primes(1);

  primes[0] = 2;                   // we start knowing that 2 is a prime number (therefore n=1)

  for (i = 3; i < m; i++) {        // outer loop generates number from 3 to m

    for (j = 2; j < i; j++)        // inner loop computes the remainder of the integer division between i and j
                                   // where j is an integer smaller than i
                                   // if the remainder of one division is 0 we exit the loop

      if ((i%j) ==  0) break;      // if no division has remainder 0, then at the end of the loop i = j


    if (j == i) {                  // at this point n is incremented and a new spot is added
      n++;
      primes.push_back(i);
    }

  }

  std::cout << "the prime numbers ranging from 2 to 100 are\n";
  for (i = 0; i < n; i++) {

    std::cout << primes[i] << "\n";
  }




}
