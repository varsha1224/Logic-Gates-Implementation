#include "XOR.h"
#include <iostream>
#include <vector>
#include<ctime>
#include<chrono>
#include<fstream>
using namespace std;

XOR::XOR()
{
    input1 = 0;
    input2 = 0;
    output = 0;
}

XOR::~XOR()
{

}

XOR::XOR(bool val1, bool val2)
{
    input1 = val1;
    input2 = val2;
}

void XOR::read()
{
    do
    {
        try
        {
            cout << "Enter the first input : ";
            cin >> input1;
            cout << "Enter the second input : ";
            cin >> input2;
            if ((input1 != 0 && input1 != 1) || (input2 != 0 && input2 != 1))
            {
                throw 33;
            }
        }
        catch (int x)
        {
            cout << "Please enter valid inputs" << endl;
        }
    }while ((input1 != 0 && input1 != 1) || (input2 != 0 && input2 != 1));
}

bool XOR::calcResult(bool val1, bool val2)
{
    output = val1 ^ val2;
    return output;
}

void XOR::display()
{
    cout << "OUTPUT : " << output << endl;
}

void XOR::addLogEntry()
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
    entry<<string(ctime(&timenow))+"Added an XOR gate has been added successfully\n";
    entry.close();


}

bool XOR::getInput1()
{
    return input1;
}

bool XOR::getInput2()
{
    return input2;
}

bool XOR::getOuput()
{
    return output;
}
