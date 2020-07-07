#include"circle.h"
int Circle::getr()
{
	return m_R;
}
Point Circle::getp()
{
	return m_P;
}
void Circle::setp(Point p)
{
	m_P = p;
}
void Circle::setr(int r)
{
	m_R = r;
}