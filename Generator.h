// ==== DO NOT CHANGE ANYTHING IN THIS FILE! ====
#pragma once

#include <utility>
#include <vector>
#include <string>

namespace Generator {

// Part 1
const std::size_t NUM_UNWEIGHTED_NODES = 7;

std::vector<std::pair<int, int>> getUnweightedGraphEdges(std::string seed);

// Part 2
const std::size_t NUM_WEIGHTED_NODES = 7;

std::vector<std::vector<int>> getWeightedAdjacencyMatrix(std::string seed);

int findFirstNonNullRow(const std::vector<std::vector<int>>& m);

}
