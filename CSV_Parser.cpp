#include "CSV_Parser.hpp"

#include <typeinfo>

CSVParser::CSVParser(std::string filename) {
    this->filename = filename;
}

std::vector<double> CSVParser::get_x_data() {
    return this->x_data;
}

std::vector<double> CSVParser::get_y_data() {
    return this->y_data;
}

size_t CSVParser::get_length() {
    return this->data_length;
}

int CSVParser::parse() {
    std::ifstream in(this->filename);

    if(in.is_open()) {
        double x, y;
        while (in >> x >> y)
        {
            this->x_data.push_back(x);
            this->y_data.push_back(y);
        }
        
    } else {
        return 0;
    }

    in.close();
    this->data_length = this->x_data.size();
    return 1;
}