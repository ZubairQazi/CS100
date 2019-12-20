#ifndef __CEIL_HPP__
#define __CEIL_HPP__

#include <math.h>

#include "decorator.hpp"

class Ceil : public Decorator {
    public:
      Ceil(Base* o):Decorator(o){}
      virtual double evaluate();
};

#endif //__CEIL_HPP__
