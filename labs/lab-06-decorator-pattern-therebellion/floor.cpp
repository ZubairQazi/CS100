#include <math.h>

#include "decorator.hpp"
#include "floor.hpp"

double Floor::evaluate() {
  return floor(this->b->evaluate());
}
