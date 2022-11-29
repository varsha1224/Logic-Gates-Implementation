#ifndef NAND_H_INCLUDED
#define NAND_H_INCLUDED

#include "Gate.h"
#include "AND.h"
#include "NOT.h"
#include<iostream>
#include <vector>
using namespace std;

class NAND : public NOT, public AND
{
    private:
        //vector <bool> inputs;
        //int n;
        bool output;
    public:
        NAND();
        ~NAND();
        void read();
        bool calcResult();
        void display();
        void addLogEntry();
        bool getOuput();
};

#endif // NAND_H_INCLUDED
