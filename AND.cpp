#include "AND.h"
#include <iostream>
#include<chrono>
#include<ctime>
#include <vector>
#include<fstream>
using namespace std;

AND::AND()
{
    input1 = 0;
    input2 = 0;
    output = 0;
}

AND::AND(bool val1, bool val2)
{
    input1 = val1;
    input2 = val2;
}

AND::~AND()
{

}

void AND::read()    // To take the inputs from the user
{
    do
    {
        cout << "Enter the first input : ";
        cin >> input1;
        cout << "Enter the second input : ";
        cin >> input2;

        try
        {
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

bool AND::calcResult(bool val1, bool val2)
{
    output = val1 * val2;
    return output;
}

void AND::display()
{
    cout << "OUTPUT : " << output << endl;
}

void AND::addLogEntry()
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
    entry<<string(ctime(&timenow))+"Added an AND gate has been added successfully\n";
    entry.close();


}

bool AND::getInput1()
{
    return input1;
}

bool AND::getInput2()
{
    return input2;
}

bool AND::getOuput()
{
    return output;
}
