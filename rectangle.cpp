#include "Rectangle.hpp"

void Rectangle::initialization()
{
	set_side_a(input("a side"));
	set_side_b(input("b side"));
}

///////////////////////
//calculation functions

long double Rectangle::calculate_area()
{
	if (!(is_init_side_a() && is_init_side_b())) {
		initialization();
	}
	return get_area() ;
}

long double Rectangle::calculate_volume()
{
    if ((is_init_side_a() && is_init_side_b() &&
         !is_init_heigth())) {
        set_heigth(input("heigth"));
    }

	return get_volume();
}


////////////////////////////////////////
////////////////////////////////////////

long double Rectangle::get_area() const
{
	return get_side_a() * get_side_b();
}

long double Rectangle::get_volume() const
{
	return get_area() * get_heigth();
}

std::string Rectangle::get_class_name() const
{
	return _class_name;
}
