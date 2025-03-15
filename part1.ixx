module;
#include <iostream>
#include <vector>
#include <algorithm>

export module mod:part1;
export void minMax(std::vector<int>& data) {
	std::cout << "Min: " << *std::min_element(data.begin(), data.end()) << std::endl;
	std::cout << "Max: " << *std::max_element(data.begin(), data.end()) << std::endl;
}