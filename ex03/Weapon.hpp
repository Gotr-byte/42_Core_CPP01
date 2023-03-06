#pragma once

#include <iostream>

class Weapon{
public:
    Weapon(std::string inType);
    ~Weapon();

    std::string const   &getType();
    void                setType(std::string inType);
private:
    std::string         type;
};