#ifndef __DIV_HPP__
#define __DIV_HPP__

#include "base.hpp"
#include "op.hpp"

class Div : public Base {
    public:
        Base* left;
        Base* right;
        Base* result;

        Div(Base* value1, Base* value2) : Base() {
            left = value1;
            right = value2;
            result = new Op(evaluate());
        }
        double evaluate() {
            return left->evaluate() / right->evaluate();
        }
        std::string stringify() {
            std::string str = left->stringify() + "/" + right->stringify();
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
            v->visit_div();
        }
};

#endif //__DIV_HPP__
