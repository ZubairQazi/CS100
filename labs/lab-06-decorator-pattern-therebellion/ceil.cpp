#include <math.h>

#include "decorator.hpp"
#include "ceil.hpp"

double Ceil::evaluate() {
  return ceil(this->b->evaluate());
}
