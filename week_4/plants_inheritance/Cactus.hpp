#ifndef CACTUS_HPP
#define CACTUS_HPP

#include "Plant.hpp"

class Cactus : public Plant
{
  private:
    const int ALLOWED_WATER_LEVEL{1};
  public:
    Cactus() : Plant(0) {}
    virtual ~Cactus() {}
    void waterPlant(int amount_of_water) override;


};

#endif