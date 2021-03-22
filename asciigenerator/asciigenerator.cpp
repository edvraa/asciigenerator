// asciigenerator.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <fstream>

int main()
{
    std::ofstream myfile;
    myfile.open("example.txt");

    char buf[10];
    for (int i = 0; i < 256; i++)
    {
        sprintf_s(buf, "%c\n", i);
        myfile << std::string(buf);
    }

    myfile.close();
}
