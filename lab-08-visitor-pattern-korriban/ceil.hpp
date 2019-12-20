#ifndef __CEIL_HPP__
#define __CEIL_HPP__

#include <math.h>

#include "decorator.hpp"

class Ceil : public Decorator {
    public:
      Ceil(Base* o):Decorator(o){}
      virtual double evaluate() {
          return ceil(this->b->evaluate());
      }
      virtual Iterator* create_iterator() {
          return new UnaryIterator(this);
      }
      void accept(CountVisitor* v) {
          v->visit_ceil();
      }
};

#endif //__CEIL_HPP__
