#include <iostream>
#include <fstream>

int main ()
{
    std::string     compareString = "poo";
    std::string     inputString; //input file string here
    std::string     replacementString = "starcraft";
    int             i = 0;
    int             compareCount = 0;
    std::ifstream    inputFileStream("testInputFile.txt");
    std::ofstream    outputFileStream("testOutputFile.txt");
    while(getline(inputFileStream, inputString))
        inputFileStream >> inputString;
    inputFileStream.close();
    while(i < inputString.length())
    {
        while (compareString[compareCount] == inputString[i + compareCount])
        {
            compareCount++;
            if (compareCount == compareString.length()) {
                outputFileStream << replacementString; //output file here
                i = i + compareCount;
            }
        }
        if (compareString[compareCount] != inputString[i])
        {
            outputFileStream << inputString[i]; //output file here
            compareCount = 0;
        }
        if (i < inputString.length())
            i++;
    }
    outputFileStream.close();
}