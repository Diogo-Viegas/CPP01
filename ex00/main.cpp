#include "Zombie.hpp"

int main()
{
    Zombie *heapZombie;
    heapZombie = newZombie("Zé");
    heapZombie->announce();
    randomChump("Manel");
    std::cout << "fim do main" << std::endl ;
    delete heapZombie;
    return (0);
}