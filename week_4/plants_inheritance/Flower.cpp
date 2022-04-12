#include "Flower.hpp"

Flower::Flower() : Plant(), blossom_{false} {}


bool Flower::getBlossom() {return blossom_;}
void Flower::setBlossom(bool blossom) {blossom_ = blossom;}

