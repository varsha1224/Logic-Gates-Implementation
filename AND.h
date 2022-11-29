#ifndef AND_H_INCLUDED
#define AND_H_INCLUDED
#include <iostream>
#include <vector>
#include "Gate.h"
using namespace std;

class AND
{
    private:
        bool input1;
        bool input2;
        bool output;

    public:
        AND();
        AND(bool, bool);
        ~AND();
        void read();
        bool calcResult(bool, bool);
        void display();
        void addLogEntry();
        bool getInput1();
        bool getInput2();
        bool getOuput();
};


#endif // AND_H_INCLUDED
