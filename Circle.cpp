#include"Circle.h"
#include"math.h"

Circle::Circle(int r) : m_radius(r)
{

}

double Circle::area()
{
    return PI * pow(m_radius , 2);
}

double Circle::circumference()
{
    return 2 *PI * m_radius;
}
