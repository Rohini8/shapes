#include"Triangle.h"
#include"math.h"

Triangle::Triangle(int x, int y, int z) : Polygon(3),m_a(x), m_b(y), m_c(z)
{

}

double Triangle::area()
{
    double t_s = circumference() / 2;
    return sqrt(t_s * (t_s - m_a) * (t_s - m_b) * (t_s - m_c));
}

double Triangle::circumference()
{
    return m_a + m_b + m_c;
}
