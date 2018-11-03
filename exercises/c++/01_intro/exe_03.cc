#include <iostream>

void get_double () {

  double d{0.0};
  while(!(std::cin >> d)) {
    std::cin.clear();
    std::cin.ignore();
  }

  std::cout << d << "\n";

}

void get_int () {

  int i;
  while(!(std::cin >> i)) {
    std::cin.clear();
    std::cin.ignore();
  }

  std::cout << i << "\n";

}


int main () {

//get_double();
get_int();

return 0;

}
