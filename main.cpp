#include <iostream>
#include"Circle.h"
#include"Rectangle.h"
#include"Triangle.h"

using namespace std;

int main()
{
    Rectangle rect(10,5);
    Polygon* rect_ptr = &rect;
    Circle circle(7);
    std::cout<<"\nRectangle area: "<<rect_ptr->area();
    IShape* tri_ptr = new Triangle(3,4,5);
    std::cout<<"\nTriangle area: "<<tri_ptr->area();
    IShape *circle_ptr = &circle;
    std::cout<<"\nCircle circumference: "<<circle_ptr->circumference();
}
