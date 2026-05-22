#ifndef ZOMBIE_H
#define ZOMBIE_H
#include <iostream>
#include <string>
class Zombie
{
    private:
        std::string _name;
    public:
        Zombie();
        ~Zombie();
        void announce(void); //<name>: Brainzzzz
        void setName(std::string name);
        std::string getName(void);
};
Zombie* zombieHorde(int n,std::string name);
#endif