#include "Rectangle.hpp"
#include "Trigonometry.hpp"

void trig_info(Trigonometry * obj) {
	obj->print_info();
}

int main()
{
	Trigonometry *obj = new Rectangle();
	trig_info(obj);

	return 0;
}
