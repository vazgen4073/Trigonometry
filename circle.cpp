#include "circle.hpp"

void Circle::initialization()
{
	set_radius(input("radius"));
}


long double Circle::calculate_area()
{
	initialization();
	return get_area();
}

long double Circle::calculate_volume() {
	return -1;
}

long double Circle::get_area() const
{
	return std::pow(get_radius(), 2);
}

long double Circle::get_volume() const
{
	return -1;
}



std::string Circle::get_class_name() const
{
	return "circle";
}