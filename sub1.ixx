module;
#include <iostream>
#include <vector>
#include <algorithm>
export module mod.sub1;
export void average(std::vector<int>& data) {
	double sum = 0;
	for (int i = 0; i < data.size(); ++i) {
		sum += data[i];
	}
	std::cout << "Srednia wynosi " << sum / data.size() << std::endl;
}