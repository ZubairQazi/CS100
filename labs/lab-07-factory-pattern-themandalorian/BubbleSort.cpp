#include "BubbleSort.hpp"

using namespace std;

void BubbleSort::sort(Container* container) {
  for (int i = 0; i < container->size(); i++) {
    for (int j = 0; j < container->size() - i - 1; j++) {
      if (container->at(j) < container->at(j + 1))
        container->swap(j, j + 1);
    }
  }
}
