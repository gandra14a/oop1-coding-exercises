#ifndef CALC_HPP
#define CALC_HPP

class Calculation
{
  protected:
    int a_;
    int b_;
    const char operator_symbol_;

  public:
    Calculation(int a, int b, const char operator_symbol) : a_{a}, b_{b}, operator_symbol_{operator_symbol} {}

    virtual int calculate() = 0;

    int getA();
    int getB();
    const char getOperatorSymbol();


};


#endif