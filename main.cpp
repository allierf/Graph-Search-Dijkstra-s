// ==== DO NOT CHANGE ANYTHING IN THIS FILE! ====
#include <iostream>

#include "HW6.h"
#include "Generator.h"

void displayAdjacencyMatrix(const std::vector<std::vector<int>>& m) {
  std::cout << "Your adjacency matrix:" << std::endl;
  for (std::vector<int> arr : m) {
    std::cout << "[";
    for (int i = 0; i < arr.size(); i++) {
      if (i != 0) {
        std::cout << ", ";
      }
      if (arr[i] == -1) {
        std::cout << "null";
      } else if (arr[i] <= 9) {
        std::cout << "   " << arr[i]; // Pad the double digits
      } else {
        std::cout << "  " << arr[i]; // Pad the single digits
      }
    }
    std::cout << "]" << std::endl;
  }
  std::cout << "Run Dijktra's starting at node " << Generator::findFirstNonNullRow(m) << std::endl;
}


int main() {
  auto id = getTxstId();
  if (id.empty()) {
    throw std::runtime_error("Please update the getTxstId method!");
  }
  displayAdjacencyMatrix(Generator::getWeightedAdjacencyMatrix(id));
}


