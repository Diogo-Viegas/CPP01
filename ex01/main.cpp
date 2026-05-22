#include "Zombie.hpp"

int main()
{
    Zombie *zombie_horde;
    std::string name;
    zombie_horde = zombieHorde(4,"Zé");
    for(int i =0;i < 4;i++)
    { 
        name = zombie_horde[i].getName();
        std::cout << "[" << i << "]";
        zombie_horde[i].announce();
        std::cout << std::endl;
    }
    delete [] zombie_horde;
    return (0);
}