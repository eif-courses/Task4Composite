//
// Created by Marius on 2/23/2021.
//

#ifndef TASK4COMPOSITE_COMPOSITE_H
#define TASK4COMPOSITE_COMPOSITE_H


#include "Component.h"
#include <iostream>
#include <vector>

class Composite : public Component{
public:
  Composite(const std::string &name);
  void ShowDetails() override;
  double GetPrice() override;
  void AddComponent(Component *component);


private:
  std::string name;
  std::vector<Component*> components;
};


#endif //TASK4COMPOSITE_COMPOSITE_H
