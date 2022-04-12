#include <iostream>

using std::cout;
using std::endl;

void print_pet_info(char* pet_species, unsigned pet_age)
{
  cout << "That's a " << pet_age << "-year-old " << pet_species << "." << endl;
  // alternatively:
  // include stdio with #include <cstdio>
  // printf("That's a %u-year-old %s.\n", pet_age, pet_species);
}

void happy_birthday_with_pointer(unsigned* pet_age_ptr)
{
  (*pet_age_ptr)++;
}

void happy_birthday_with_reference(unsigned& pet_age_ref) // Would this work with an unsigned instead of unsigned reference? Try it out! :) (Hint: If we don't use a reference, then the function gets a *copy* of the unsigned. If we increment this copy, the original age remains unchanged.)
{
  pet_age_ref++;
}

int main()
{
  char first_pet_species[] = "bunny";
  unsigned first_pet_age = 3;
  char second_pet_species[] = "dog";
  unsigned second_pet_age = 14;
  
  print_pet_info(first_pet_species, first_pet_age);
  print_pet_info(second_pet_species, second_pet_age);
  
  happy_birthday_with_pointer(&first_pet_age);
  happy_birthday_with_reference(second_pet_age);
  
  print_pet_info(first_pet_species, first_pet_age);
  print_pet_info(second_pet_species, second_pet_age);
  
  return 0;
}