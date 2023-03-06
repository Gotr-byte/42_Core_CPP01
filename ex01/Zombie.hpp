#pragma once

#include <string.h>
#include <iostream>

class Zombie {
    public:
        Zombie();
        ~Zombie();
        void setName(std::string inName);
        void    announce();
    private:
        std::string name;
};
