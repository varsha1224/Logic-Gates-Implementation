#include<ctime>
#include<chrono>
#include<fstream>
#include "NAND.h"
#include <iostream>
#include <vector>
using namespace std;

NAND::NAND()
{
    output = 0;
}

NAND::~NAND()
{

}

void NAND::read()
{
    AND::read();
}

bool NAND::calcResult()
{
    bool result = AND::calcResult(AND::getInput1(), AND::getInput2());
    output = NOT::calcResult(result);
}

void NAND::display()
{
    cout << "OUTPUT : " << output << endl;
}

void NAND::addLogEntry()
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
    entry<<string(ctime(&timenow))+"Added an NAND gate has been added successfully\n";
    entry.close();


}


bool NAND::getOuput()
{
    return output;
}
