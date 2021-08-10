#include "triangle.hpp"

void Triangle::initialization_with_corner()
{
    std::cout << input_message() + " alpha corner in degrees\n";
    set_alpha_corner(input());
    std::cout << input_message() + " a side in meters\n";
    set_a(input());
    std::cout << input_message() + " b side in meters\n";
    set_b(input());
}

void Triangle::initialization_with_sides()
{
    std::cout << input_message() + " a side in meters\n";
    set_a(input());
    std::cout << input_message() + " b side in meters\n";
    set_b(input());
    std::cout << input_message() + " c side in meters\n";
    set_c(input());
}

///////////////////////
//calculating functions

std::string Triangle::calculate_volume()
{
    long double s = 0;
    if (is_init_alpha_corner() && is_init_a() && is_init_b()) {
        s = get_area_using_corner();
    } else if (is_init_a() && is_init_b() && is_init_c()) {
        s = get_area_using_sides();
    } else if (is_init_heigth() & is_init_a()) {
        s = get_area_using_heigth();
    } else {
        return "You must initialize Triangle parameters before calculating\n";
    }
    assert(s > 0);
    if (!is_init_heigth()) {
        std::cout << input_message() + " heigth in meters\n";
        set_heigth(input());
    }
    long double volume = s * (1.0 / 3) * get_heigth();
    std::cout << "volume is " << volume << "\n";
    return "Triangle volume is " + std::to_string(volume) + " cubic meters\n";
}

std::string Triangle::calculate_area_using_corner()
{
    initialization_with_corner();
    return "Triangle area is " + std::to_string(get_area_using_corner()) + " square meters\n";
}

std::string Triangle::calculate_perimeter()
{
    return "Triangle perimeter is " + std::to_string(get_perimeter()) + " meters\n";
}

std::string Triangle::calculate_area_using_sides()
{
    initialization_with_sides();
    return "Triangle area is " + std::to_string(get_area_using_sides()) + " square meters\n";
}

///////////
//
long double Triangle::get_volume_using_heigth_and_sides()
{
    return 1 / 3 * get_heigth() * get_area_using_sides();
}

long double Triangle::get_area_using_corner()
{
    return (get_a() * get_b()) * std::sin(get_alpha_corner() * PI / 180) / 2;
}

long double Triangle::get_perimeter()
{
    return get_a() + get_b() + get_c();
}

long double Triangle::get_area_using_sides()
{
    long double p = get_perimeter() / 2;
    return std::sqrt(p * (p - get_a()) * (p - get_b()) * (p - get_c()));
}

long double Triangle::get_area_using_heigth()
{
    return (1 / 2) * _heigth * _a;
}

/////////////////
/////////////////
//check functions
bool Triangle::is_init_a() const
{
    if (_a_is_init)
        return true;
    return false;
}

bool Triangle::is_init_b() const
{
    if (_b_is_init)
        return true;
    return false;
}

bool Triangle::is_init_c() const
{
    if (_c_is_init)
        return true;
    return false;
}

bool Triangle::is_init_heigth() const
{
    if (_heigth_is_init)
        return true;
    return false;
}

bool Triangle::is_init_alpha_corner() const
{
    if (_alpha_corner_is_init)
        return true;
    return false;
}

/////////
/////////
//getters
long double Triangle::get_a() const
{
    assert(is_init_a());
    return _a;
}

long double Triangle::get_b() const
{
    assert(is_init_b());
    return _b;
}

long double Triangle::get_c() const
{
    assert(is_init_c());
    return _c;
}

long double Triangle::get_heigth() const
{
    assert(is_init_heigth());
    return _heigth;
}

long double Triangle::get_alpha_corner() const
{
    assert(is_init_alpha_corner());
    return _alpha_corner;
}

/////////
/////////
//setters
void Triangle::set_a(long double a)
{
    assert(!_a_is_init);
    _a_is_init = true;
    _a = a;
}

void Triangle::set_b(long double b)
{
    assert(!_b_is_init);
    _b_is_init = true;
    _b = b;
}

void Triangle::set_c(long double c)
{
    assert(!_c_is_init);
    _c_is_init = true;
    _c = c;
}

void Triangle::set_heigth(long double heigth)
{
    assert(!_heigth_is_init);
    _heigth_is_init = true;
    _heigth = heigth;
}

void Triangle::set_alpha_corner(long double alpha_corner)
{
    assert(!_alpha_corner_is_init);
    _alpha_corner_is_init = true;
    _alpha_corner = alpha_corner;
}

long double Triangle::input()
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

std::string Triangle::input_message()
{
    return "Please enter Triangle";
}