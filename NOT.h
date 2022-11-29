#ifndef NOT_H_INCLUDED
#define NOT_H_INCLUDED

#include "Gate.h"
#include<iostream>
#include <vector>
using namespace std;
class NOT
{
    private:
        bool input;
        bool output;
    public:
        NOT();
        NOT(bool);
        ~NOT();
        void read();
        bool calcResult(bool);
        void display();
        bool getinput();
        void addLogEntry();
};


#endif // NOT_H_INCLUDED
