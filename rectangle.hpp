#ifndef _RECTANGLE_
#define _RECTANGLE_
#include <cassert>
#include <cmath>
#include <exception>
#include <iostream>
#include <string>

class Rectangle {

public:
    std::string calculate_perimeter();
    std::string calculate_area();
    std::string calculate_volume();

private:
    long double get_area();
    long double get_perimeter();
    void initialization_sides();
    long double input();
    std::string input_message();

private:
    void set_length(long double heigth);
    void set_width(long double width);
    void set_heigth(long double heigth);

private:
    long double get_length() const;
    long double get_width() const;
    long double get_heigth() const;

private:
    bool is_init_length() const;
    bool is_init_width() const;
    bool is_init_heigth() const;

private:
    long double _length;
    long double _width;
    long double _heigth;
    bool _length_is_init;
    bool _width_is_init;
    bool _heigth_is_init;
};

#endif