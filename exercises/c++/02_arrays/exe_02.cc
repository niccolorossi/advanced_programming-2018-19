#include <iostream>

// given an n-dim array this function returns an (n+1)-dim one and frees the memory allocated for the former
// the old and new arrays are identical, except for the last entry, which is set to 0
int* reallocate (int* a, int n) {

  int* aux{new int[n]};
  int k;

  for (k = 0; k < n-1; k++)
    aux[k] = a[k];

  delete [] a;
  return aux;

}

int main () {

  int i, j;
  int n{1}, m{1};                  // n is the number of prime numbers found so far; initialized to 1 (2)
  std::cout << "upper value?\n";
  std::cin >> m;                   // m is the largest number tested
  int* primes{new int[n]};

  primes[0] = 2;                   // we start knowing that 2 is a prime number (therefore n=1)

  for (i = 3; i < m; i++) {        // outer loop generates number from 3 to m

    for (j = 2; j < i; j++)        // inner loop computes the remainder of the integer division between i and j
                                   // where j is an integer smaller than i
                                   // if the remainder of one division is 0 we exit the loop

      if ((i%j) ==  0) break;      // if no division has remainder 0, then at the end of the loop i = j


    if (j == i) {                  // at this point n is incremented and a new array is created
    n++;

    primes = reallocate(primes, n);
    primes[n-1] = i;
    }

  }

  std::cout << "the prime numbers ranging from 2 to 100 are\n";
  for (i = 0; i < n; i++) {

    std::cout << primes[i] << "\n";
  }




}
