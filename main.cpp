#include <iostream>
#include "Composite.h"
#include "Hardware.h"

int main() {

  auto *computer = new Composite("COMPUTER");
  auto *cabinet = new Composite("CABINET");
  auto *peripherals = new Composite("PERIPHERALS");
  auto *motherboard = new Composite("MOTHERBOARD");

  auto *hdd = new Hardware("Seagate Hybrid 2 TB", 120.56);
  auto *ram = new Hardware("Crucial 16GB 2XT", 240.26);
  auto *cpu = new Hardware("Intel X9 Xeon", 540.22);
  auto *mouse = new Hardware("Razer Naga 2021", 180.86);
  auto *keyboard = new Hardware("Logitech X200", 55.55);
  auto *monitor = new Hardware("Dell TPI 204K", 300.00);

  computer->AddComponent(cabinet);
  computer->AddComponent(peripherals);

  cabinet->AddComponent(hdd);
  cabinet->AddComponent(motherboard);

  motherboard->AddComponent(ram);
  motherboard->AddComponent(cpu);

  peripherals->AddComponent(mouse);
  peripherals->AddComponent(keyboard);
  peripherals->AddComponent(monitor);

  motherboard->ShowDetails();
 std::cout <<"TOTAL PRICE: " << motherboard->GetPrice();



  return 0;
}
