#include "HumanB.hpp"

HumanB::HumanB(std::string name) {
  _name = name;
  _weaponB = 0;
}

void HumanB::setWeapon(Weapon &weapon) {
   _weaponB = &weapon;
}

void HumanB::attack() const
{
  std::cout << this->_name << " attacks with their ";
  if(this->_weaponB)
    std::cout << this->_weaponB->getType() << std::endl;
  else
    std::cout << "fists" << std::endl;

}

HumanB::~HumanB()
{

}
