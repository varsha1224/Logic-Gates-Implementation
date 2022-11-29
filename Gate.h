#ifndef GATE_H_INCLUDED
#define GATE_H_INCLUDED

#include <iostream>
#include "Wire.h"

using namespace std;

class Gate
{
    public:
        virtual void read() = 0;
        virtual void display() = 0;
        virtual void addLogEntry() = 0;
        friend class Wire;
};

#endif // GATE_H_INCLUDED
