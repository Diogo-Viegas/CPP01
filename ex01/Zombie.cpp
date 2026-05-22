#include "Zombie.hpp"

Zombie::Zombie()
{
    std::cout << "Zombie " << _name << " created" << std::endl;
}
Zombie::~Zombie()
{
    std::cout<< "Zombie " << _name << " has been destroyed" << std::endl;
}
void Zombie::announce(void)
{
    std::cout << _name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
void Zombie::setName(std::string name)
{
    this->_name = name;
}
std::string Zombie::getName( )
{
    return (this->_name);
}