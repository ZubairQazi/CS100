#include <math.h>

#include "decorator.hpp"
#include "abs.hpp"

double Abs::evaluate() {
  return abs(this->b->evaluate());
}
