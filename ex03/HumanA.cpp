#include "HumanA.hpp"
#include "Weapon.hpp"

HumanA::HumanA(std::string name, Weapon& weapon)
    : _name(name),_weaponA(weapon) {}

void HumanA::attack() const {
  std::cout << _name << " attacks with their " << _weaponA.getType() << std::endl;
}

HumanA::~HumanA()
{
}
