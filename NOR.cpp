#include "NOR.h"
#include <iostream>
#include <vector>
#include<ctime>
#include<chrono>
#include<fstream>
using namespace std;

NOR::NOR()
{
    output = 0;
}

NOR::~NOR()
{

}

void NOR::read()
{
    OR::read();
}

bool NOR::calcResult()
{
    bool result = OR::calcResult(OR::getInput1(), OR::getInput2());
    output = NOT::calcResult(result);
}

void NOR::display()
{
    cout << "OUTPUT : " << output << endl;
}

void NOR::addLogEntry()
{
    ofstream entry("LOG.txt",ios::app);
    if(!entry.is_open())
    {
        cout<<"File is not opened!!";
    }


    // Here system_clock is wall clock time from
    // the system-wide realtime clock
    auto timenow =chrono::system_clock::to_time_t(chrono::system_clock::now());

    entry<< "USER - AT :";
    entry<<string(ctime(&timenow))+"Added an NOR gate has been added successfully\n";
    entry.close();
}

bool NOR::getOuput()
{
    return output;
}
