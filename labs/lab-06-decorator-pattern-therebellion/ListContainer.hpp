#ifndef __LIST_CONTAINER_HPP__
#define __LIST_CONTAINER_HPP__

#include <list>
#include "sort.hpp"
#include "base.hpp"
#include "container.hpp"

using namespace std;

class ListContainer : public Container {
  private:
    std::list<Base*> op_list;
  public:

    // ListContainer() : sort_function(nullptr) { };
    // ListContainer(Sort* function) : sort_function(function) { };

    /* Constructors */
    virtual void add_element(Base* element);
    // iterate through trees and output the expressions (use stringify())
    virtual void print();
    // calls on the previously set sorting-algorithm. Checks if sort_function is not null, throw exception if otherwise
    virtual void sort();
    /* Essentially the only functions needed to sort */
    //switch tree locations
    virtual void swap(int i, int j);
    // get top ptr of tree at index i
    virtual Base* at(int i);
    // return container size
    virtual int size();
};

#endif
