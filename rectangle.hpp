#ifndef _RECTANGLE_
#define _RECTANGLE_
#include <cmath>
#include <exception>
#include <iostream>
#include <string>

class Rectangle {

public:
    std::string calculate_perimeter();
    std::string calculate_area();

private:
    long double get_area();
    long double get_perimeter();
    void initialization_sides();
    long double input();
    std::string input_message();

private:
    long double length;
    long double width;
};

#endif