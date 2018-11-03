#include <iostream>

int main () {

  std::string line;
  std::string previous = " ";
  int i{0};

  while(std::getline(std::cin,line)) {

    if (previous != line && previous != " ")  {
      std::cout <<" " << i << " " << previous << "\n";
      i = 0;
    }
    previous = line;
    i++;
  }

  return 0;

}
