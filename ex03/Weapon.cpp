#include "Weapon.hpp"

Weapon::Weapon(std::string weaponType)
{
 this->_type = weaponType;
}
Weapon::~Weapon()
{

}
const std::string& Weapon::getType()
{
	return(this->_type);
}
void Weapon::setType(std::string weaponType)
{
	this->_type = weaponType;
}
