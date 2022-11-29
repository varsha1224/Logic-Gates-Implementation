#ifndef OR_H_INCLUDED
#define OR_H_INCLUDED

#include "Gate.h"
#include<iostream>
#include <vector>
using namespace std;
class OR
{
    private:
        /*vector <bool> inputs;
        int n;*/
        bool input1;
        bool input2;
        bool output;
    public:
        OR();
        ~OR();
        OR(bool, bool);
        void read();
        bool calcResult(bool, bool);
        void display();
        void addLogEntry();
        bool getInput1();
        bool getInput2();
        bool getOuput();
};

#endif // OR_H_INCLUDED
