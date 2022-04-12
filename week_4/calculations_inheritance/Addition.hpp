#ifndef ADD_HPP
#define ADD_HPP

#include "Calculation.hpp"

class Addition : public Calculation
{
  public:
    Addition(int a, int b);
    int calculate()override;


};


#endif