#include "Addition.hpp"

Addition::Addition(int a, int b) : Calculation(a, b, '+') {}
int Addition::calculate() {return a_ + b_;}