#include <iostream>

int main()
{
    std::string sentence= "HI THIS IS BRAIN";
    std::string *stringPTR = &sentence;
    std::string &stringREF = sentence;

    std::cout << "Memory address of string variable: "<< &sentence << std::endl;
    std::cout << "Memory address held by stringPTR: " << stringPTR << std::endl;
    std::cout << "Memory address held by stringREF: " << &stringREF << std::endl;

    std::cout << "Value of string variable: " << sentence << std::endl;
    std::cout << "Value pointed to by stringPTR: " << *stringPTR << std::endl;
    std::cout << "Value pointed to by stringREF: " << stringREF << std::endl;
}