#include "sphere.hpp"

void Sphere::initialization()
{
	Circle::initialization();
}

long double Sphere::calculate_volume()
{
	if (!is_init_radius())
		initialization();
	return get_volume();
}

long double Sphere::calculate_area()
{
	if (!is_init_radius())
		initialization();
	return get_area();
}


long double Sphere::get_area() const
{
	return  4 * PI* std::pow(get_radius(), 2);
}

long double Sphere::get_volume() const
{
	return PI * std::pow(get_radius(), 3)* (4.0 / 3);
}

std::string Sphere::get_class_name() const
{
	return "sphere";
}