//
// Created by F.Moitzi on 21.09.2021.
//

#include "gaz.hpp"

#include <iostream>

Gaz::Gaz(int x, int y, int z) {
  std::cout << x << std::endl;
  std::cout << y << std::endl;
  std::cout << z << std::endl;
}

void Gaz::print() {
  std::cout << "TEST" << std::endl;
}
