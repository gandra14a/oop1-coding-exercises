#include "Cactus.hpp"
#include <iostream>

using std::cout;

void Cactus::waterPlant(int amount_of_water)
{
  water_level_ += amount_of_water;
  if (water_level_ > ALLOWED_WATER_LEVEL)
  {
    cout << "  Help I am drowning.\n";
  }
}