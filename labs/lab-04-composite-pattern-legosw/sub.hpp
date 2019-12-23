#ifndef __SUB_HPP__
#define __SUB_HPP__
#include "base.hpp"
#include "op.hpp"

class Sub : public Base {
   public:
       Base* left;
       Base* right;
       Base* result;
       Sub(Base* value1, Base* value2) : Base() {
           left = value1;
           right = value2;
           result = new Op(evaluate());
       }
       double evaluate() {
           return left->evaluate() - right->evaluate();
       }
       std::string stringify() {
           std::string str = std::to_string((left->evaluate())) + "-" + std::to_string(right->evaluate());
           return str;
       }
};
#endif //__SUB_HPP__
