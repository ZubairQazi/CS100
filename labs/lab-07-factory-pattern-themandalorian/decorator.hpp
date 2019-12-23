#ifndef __DEC_HPP__
#define __DEC_HPP__

#include <string>
#include "math.h"

#include "base.hpp"

class Decorator : public Base{
    protected:
        Base* b;
    public:
        /* Constructor */
        Decorator(Base* bse){
            b = bse;
        };

        /* Virtual Functions */
        virtual double evaluate() {
          return this->b->evaluate();
        }
        virtual std::string stringify() {
          return this->b->stringify();
        }
};

#endif //__DEC_HPP__
