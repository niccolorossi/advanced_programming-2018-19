#include <iostream>

int try (int n) {
return n;

}

int main()
{
  std::cout << "Hello World!" << std::endl;
  float c = 2.4;
  try(c);
  return 0;
}

//when changing "cout" to "c0ut" the compiler suggests it can in fact be the former
//when forgetting the ; at line 5 it says it was "expected"
//as the header is left out the std functions don't have a definition
//by typing a made up type like "long double int" it says it's not able to combine the int and double specifiers
//when a typo is present in variable names it complains about "undeclared identifiers"
//when applying a function on a different type of variable the compiler complains about "unused values"
