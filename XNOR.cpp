#include "XNOR.h"
#include <iostream>
#include <vector>
#include<ctime>
#include<chrono>
#include<fstream>
using namespace std;

XNOR::XNOR()
{
    input1 = 0;
    input2 = 0;
    output = 0;
}

XNOR::~XNOR()
{

}

XNOR::XNOR(bool val1, bool val2)
{
    input1 = val1;
    input2 = val2;
}

void XNOR::read()
{
    XOR::read();
}

bool XNOR::calcResult()
{
    bool result = XOR::calcResult(XOR::getInput1(), XOR::getInput2());
    output = NOT::calcResult(result);
    return output;
}

void XNOR::display()
{
    cout << "OUTPUT : " << output << endl;
}

void XNOR::addLogEntry()
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
    entry<<string(ctime(&timenow))+"Added an XNOR gate has been added successfully\n";
    entry.close();


}

bool XNOR::getOuput()
{
    return output;
}
