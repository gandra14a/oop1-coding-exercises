#ifndef FLOWER_HPP
#define FLOWER_HPP

#include "Plant.hpp"

class Flower : public Plant
{
  private:
    bool blossom_;
  public:
    Flower();
    virtual ~Flower() {}
    bool getBlossom();
    void setBlossom(bool blossom);

};

#endif