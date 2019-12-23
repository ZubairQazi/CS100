#ifndef __TRUNC_HPP__
#define __TRUNC_HPP__

#include <string>
#include "math.h"

#include "base.hpp"
#include "decorator.hpp"
#include "iterator.hpp"

class Trunc: public Decorator{
    public:
        Trunc(Base* o):Decorator(o){}
        virtual std::string stringify(){
            return std::to_string(b->evaluate());
        }
        virtual Iterator* create_iterator() {
            return new UnaryIterator(this);
        }
        void accept(CountVisitor* v) {
            v->visit_trunc();
        }
} ;
#endif
