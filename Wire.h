#ifndef WIRE_H_INCLUDED
#define WIRE_H_INCLUDED

#include <iostream>

using namespace std;

class Wire
{
    private:
        bool buffer;
    public:
        Wire();
        Wire(bool);
        ~Wire();
        void getOutput(bool value);
        bool returnInput();
};

#endif // WIRE_H_INCLUDED
