#include <iostream>

using std::cout;
using std::endl;

enum class Species {DOG, PIG, CAT, BUNNY, UNKNOWN};

// TODO: define a new data type for pets

struct animal
{
  Species spec;
  unsigned age;


};


void greet(animal anim) // TODO: change the parameter; then change the function body accordingly
{
  if (anim.spec == Species::DOG)
  {
    cout << "[Dog] Woof woof" << endl;
  }
  else if (anim.spec == Species::PIG)
  {
    cout << "[Pig] Oink oink" << endl;
  }
  else if (anim.spec == Species::CAT)
  {
    cout << "[Cat] (silence)" << endl; // cats just ignore others...
  }
  else if (anim.spec == Species::BUNNY)
  {
    cout << "[Bunny] (silence)" << endl; // bunnies are not that talkative...
  }
  else if (anim.spec == Species::UNKNOWN)
  {
    cout << "Hmm, what kind of animal is that?" << endl;
  }
  else
  {
    // If we add new possible values to the species type, but forget to consider these values
    // in this function, we will get an error message (if the function is called with such a new value).
    cout << "ERROR: seems like we forgot to consider this species in this function" << endl;
  }
}

int main()
{
  // TODO: reduce the number of variables using the new data type
  animal first_pet_species{ Species::BUNNY, 3 };
 

  animal second_pet_species{ Species::DOG, 5 };

  
  animal third_pet_species{ Species::PIG, 0 };

  
  animal fourth_pet_species{ Species::CAT, 7 };

  
  animal fifth_pet_species{ Species::UNKNOWN, 8 };

  
  // TODO: update these function calls accordingly
  greet(first_pet_species);
  greet(second_pet_species);
  greet(third_pet_species);
  greet(fourth_pet_species);
  greet(fifth_pet_species);
  
  return 0;
}
