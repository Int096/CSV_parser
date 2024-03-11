#pragma once

#include <vector>
#include <string>
#include <fstream>
#include <iostream>

class CSVParser {
    private:
    size_t data_length;
    std::vector<double> x_data, y_data;
    std::vector<std::string> table_names;
    std::string filename;

    public:
    CSVParser(std::string filename);

    size_t get_length();

    std::vector<double> get_x_data();
    std::vector<double> get_y_data();

    int parse();
};