#include "sort.hpp"
#include "base.hpp"
#include "VectorContainer.hpp"

using namespace std;

class Sort;
class Base;

VectorContainer::VectorContainer():Container(){}

void VectorContainer::set_sort_function(Sort* sort_function){
        this->sort_function = sort_function;
} // set the type of sorting algorithm

/* Pure Virtual Functions */
// push the top pointer of the tree into container
void VectorContainer::add_element(Base* element){
    this->opVector.push_back(element);
}
// iterate through trees and output the expressions (use stringify())
void VectorContainer::print(){
    for(unsigned i = 0; i < this->opVector.size(); i++){
        cout << this->opVector.at(i)->stringify() << " ";
    }
    cout << endl;
}
// calls on the previously set sorting-algorithm. Checks if sort_function is not null, throw exception if otherwise
void VectorContainer::sort(){
    try{
        this->sort_function->sort(this);
    }
    catch (exception &e){
        throw (e);
    }

}

/* Essentially the only functions needed to sort */
//switch tree locations
void VectorContainer::swap(int i, int j){
    std::swap(this->opVector.at(i), this->opVector.at(j));
}

// get top ptr of tree at index i
Base* VectorContainer::at(int i){
    return this->opVector.at(i);
}
// return container size
int VectorContainer::size(){
    return this->opVector.size();
}
