// if you use cout (encouraged), you will need these three lines:
#include <iostream>
using std::cout;
using std::endl;

// if you want to use printf, you will need this line:
#include <cstdio>
// you can try cout as well as printf in order to compare these two solutions

// TODO: write the missing functions here
void print_pet_info(char *pet_spec, unsigned pet_age)
{
  cout << "That's a " << pet_age << "-year-old " << pet_spec << "." << endl;
}

void happy_birthday_with_pointer(unsigned *pet_age)
{
  (*pet_age)++;
}

void happy_birthday_with_reference(unsigned &pet_age)
{
  pet_age++;
}
int main()
{
  char first_pet_species[] = "bunny";
  unsigned first_pet_age = 3;
  char second_pet_species[] = "dog";
  unsigned second_pet_age = 14;
  
  print_pet_info(first_pet_species, first_pet_age); // "That's a 3-year-old bunny.\n"
  print_pet_info(second_pet_species, second_pet_age); // "That's a 14-year-old dog.\n"
  
  happy_birthday_with_pointer(&first_pet_age);
  happy_birthday_with_reference(second_pet_age);
  
  print_pet_info(first_pet_species, first_pet_age); // "That's a 4-year-old bunny.\n"
  print_pet_info(second_pet_species, second_pet_age); // "That's a 15-year-old dog.\n"
  
  return 0;
}