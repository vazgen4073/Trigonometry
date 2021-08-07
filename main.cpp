#include "rectangle.hpp"
#include "triangle.hpp"

void rectangle_info()
{
    //   Rectangle rc;
    //    rc.calculate_area();
}

void triangle_info()
{
    //   Triangle tr;
    //    std::cout << tr.calculate_area_using_corner();
    //   std::cout << tr.calculate_volume();
}

int main()
{

    triangle_info();
    rectangle_info();
    Triangle tr;
    tr.calculate_area_using_corner();
    int a = 7;
    a = 9;

    return 0;
}