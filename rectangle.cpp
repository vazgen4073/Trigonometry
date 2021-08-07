
#include "rectangle.hpp"

std::string Rectangle::calculate_area()
{
    initialization_sides();
    return "rectangle area is " + std::to_string(get_area()) + " square meterrs\n";
}
//main.cpp rectangle.hpp rectangle.cpp triangle.hpp triangle.cpp

std::string
Rectangle::calculate_perimeter()
{
    initialization_sides();
    return "rectangle perimeter is " + std::to_string(get_perimeter()) + " square meters\n";
}

long double Rectangle::get_area()
{
    return length * width;
}

long double Rectangle::get_perimeter()
{
    return (length + width) * 2;
}

void Rectangle::initialization_sides()
{
    std::cout << input_message() + " length in meters\n";
    length = input();
    std::cout << input_message() + " width in meters\n";
    width = input();
}

// private
long double Rectangle::input()
{
    long double temp;
    try {
        std::cin >> temp;
        if (temp <= 0) {
            throw std::logic_error("Please enter positive number\n");
        }
    } catch (std::exception& ex) {
        std::cout << ex.what();
    }
    return temp;
}

std::string Rectangle::input_message()
{
    return "Please enter rectangle";
}