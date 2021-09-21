//
// Created by F.Moitzi on 21.09.2021.
//

#include "boo.hpp"

#include "baz.hpp"
#include "head.hpp"

int Boo::getIt() {
  common_method(variable);
  printIt(variable);
  return variable;
}
