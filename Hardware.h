//
// Created by Marius on 2/23/2021.
//

#ifndef TASK4COMPOSITE_HARDWARE_H
#define TASK4COMPOSITE_HARDWARE_H
#include <iostream>
#include "Component.h"

class Hardware : public Component{
public:
  Hardware(const std::string &name, double price);
  void ShowDetails() override;
  double GetPrice() override;
private:
  std::string name;
  double price;

};


#endif //TASK4COMPOSITE_HARDWARE_H
