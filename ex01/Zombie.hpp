#pragma once

#include <string.h>
#include <iostream>

class Zombie {
    public:
        Zombie();
        ~Zombie( void );
        void setName(std::string inName);
        void    announce( void );
    private:
        std::string name;
};
