//
// Created by Marius on 2/23/2021.
//

#include "Composite.h"

Composite::Composite(const std::string &name) : name(name) {}

void Composite::ShowDetails() {
  std::cout << "========================================" << std::endl;
  std::cout << name << std::endl;
  std::cout << "========================================" << std::endl;

  for(Component *c: components){
    c->ShowDetails();
  }

}

double Composite::GetPrice() {
  double total = 0;
  for (Component *c: components) {
    total += c->GetPrice(); // total = total + c.GetPrice();
  }
  return total;
}

void Composite::AddComponent(Component *component) {
  components.emplace_back(component);
}
