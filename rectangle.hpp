#ifndef _RECTANGLE_
#define _RECTANGLE_

#include "Trigonometry.hpp"
#include <iostream>
#include <cassert>

class Rectangle : public Trigonometry
{
public:
	long double calculate_area();
	long double calculate_volume();

protected:
	long double get_area() const;
	long double get_volume() const;
	void initialization();

protected:
	std::string get_class_name() const;
	const std::string _class_name = "rectangle";
};


#endif
