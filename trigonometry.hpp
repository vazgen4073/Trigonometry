#ifndef _TRIGONOMETRY_
#define _TRIGONOMETRY_

#include <limits>
#include <iostream>
#include <string>
#include <cassert>

class Trigonometry
{
public :
	virtual long double calculate_area() = 0;
	virtual long double calculate_volume() = 0;
	virtual void print_info();
	virtual ~Trigonometry(){}

protected:
	virtual void initialization() = 0;
	virtual long double get_area() const = 0;
	virtual long double get_volume() const = 0;

protected:
    void print_info_helper(long double value, std::string dimension_type);

protected:
	virtual long double input(std::string what);
	virtual std::string get_class_name() const = 0;

//working with member variables
protected:
	bool is_init_side_a() const;
	bool is_init_side_b() const;
	bool is_init_side_c() const;
	bool is_init_radius() const;
	bool is_init_corner() const;
	bool is_init_heigth() const;

protected:
	long double get_side_a() const;
	long double get_side_b() const;
	long double get_side_c() const;
	long double get_radius() const;
	long double get_corner() const;
	long double get_heigth() const;

protected:
	void set_side_a(long double side_a);
	void set_side_b(long double side_b);
	void set_side_c(long double side_c);
	void set_radius(long double radius);
	void set_corner(long double corner);
	void set_heigth(long double heigth);

protected:
	long double _side_a;
	long double _side_b;
	long double _side_c;
	long double _radius;
	long double _corner;
	long double _heigth;

	bool _side_a_is_init = false;
	bool _side_b_is_init = false;
	bool _side_c_is_init = false;
	bool _radius_is_init = false;
	bool _corner_is_init = false;
	bool _heigth_is_init = false;

protected:
	const double PI = 3.14159265;
};



#endif
