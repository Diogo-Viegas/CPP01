#include "Zombie.hpp"

Zombie::Zombie(std::string name)
{
    this->_name = name;
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