#include "solution.h"
#include <iostream>
float Solution::FindMedian(std::vector<int> &inputs) {
  if (inputs.size() == 0) {
    return -1;
  }
  
  int lastIndex = inputs.size() - 1;
  if (lastIndex % 2 == 0) {
    return (float) inputs[lastIndex / 2];
  }
  else {
    return (float) (inputs[lastIndex / 2] + inputs[lastIndex / 2 + 1]) / 2;
  }
}
