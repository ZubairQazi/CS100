#ifndef __ABS_HPP__
#define __ABS_HPP__

#include <math.h>

#include "decorator.hpp"

class Abs : public Decorator {
    public:
      Abs(Base* o):Decorator(o){
      }
      virtual double evaluate() {
          return abs(this->b->evaluate());
      }
      virtual Iterator* create_iterator() {
          return new UnaryIterator(this);
      }
      void accept(CountVisitor* v) {
          v->visit_abs();
      }
};

#endif //__ABS_HPP__
