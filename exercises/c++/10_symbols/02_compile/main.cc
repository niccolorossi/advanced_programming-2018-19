#include "utility.h"
#include "foo.h"
#include <string>
#include <iostream>

int main()
{
  print_lower("EXPECT TO SEE LOWER CASE");
  std::string bar;
  Foo foo(bar);
  print_upper("expect to see upper case");
  std::cout << Foo::f << foo.bar << " " << to_lower(foo.bar) << std::endl;
  return 0;
}
