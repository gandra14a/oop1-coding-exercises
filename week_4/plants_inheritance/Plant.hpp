#ifndef PLANT_HPP
#define PLANT_HPP


class Plant
{
  protected:
    int water_level_;
    const int NEEDED_WATER_;

  public:
    Plant(int needed_water);
    Plant();
    virtual ~Plant() {}
    virtual void waterPlant(int amount_of_water);
};

#endif
