#include "Wire.h"
#include <iostream>

using namespace std;

Wire::Wire()
{
    buffer = 0;
}

Wire::Wire(bool val)
{
    buffer = val;
}

Wire::~Wire()
{

}

void Wire::getOutput(bool value)
{
    buffer = value;
}

bool Wire::returnInput()
{
    return buffer;
}
