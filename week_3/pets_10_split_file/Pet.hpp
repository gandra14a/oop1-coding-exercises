#ifndef PET_HPP
#define PET_HPP

#include <iostream>


enum class Species {DOG, PIG, CAT, BUNNY, UNKNOWN};

struct Pet
{
  private:
    Species species_;
    unsigned age_;
    unsigned id_;
    static unsigned cumulative_number_of_pets_;
    static unsigned current_number_of_pets_;

  public:

  Pet();
  Pet(Species species);
  Pet(Species species, unsigned age);
  Pet(Pet& other);
  ~Pet();
  Species getSpecies();
  unsigned getAge();
  unsigned getId();
  static unsigned getCumulativeNumberOfPets() {return cumulative_number_of_pets_;};
  static unsigned getCurrentNumberOfPets(){return current_number_of_pets_;};
  void greet();
  void happy_birthday();

};





#endif // PET_HPP