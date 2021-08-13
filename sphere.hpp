#ifndef _SPHERE_
#define _SPHERE_

#include "circle.hpp"
#include "cmath"

class Sphere : public Circle
{
public:
	long double calculate_area();
	long double calculate_volume();

protected:
	void initialization();
	long double get_area() const;
	long double get_volume() const;
	std::string get_class_name() const;
};

#endif