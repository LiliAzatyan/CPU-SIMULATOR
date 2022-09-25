#include <iostream>
#include <string>
#include <fstream> 
#include <map>
#include "functions.hpp"


void read(std::string);
std::map<std::string, int> map;

int main()
{
    std::string str;
    std::fstream file;
    file.open("myFile.txt");
    if (file.is_open())
    {
        while (getline(file, str))
        {
            read(str);
        }
    }
    else
    {
        std::cout << "File is not open: " << std::endl;
    }
    std::cout << map["r1"] << std::endl;
}
void read(std::string str) 
{
    int index = 0;
    std::string st = "";
    while (str[index] != ' ')
    {
        st += str[index];
        ++index;
    }
    if (st == "mov")
    {
        mov(str);
    }
    else if ( st == "add")
    {
        add(str);
    }
    else if (st == "sub") 
    {
        sub(str);
    }
}

void mov(std::string str)
{
    int index = 0;
    std::string st1 = "";
    std::string st2 = "";
    while (str[index] != ' ')
    {
        ++index;
    }
    while (str[index] == ' ') 
    {
        ++index;
    }
    while (str[index] != ',')
    {
        st1 += str[index];
        ++index;
    }
    ++index;
    while (str[index] != ' ')
    {
        st2 += str[index];
        ++index;
    }

    if (st1 == "r1" || st1 == "r2" || st1 == "r3" || st1 == "r4" || st1 == "r5" || st1 == "r6" || st1 == "r7" || st1 == "r8" || st1 == "r9" || st1 == "r10")
    {
        map[st1];
    }
    if (st2 == "r1" || st2 == "r2" || st2 == "r3" || st2 == "r4" || st2 == "r5" || st2 == "r6" || st2 == "r7" || st2 == "r8" || st2 == "r9" || st2 == "r10")
    {
        map[st1] = map[st2];
    }
    else
    {
        map[st1] = stoi(st2);
    }  
}

void add(std::string str)
{
    int index = 0;
    std::string st1 = "";
    std::string st2 = "";
    while (str[index] != ' ')
    {
        ++index;
    }
    while (str[index] == ' ') 
    {
        ++index;
    }
    while (str[index] != ',')
    {
        st1 += str[index];
        ++index;
    }
    ++index;
    while (str[index] != ' ')
    {
        st2 += str[index];
        ++index;
    }

    if (st1 == "r1" || st1 == "r2" || st1 == "r3" || st1 == "r4" || st1 == "r5" || st1 == "r6" || st1 == "r7" || st1 == "r8" || st1 == "r9" || st1 == "r10")
    {
        map[st1];
    }
    if (st2 == "r1" || st2 == "r2" || st2 == "r3" || st2 == "r4" || st2 == "r5" || st2 == "r6" || st2 == "r7" || st2 == "r8" || st2 == "r9" || st2 == "r10")
    {
        map[st1] += map[st2];
    }
    else
    {
        map[st1] += stoi(st2);
    }  
}

void sub(std::string str)
{
    int index = 0;
    std::string st1 = "";
    std::string st2 = "";
    while (str[index] != ' ')
    {
        ++index;
    }
    while (str[index] == ' ') 
    {
        ++index;
    }
    while (str[index] != ',')
    {
        st1 += str[index];
        ++index;
    }
    ++index;
    while (str[index] != ' ')
    {
        st2 += str[index];
        ++index;
    }

    if (st1 == "r1" || st1 == "r2" || st1 == "r3" || st1 == "r4" || st1 == "r5" || st1 == "r6" || st1 == "r7" || st1 == "r8" || st1 == "r9" || st1 == "r10")
    {
        map[st1];
    }
    if (st2 == "r1" || st2 == "r2" || st2 == "r3" || st2 == "r4" || st2 == "r5" || st2 == "r6" || st2 == "r7" || st2 == "r8" || st2 == "r9" || st2 == "r10")
    {
        map[st1] += map[st2];
    }
    else
    {
        map[st1] -= stoi(st2);
    }  
}

/*void divi(std::string str)
{
    int index = 0;
    std::string st1 = "";
    std::string st2 = "";
    while (str[index] != ' ')
    {
        ++index;
    }
    while (str[index] == ' ') 
    {
        ++index;
    }
    while (str[index] != ',')
    {
        st1 += str[index];
        ++index;
    }
    ++index;
    while (str[index] != ' ')
    {
        st2 += str[index];
        ++index;
    }
    if (st1 == "r1" || st1 == "r2" || st1 == "r3" || st1 == "r4" || st1 == "r5" || st1 == "r6" || st1 == "r7" || st1 == "r8" || st1 == "r9" || st1 == "r10")
    {
        map[st1];
    }
    if (st2 == "r1" || st2 == "r2" || st2 == "r3" || st2 == "r4" || st2 == "r5" || st2 == "r6" || st2 == "r7" || st2 == "r8" || st2 == "r9" || st2 == "r10")
    {
        map[st1] = map[st2];
    }
    else
    {
        map[st1] = stoi(st2);
    }

}*/

void mul(std::string str)
{
    int index = 0;
    std::string st1 = "";
    std::string st2 = "";
    while (str[index] != ' ')
    {
        ++index;
    }
    while (str[index] == ' ') 
    {
        ++index;
    }
    while (str[index] != ',')
    {
        st1 += str[index];
        ++index;
    }
    ++index;
    while (str[index] != ' ')
    {
        st2 += str[index];
        ++index;
    }
    if (st1 == "r1" || st1 == "r2" || st1 == "r3" || st1 == "r4" || st1 == "r5" || st1 == "r6" || st1 == "r7" || st1 == "r8" || st1 == "r9" || st1 == "r10")
    {
        map[st1];
    }
    if (st2 == "r1" || st2 == "r2" || st2 == "r3" || st2 == "r4" || st2 == "r5" || st2 == "r6" || st2 == "r7" || st2 == "r8" || st2 == "r9" || st2 == "r10")
    {
        map[st1] += map[st2];
        map[st1] * map[st2];
    }
    else
    {
        map[st1] += stoi(st2);
    }    
}




