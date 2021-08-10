#ifndef _TRIANGLE_
#define _TRIANGLE_
#include <cassert>
#include <cmath>
#include <iostream>
#include <string>

class Triangle {
public:
    std::string calculate_area_using_sides();
    std::string calculate_perimeter();
    std::string calculate_area_using_corner();
    std::string calculate_volume();

private:
    void initialization_with_sides();
    void initialization_with_corner();
    long double get_volume_using_heigth_and_sides();
    long double get_perimeter();
    long double get_area_using_sides();
    long double get_area_using_corner();
    long double get_area_using_heigth();

private:
    void set_a(long double a);
    void set_b(long double b);
    void set_c(long double c);
    void set_heigth(long double heigth);
    void set_alpha_corner(long double alpha_corner);

private:
    bool is_init_a() const;
    bool is_init_b() const;
    bool is_init_c() const;
    bool is_init_heigth() const;
    bool is_init_alpha_corner() const;

private:
    long double get_a() const;
    long double get_b() const;
    long double get_c() const;
    long double get_heigth() const;
    long double get_alpha_corner() const;

private:
    long double input();
    std::string input_message();

private:
    long double _a, _b, _c;
    long double _heigth;
    long double _alpha_corner;
    bool _a_is_init = false;
    bool _b_is_init = false;
    bool _c_is_init = false;
    bool _heigth_is_init = false;
    bool _alpha_corner_is_init = false;

    const double PI = 3.14159265;
};

#endif