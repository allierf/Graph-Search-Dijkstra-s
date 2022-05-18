#include "HW6.h"
#include "limits"

std::string getTxstId() {
    return "A04770516";
}

std::vector<std::vector<WeightedEdge>> getWeightedAdjacencyList() {
  return {
      {{1, 7}, {4,5}},
     {{0,7}, {3,13}, {4,9}, {5,11}, {6,10}},
     {{3,7}, {4,9}},
     {{1,13}, {2,7}, {5,15}},
     {{0,5}, {1,9}, {2,9}, {5,7}, {6,1}}, 
     {{1,11}, {3,15}, {4,7}, {6,5}},
     {{1,10}, {4,1}, {5,5}}
  };
}

std::vector<std::vector<int>> getDijkstraDist() {
  int inf = std::numeric_limits<int>::max();

 return {
  };
}

std::vector<std::vector<int>> getDijkstraPrev() {
  // We use -1 as a special marker to indicate "no predecessor node".
  return {
    // {-1, -1, -1, -1, -1, -1, -1},  // dist[s] = 0
  };
}