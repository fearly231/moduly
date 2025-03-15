module;
#include <iostream>
#include <vector>
export module histogram;

export void Histogram(std::vector<int>& data) {
    // max velue 

    int max_value = *max_element(data.begin(), data.end());


    for (int i = max_value; i >= 0; --i) {
        std::cout.width(2);
        std::cout << i << " | ";


        for (int j = 0; j < data.size(); ++j) {
            if (data[j] >= i) {
                std::cout << "# ";
            }
            else {
                std::cout << "  ";
            }
        }
        std::cout << std::endl;
    }
    std::cout << "---------------------------------------"
        << std::endl;
    std::cout << "      ";


    for (int i = 0; i < data.size(); ++i) {
        std::cout << data[i] << " ";
    }
}

