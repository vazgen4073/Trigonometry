#include "Trigonometry.hpp"


/////////
//getters

long double Trigonometry::get_side_a() const
{
	assert(is_init_side_a());
	return _side_a;
}

long double Trigonometry::get_side_b() const
{
	assert(is_init_side_b());
	return _side_b;
}

long double Trigonometry::get_side_c() const
{
	assert(is_init_side_c());
	return _side_c;
}

long double Trigonometry::get_radius() const
{
	assert(is_init_radius());
	return _radius;
}

long double Trigonometry::get_corner() const
{
	assert(is_init_corner());
	return _corner;
}

long double Trigonometry::get_heigth() const
{
	assert(is_init_heigth());
	return _heigth;
}

/////////
//setters

void Trigonometry::set_side_a(long double side_a)
{
	assert(!is_init_side_a());
	_side_a_is_init = true;
	_side_a = side_a;
}

void Trigonometry::set_side_b(long double side_b)
{
	assert(!is_init_side_b());
	_side_b_is_init = true;
	_side_b = side_b;
}

void Trigonometry::set_side_c(long double side_c)
{
	assert(!is_init_side_c());
	_side_c_is_init = true;
	_side_c = side_c;
}

void Trigonometry::set_radius(long double radius)
{
	assert(!is_init_radius());
	_radius_is_init = true;
	_radius = radius;
}

void Trigonometry::set_corner(long double corner)
{
	assert(!is_init_corner());
	_corner_is_init = true;
	_corner = corner;
}

void Trigonometry::set_heigth(long double heigth)
{
    assert(!is_init_heigth());
    _heigth_is_init = true;
    _heigth = heigth;
}

/////////////////
//check functions

bool Trigonometry::is_init_side_a() const
{
	if (_side_a_is_init) {
		return true;
	}
	return false;
}

bool Trigonometry::is_init_side_b() const
{
	if (_side_b_is_init) {
		return true;
	}
	return false;
}

bool Trigonometry::is_init_side_c() const
{
	if (_side_c_is_init) {
		return true;
	}
	return false;
}

bool Trigonometry::is_init_radius() const
{
	if (_radius_is_init) {
		return true;
	}
	return false;
}

bool Trigonometry::is_init_corner() const
{
	if (_corner_is_init) {
		return true;
	}
	return false;
}

bool Trigonometry::is_init_heigth() const
{
    if (_heigth_is_init) {
        return true;
    }
    return false;
}



//////////////////////////////
////////////////////////////
/////////////////////////

long double Trigonometry::input(std::string what)
{
    std::cout << "please enter " + get_class_name()
              << " " << what << " in meters\n";
	long double temp;
	bool input_success;
	do {
		input_success = true;
		try {
			std::cin >> temp;
			if (std::cin.fail()) {
				throw std::invalid_argument("Please enter numbers\n");
			}
			if (temp <= 0) {
				throw std::invalid_argument("Please enter positive number\n");
			}
		}
		catch (std::exception& ex) {
			std::cout << ex.what();
			input_success = false;
			std::cin.clear();
			std::cin.sync();
			std::cin.ignore(std::numeric_limits <std::streamsize>::max(), '\n');

		}
	} while (!input_success);
	return temp;
}

void Trigonometry::print_info_helper(long double value, std::string dimension_type)
{
    if (value == -1)
        return;

    std::string class_name = get_class_name();
    if (dimension_type == "area") {
        std::cout << class_name << " area is "
                  << value << " square meters\n";
        std::cout << "----------------------------------\n";
    }
    else if (dimension_type == "volume") {
        std::cout << class_name << " volume is "
                  << value << " cubic meters\n";
        std::cout << "----------------------------------\n";
    }

}

void Trigonometry::print_info()
{
    long double area = calculate_area();
    long double volume = calculate_volume();
    print_info_helper(area, "area");
    print_info_helper(volume, "volume");
}
