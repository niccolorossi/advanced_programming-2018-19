#include <iostream>

// function signatures
template <typename T>
T* allocate_arr (int n);
template <typename T>
void print_arr (T* a, int n);

int main () {

  int i, n;
  std::cout << "length of the array?\n";
  std::cin >> n;
  int* a;
  a = allocate_arr<int>(n);

  std::cout << "elements of the array?\n";
  for (i = 0; i < n; i++)
    std::cin >> a[i];

  std::cout << "...printed in reverse\n";
  print_arr (a, n);
  delete [] a;

}

template <typename T>
T* allocate_arr (int n) {

  T* a{new T[n]};
  return a;

}

template <typename T>
void print_arr (T* a, int n) {

  for (int i{n-1}; i >= 0; --i)
    std::cout << a[i] << " ";

}
