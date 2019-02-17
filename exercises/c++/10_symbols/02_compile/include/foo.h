#include "utility.h"

#ifndef __FOO_H
#define __FOO_H

extern std::string to_upper(const std::string& os);

struct Foo {
  static double f;
  std::string bar;
  Foo() = delete;
  Foo(const std::string& s) : bar{to_upper(s)} {};
};

double Foo::f;

#endif
