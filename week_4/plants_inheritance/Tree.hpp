#ifndef TREE_HPP
#define TREE_HPP

#include "Plant.hpp"

class Tree : public Plant
{
  private:
    bool full_grown_;
  public:
    Tree() : Plant(), full_grown_{false} {}
    virtual ~Tree() {}
    bool getFullGrown();
    void setFullGrown();
};

#endif