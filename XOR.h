#ifndef XOR_H_INCLUDED
#define XOR_H_INCLUDED

#include <iostream>
#include <vector>
#include "Gate.h"
using namespace std;

class XOR
{
    private:
        bool input1, input2;
        bool output;

    public:
        XOR();
        XOR(bool, bool);
        ~XOR();
        void read();
        bool calcResult(bool, bool);
        void display();
        void addLogEntry();
        bool getInput1();
        bool getInput2();
        bool getOuput();
};


#endif // XOR_H_INCLUDED
