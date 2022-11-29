#ifndef XNOR_H_INCLUDED
#define XNOR_H_INCLUDED

#include <iostream>
#include <vector>
#include "Gate.h"
#include "XOR.h"
#include "NOR.h"
using namespace std;

class XNOR : public XOR, public NOT
{
    private:
        bool input1, input2;
        bool output;

    public:
        XNOR();
        XNOR(bool, bool);
        ~XNOR();
        void read();
        bool calcResult();
        void display();
        void addLogEntry();
        bool getOuput();
};

#endif // XNOR_H_INCLUDED
