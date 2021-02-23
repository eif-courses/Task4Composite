//
// Created by Marius on 2/23/2021.
//

#include "Hardware.h"

Hardware::Hardware(const std::string &name, double price) : name(name), price(price) {}

void Hardware::ShowDetails() {
  std::cout << name << ", price = " << price << std::endl;
}
double Hardware::GetPrice() {
  return price;
}
