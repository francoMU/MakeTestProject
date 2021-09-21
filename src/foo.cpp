//
// Created by F.Moitzi on 21.09.2021.
//

#include "foo.hpp"

#include "head.hpp"
#include "gaz/gaz.hpp"

Foo::Foo(int test) : test{test} {
  common_method(test);
  printIt(test);

  Gaz gaz(1,2,3);
  gaz.print();

}
