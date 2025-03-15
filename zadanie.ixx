module;
#include <iostream>
#include <random>
#include <vector>
export module zadanie;
export void PodajDane() {
	int data;
	do {
		std::cout << "Podaj liczbe (lub wpisz 0 aby wyjsc): ";
		std::cin >> data;
	} while (data != 0);
}
export void GenerujLosoweDane(std::vector<int> &data) {
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<int> dist(1, 50);
    std::cout << "Generuje losowe dane:" << std::endl;
    for (int i = 0; i < 50; ++i) {
        int x = dist(gen);
        //std::cout << x << " ";
		data.push_back(x);
        
    }
    std::cout << std::endl;
}

