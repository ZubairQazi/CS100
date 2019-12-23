#ifndef __FLOOR_HPP__
#define __FLOOR_HPP__

#include <math.h>

#include "decorator.hpp"
#include "iterator.hpp"

class Floor : public Decorator {
    public:
      Floor(Base* o):Decorator(o){};
      virtual double evaluate() {
          return floor(this->b->evaluate());
      }
      virtual Iterator* create_iterator() {
          return new UnaryIterator(this);
      }
      void accept(CountVisitor* v) {
          v->visit_floor();
      }
};

#endif //__FLOOR_HPP__
