#pragma once
#include <vector>

std::vector<int> generateSequence(int count, int step) {
  std::vector<int> vec{step};
  for (auto i = 1; i < count; i++) {
    vec.push_back(step + vec[i - 1]);
  }
  return vec;
}