#ifndef _CIRCLE_
#define _CIRCLE_

#include "trigonometry.hpp"
#include <cmath>

class Circle : public Trigonometry
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