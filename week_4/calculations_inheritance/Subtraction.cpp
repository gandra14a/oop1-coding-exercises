#include "Subtraction.hpp"

Subtraction::Subtraction(int a, int b) : Calculation(a, b, '-') {}
int Subtraction::calculate() {return a_ - b_;}

