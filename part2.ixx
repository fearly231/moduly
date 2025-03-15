module;
#include <iostream>
#include <vector>
#include <algorithm>
export module mod:part2;

export void Mediana(std::vector<int>& data) {
	std::sort(data.begin(), data.end());
	if (data.size() % 2 == 0) {
		std::cout << "Mediana wynosi: " << (data[data.size() / 2 - 1] + data[data.size() / 2]) / 2.0;
	}
	else {
		std::cout << "Mediana wynosi: " << data[data.size() / 2];
	}

}
