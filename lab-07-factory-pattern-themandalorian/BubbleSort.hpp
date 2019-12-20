#ifndef __BUBBLE_SORT_HPP__
#define __BUBBLE_SORT_HPP__

#include "sort.hpp"

using namespace std;

class BubbleSort: public Sort {
    public:
        /* Constructors */
         BubbleSort() : Sort() {};

        /* Virtual Functions */
        virtual void sort(Container* container);
};

#endif //__BUBBLE_SORT_HPP__
