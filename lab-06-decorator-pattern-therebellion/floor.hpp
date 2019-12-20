#ifndef __FLOOR_HPP__
#define __FLOOR_HPP__

#include <math.h>

#include "decorator.hpp"

class Floor : public Decorator {
    public:
      Floor(Base* o):Decorator(o){};
      virtual double evaluate();
};

#endif //__FLOOR_HPP__
