#ifndef NOR_H_INCLUDED
#define NOR_H_INCLUDED

#include "Gate.h"
#include "OR.h"
#include "NOT.h"
#include<iostream>
#include <vector>
using namespace std;

class NOR : public NOT, public OR
{
    private:
        bool output;
    public:
        NOR();
        ~NOR();
        void read();
        bool calcResult();
        void display();
        void addLogEntry();
        bool getOuput();
};



#endif // NOR_H_INCLUDED
