// ==== DO NOT CHANGE ANYTHING IN THIS FILE! ====
#include <random>
#include <utility>

#include "Generator.h"

namespace Generator {

std::vector<std::vector<int>> getWeightedAdjacencyMatrix(std::string seed) {
  size_t dim = NUM_WEIGHTED_NODES;
  std::vector<std::vector<int>> result(dim, std::vector<int>(dim, -1));
  std::minstd_rand rng(std::hash<std::string>()(seed));
  int maxWeight = 15;
  std::uniform_int_distribution<int> weightDist(0, maxWeight);
  std::uniform_int_distribution<int> coinflipDist(0, 1);
  for (int i = 0; i < result.size(); i++) {
    for (int j = i + 1; j < result.size(); j++) {
      if (coinflipDist(rng)) {
        int x = weightDist(rng);
        result[i][j] = x > 0 ? x : 1;
        result[j][i] = result[i][j];
      }
    }
  }
  return result;
}

int findFirstNonNullRow(const std::vector<std::vector<int>>& m) {
  for (int i = 0; i < m.size(); i++) {
    for (int edge : m[i]) {
      if (edge != -1) {
        return i;
      }
    }
  }
  return -1;
}

}
