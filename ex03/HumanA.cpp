#include "HumanA.hpp"
#include "Weapon.hpp"

HumanA::HumanA(std::string name, Weapon& weapon)
    : _name(name),_weaponA(weapon) {}

void HumanA::attack() const {
  std::cout << this->_name << " attacks with their " << this->_weaponA.getType() << std::endl;
}

HumanA::~HumanA()
{

}
