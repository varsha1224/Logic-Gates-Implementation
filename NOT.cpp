#include<ctime>
#include<chrono>
#include<fstream>
#include "NOT.h"
#include <iostream>
#include <vector>
using namespace std;

NOT::NOT()
{
    input = 0;
    output = 0;
}

NOT::NOT(bool val)
{
    input = val;
}

NOT::~NOT()
{

}

void NOT::read()
{
    do
    {
        try
        {
            cout << "Enter the value : ";
            cin >> input;
            if (input != 0 && input != 1)
            {
                throw 20;
            }
        }
        catch (int x)
        {
            cout << "Enter valid input" << endl;
        }
    }while(input != 0 && input != 1);
}

bool NOT::calcResult(bool inputVal)
{
    if (inputVal == 0)
        output = 1;
    else
        output = 0;
    return output;
}

void NOT::display()
{
    cout << "OUTPUT : " << output << endl;
}

bool NOT::getinput()
{
    return input;
}

void NOT::addLogEntry()
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
    entry<<string(ctime(&timenow))+"Added an NOT gate has been added successfully\n";
    entry.close();
}
