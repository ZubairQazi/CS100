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
       virtual Iterator* create_iterator() {
          return new BinaryIterator(this);
       }
       virtual Base* get_left() {
           return this->left;
       }
       virtual Base* get_right() {
           return this->right;
       }
       void accept(CountVisitor* v) {
           v->visit_add();
       }
};
#endif //__ADD_HPP__
