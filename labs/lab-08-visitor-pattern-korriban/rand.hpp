#ifndef __RAND_HPP__
#define __RAND_HPP__

#include "base.hpp"

class Rand : public Base {
    public:
        double val;
        Rand(double value) : Base() {
            val = rand()%100;
        }
        virtual double evaluate() { return val; }
        virtual std::string stringify() { return std::to_string(val); }
        virtual Iterator* create_iterator() {
            return new NullIterator(this);
        }
        void accept(CountVisitor* v) {
            v->visit_rand();
        }
};

#endif //__RAND_HPP__
