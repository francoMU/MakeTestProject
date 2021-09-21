#include <iostream>

#include "foo.hpp"
#include "boo.hpp"

int main() {

  Foo foo(10);
  Boo boo{};

  boo.getIt();

  std::cout << "Hello, World!" << std::endl;
  return 0;
}
