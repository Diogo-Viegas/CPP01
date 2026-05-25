#include "Harl.hpp"

int main(int argc, char **argv)
{
    if(argc != 2)
    {
        std::cerr << "usage ./harlFilter <level>" << std::endl;
        return (1);
    }

    int option = 0;
    std::string level = argv[1];
    if(level == "DEBUG")
        option = 1;
    else if(level == "INFO")
        option = 2;
    else if(level == "WARNING")
        option = 3;
    else if(level == "ERROR")
        option = 4;

    Harl harl;

    switch (option) {
    case 1:
        harl.complain("DEBUG");
        std::cout << std::endl;
    case 2:
        harl.complain("INFO");
        std::cout << std::endl;
    case 3:
        harl.complain("WARNING");
        std::cout << std::endl;
    case 4:
        harl.complain("ERROR");
        std::cout << std::endl;
        break;
    default:
        std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
    }

    return (0);
}
