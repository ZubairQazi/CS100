#ifndef __PAREN_HPP__
#define __PAREN_HPP__

#include <string>
#include "math.h"

#include "base.hpp"
#include "decorator.hpp"

class Paren: public Decorator{
    private: 
        string s;
        Base* bas;
    public:
        Paren(Base* o):Decorator(o){}
        virtual std::string stringify(){
            //Trunc* t = new Trunc(this->b);
            s = "(" + b->stringify() + ")";
            return s;
        }
} ;
#endif