#include "CSV_Parser.hpp"
#include <iostream>

int main() {
    CSVParser pars("data.csv");
    pars.parse();
    std::vector<double> data = pars.get_y_data();
    for (std::vector<double>::iterator it = data.begin(); it != data.end(); it++) {
        std::cout << *it << " ";
    }
}