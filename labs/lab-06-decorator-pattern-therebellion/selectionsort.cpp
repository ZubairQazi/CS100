using namespace std;

#include "sort.hpp"
#include "selectionsort.hpp"

SelectionSort::SelectionSort():Sort(){}

void SelectionSort::sort(Container* container){
    for(int i = 0; i < container->size()-1; i++){
        for(int j = i+1; j < container->size(); j++){
            if(container->at(i) < container->at(j)){
                container->swap(i, j);
            }
        }
    }
}