#ifndef __TRUNC_HPP__
#define __TRUNC_HPP__

#include <string>
#include "math.h"

#include "base.hpp"
#include "sub.hpp"
#include "decorator.hpp"

class Trunc: public Decorator{
    public:
        Trunc(Base* o):Decorator(o){}
        virtual std::string stringify(){
            return std::to_string(b->evaluate());
        }
} ;
#endif