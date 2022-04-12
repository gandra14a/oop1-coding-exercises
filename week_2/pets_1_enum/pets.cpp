#include <cstring>
#include <iostream>

using std::cout;
using std::endl;

// TODO write your enum class here
enum class animal
{
  DOG,
  PIG,
  CAT,
  BUNNY,
  UNKNOWN
};



// TODO change the greet function, such that it uses the enum class
void greet(animal spec)
{
  if (spec == animal::DOG)
  {
    cout << "[Dog] Woof woof" << endl;
  }
  else if (spec == animal::PIG)
  {
    cout << "[Pig] Oink oink" << endl;
  }
  else if (spec == animal::CAT)
  {
    cout << "[Cat] (silence)" << endl; // cats just ignore others...
  }
  else if (spec == animal::BUNNY)
  {
    cout << "[Bunny] (silence)" << endl; // bunnies are not that talkative...
  }
  else
  {
    cout << "Hmm, what kind of animal is that?" << endl;
  }
}

// TODO: change the main function, such that it uses the enum class
int main()
{
  // char first_pet_species[]{ "bunny" };
  // char second_pet_species[]{ "dog" };
  // char third_pet_species[]{ "pig" };
  // char fourth_pet_species[]{ "cat" };
  // char fifth_pet_species[]{ "sheep" }; // a sheep shall be an unknown species in this example
  
  animal first_pet_species{animal::BUNNY};
  animal second_pet_species{animal::DOG};
  animal third_pet_species{animal::PIG};
  animal fourth_pet_species{animal::CAT};
  animal fifth_pet_species{animal::UNKNOWN};


  greet(first_pet_species);
  greet(second_pet_species);
  greet(third_pet_species);
  greet(fourth_pet_species);
  greet(fifth_pet_species);
  
  return 0;
}
