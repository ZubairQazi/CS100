#ifndef __ADD_HPP__
#define __ADD_HPP__
#include "base.hpp"
#include "op.hpp"

class Add : public Base {
   public:
       Base* left;
       Base* right;
       Base* result;
    
       Add(Base* value1, Base* value2) : Base() {
           left = value1;
           right = value2;
           result = new Op(evaluate());
       }
       double evaluate() {
           return left->evaluate() + right->evaluate();
       }
       std::string stringify() {
           std::string str = left->stringify() + "+" + right->stringify();
           return str;
       }
};
#endif //__ADD_HPP__
