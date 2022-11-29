#include "OR.h"
#include<ctime>
#include<chrono>
#include <iostream>
#include <vector>
#include<fstream>
using namespace std;

OR::OR()
{
    input1 = 0;
    input2 = 0;
    output = 0;
}

OR::~OR()
{

}

OR::OR(bool val1, bool val2)
{
    input1 = val1;
    input2 = val2;
}

void OR::read()
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

bool OR::calcResult(bool val1, bool val2)
{
    if (input1 == 1 || input2 == 1)
        output = 1;
    else
        output = 0;
    return output;
}

void OR::display()
{
    cout << "OUTPUT : " << output << endl;
}

void OR::addLogEntry()
{
    ofstream entry("LOG.txt",ios::app);
    if(!entry.is_open())
    {
        cout<<"File is not opened!!";
    }


    // Here system_clock is wall clock time from
    // the system-wide real time clock
    auto timenow =chrono::system_clock::to_time_t(chrono::system_clock::now());

    entry<< "USER - AT :";
    entry<<string(ctime(&timenow))+"Added an OR gate has been added successfully\n";
    entry.close();
}

bool OR::getInput1()
{
    return input1;
}

bool OR::getInput2()
{
    return input2;
}

bool OR::getOuput()
{
    return output;
}
