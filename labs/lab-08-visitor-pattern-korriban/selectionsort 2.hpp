#ifndef __SSSORT_HPP__
#define __SSSORT_HPP__

#include "sort.hpp"

class Sort;

class SelectionSort : public Sort {
    public:
        /* Constructors */
        SelectionSort();

        /* Pure Virtual Functions */
        void sort(Container* container);
};

#endif //__SSSORT_HPP_
