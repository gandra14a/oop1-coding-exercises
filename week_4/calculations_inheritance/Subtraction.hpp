#ifndef SUB_HPP
#define SUB_HPP

#include "Calculation.hpp"

class Subtraction : public Calculation
{
  public:
    Subtraction(int a, int b);
    int calculate();

};


#endif