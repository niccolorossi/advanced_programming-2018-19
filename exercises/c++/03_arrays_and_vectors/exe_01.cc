#include <iostream>
#include <array>
#define M 10
#define N 3

// transpose function: working on the addresses of "mat" it modifies a "tmat"
// ------------------------------------------------------------------

std::array <double, M*N> transpose (std::array <double, M*N> &mat, std::array <double, M*N> &tmat) {

  for (int j = 0; j < N; j++) {
    for (int i = 0; i < M; i++) {
      tmat[i + M * (j)] = mat[j + N * (i)];

    }
  }
  return tmat;
}
// ------------------------------------------------------------------


int main () {

  int const num_of_el{M*N};
  std::array <double, num_of_el> matrix, tmatrix;

  std::cout << "entries of the matrix (row-wise)\n";
  for (int i = 0; i < num_of_el; i++)
    std::cin >> matrix[i];
  std::cout << "\n";

  for (int i = 0; i < M; i++) {
    for (int j = 0; j < N; j++) {
      std::cout << matrix[j + N * (i)] << " ";
    }
    std::cout << "\n";
  }
  //std::cout << "Insert here the number of rows, columns\n";
  //std::cin << m << n;
  std::cout << "\n";
  transpose (matrix, tmatrix);


  std::cout << "\n";

  for (int i = 0; i < N; i++) {
    for (int j = 0; j < M; j++) {
      std::cout << tmatrix[j + M * (i)] << " ";
    }
    std::cout << "\n";
  }

  return 0;
}
