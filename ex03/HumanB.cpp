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
  std::cout << _name << " attacks with their ";
  if(_weaponB)
    std::cout << _weaponB->getType() << std::endl;
  else
    std::cout << "fists" << std::endl;

}
HumanB::~HumanB()
{

}
