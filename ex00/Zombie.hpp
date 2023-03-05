#pragma once

#include <string.h>
#include <iostream>

class Zombie {
    public:
        Zombie( std::string inName );
        ~Zombie( void );

        void    announce( void );
    private:
        std::string name;
};
