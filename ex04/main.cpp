#include <iostream>
#include <fstream>

int main (int argc, char** argv)
{
    if(argc < 4)
    {
        std::cout << "invalid number of arguments" << std::endl;
        return 1;
    }
    std::string filename = argv[1];
    std::string     compareString = argv[2];
    std::string     inputString;
    std::string     replacementString = argv[3];
    int             i = 0;
    int             compareCount = 0;
    std::ifstream    inputFileStream(filename);
    std::ofstream    outputFileStream(filename + ".replace");
    while(getline(inputFileStream, inputString)){}
    inputFileStream.close();
    while(i < inputString.length())
    {
        while (compareString[compareCount] == inputString[i + compareCount])
        {
            compareCount++;
            if (compareCount == compareString.length()) {
                outputFileStream << replacementString;
                i = i + compareCount;
            }
        }
        if (compareString[compareCount] != inputString[i])
        {
            outputFileStream << inputString[i];
            compareCount = 0;
        }
        if (i < inputString.length())
            i++;
    }
    outputFileStream.close();
}