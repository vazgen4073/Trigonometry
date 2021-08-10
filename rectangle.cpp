
#include "rectangle.hpp"

void Rectangle::initialization_sides()
{
    std::cout << input_message() + " length in meters\n";
    set_length(input());
    std::cout << input_message() + " width in meters\n";
    set_width(input());
}

//////////////////////
//////////////////////
//calculating_functions

std::string Rectangle::calculate_volume()
{
    if (!is_init_length() && is_init_width()) {
        initialization_sides();
    }
    std::cout << input_message() << " heigth in meters\n";
    set_heigth(input());
    return "rectangle volume is " + std::to_string(get_area() * get_heigth()) + " cubic meters\n";
}

std::string Rectangle::calculate_area()
{
    initialization_sides();
    return "rectangle area is " + std::to_string(get_area()) + " square meterrs\n";
}

std::string Rectangle::calculate_perimeter()
{
    initialization_sides();
    return "rectangle perimeter is " + std::to_string(get_perimeter()) + " square meters\n";
}

long double Rectangle::get_area()
{
    return get_length() * get_width();
}

long double Rectangle::get_perimeter()
{
    return (get_length() + get_width()) * 2;
}

/////////
/////////
//getters

long double Rectangle::get_heigth() const
{
    assert(is_init_heigth());
    return _heigth;
}

long double Rectangle::get_length() const
{
    assert(is_init_length());
    return _length;
}

long double Rectangle::get_width() const
{
    assert(is_init_width());
    return _width;
}

/////////
/////////
//setters
void Rectangle::set_heigth(long double heigth)
{
    assert(is_init_heigth());
    _heigth = heigth;
}

void Rectangle::set_length(long double length)
{
    assert(is_init_length());
    _length = length;
}

void Rectangle::set_width(long double width)
{
    assert(is_init_width());
    _width = width;
}

/////////////////
/////////////////
//check functions
bool Rectangle::is_init_heigth() const
{
    if (_heigth_is_init)
        return true;
    return false;
}

bool Rectangle::is_init_length() const
{
    if (_length_is_init)
        return true;
    return false;
}

bool Rectangle::is_init_width() const
{
    if (_width_is_init)
        return true;
    return false;
}

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