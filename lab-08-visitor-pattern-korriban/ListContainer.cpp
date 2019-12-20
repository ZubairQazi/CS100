#include <list>
#include <iterator>
#include <iostream>

#include "ListContainer.hpp"

using namespace std;

void ListContainer::add_element(Base* element) {
  op_list.push_back(element);
}
// iterate through trees and output the expressions (use stringify())
void ListContainer::print() {
  for (list<Base*>::iterator it = op_list.begin(); it != op_list.end(); it++)
    cout << (*it)->stringify() << " ";
  cout << endl;
}
// calls on the previously set sorting-algorithm. Checks if sort_function is not null, throw exception if otherwise
void ListContainer::sort() {
  try {
    this->sort_function->sort(this);
  } catch (exception &e) {
    cout << e.what() << endl;
  }
}
/* Essentially the only functions needed to sort */
//switch tree locations
void ListContainer::swap(int i, int j) {
  // Base* temp = nullptr;
  // Base* ptr_i = this->at(i);
  // Base* ptr_j = this->at(j);
  //
  // *temp = *ptr_j;
  // *ptr_j = *ptr_i;
  // *ptr_i = *temp;

  list<Base*>::iterator it_1 = op_list.begin();
  advance(it_1, i);
  list<Base*>::iterator it_2 = op_list.begin();
  advance(it_2, j);

  std::iter_swap(it_1, it_2);
}
// get top ptr of tree at index i
Base* ListContainer::at(int i) {
  list<Base*>::iterator it = op_list.begin();
  advance(it, i);
  return *it;
}
// return container size
int ListContainer::size() {
  return op_list.size();
}
