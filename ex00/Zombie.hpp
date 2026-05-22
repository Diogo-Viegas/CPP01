#ifndef ZOMBIE_H
#define ZOMBIE_H
#include <iostream>
#include <string>
class Zombie
{
    private:
        std::string _name;
    public:
        Zombie(std::string name);
        ~Zombie();
        void announce(void); //<name>: Brainzzzz
};
Zombie *newZombie(std::string name);
void randomChump(std::string name);
#endif