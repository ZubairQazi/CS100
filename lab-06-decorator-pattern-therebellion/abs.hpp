#ifndef __ABS_HPP__
#define __ABS_HPP__

#include <math.h>

#include "decorator.hpp"

class Abs : public Decorator {
    public:
      Abs(Base* o):Decorator(o){
      }
      virtual double evaluate();
};

#endif //__ABS_HPP__
