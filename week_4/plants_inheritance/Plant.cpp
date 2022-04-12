#include "Plant.hpp"
#include <iostream>

using std::cout;


Plant::Plant(int needed_water) 
  : NEEDED_WATER_{needed_water}, water_level_{0} {}

Plant::Plant()
  : NEEDED_WATER_{10}, water_level_{0} {}

void Plant::waterPlant(int amount_of_water)
{
  water_level_ += amount_of_water;
  if (water_level_ > NEEDED_WATER_)
  {
    cout << "  Thank you for watering me.\n";
  }
}

