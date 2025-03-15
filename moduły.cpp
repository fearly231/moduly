
import mod;
import mod.sub1;
import zadanie;
import histogram;
#include <iostream>
#include <vector>
int main()
{
	std::vector<int> data;
	PodajDane();
	GenerujLosoweDane(data);
	Histogram(data);
	std::cout << std::endl;
	std::cout << std::endl;
	Mediana(data);
	std::cout << std::endl;
	average(data);
	minMax(data);
	return 0;
}

