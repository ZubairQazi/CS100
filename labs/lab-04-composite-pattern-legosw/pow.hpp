#ifndef __POW_HPP__
#define __POW_HPP__
#include "base.hpp"
#include "op.hpp"

#include <math.h>
class Pow : public Base {
   public:
       Base* left;
       Base* right;
       Base* result;
       Pow(Base* value1, Base* value2) : Base() {
           left = value1;
           right = value2;
           result = new Op(evaluate());
       }
       double evaluate() {
           return pow(left->evaluate(),right->evaluate());
       }
       std::string stringify() {
           std::string str = std::to_string(left->evaluate()) + "**" + std::to_string(right->evaluate()); 
           return str;
       }
};
#endif //__POW_HPP__
