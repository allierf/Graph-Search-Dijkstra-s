// ==== DO NOT CHANGE ANYTHING IN THIS FILE! ====
#pragma once

#include <cstddef>
#include <string>
#include <vector>

std::string getTxstId();

struct WeightedEdge {
  int dst;
  int weight;
};

std::vector<std::vector<WeightedEdge>> getWeightedAdjacencyList();

std::vector<std::vector<int>> getDijkstraDist();

std::vector<std::vector<int>> getDijkstraPrev();
