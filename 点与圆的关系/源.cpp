#include"circle.h"
#include"point.h"
void fun(Circle c, Point p)
{
	int dis =(c.getp().getx()-p.getx())*(c.getp().getx()-p.getx())+(c.getp().gety()-p.gety())*(c.getp().gety()-p.gety()) ;
	int disr = c.getr() * c.getr();
	if (dis > disr)
	{
		cout << "����Բ��" << endl;
	}
	else if(dis<disr)
	{
		cout << "����԰��" << endl;
	}
	else
	{
		cout << "����Բ��" << endl;
	}
}
int main()
{
	Circle a;
	Point b, c;
	c.setx(10);
	c.sety(0);
	a.setp(c);
	a.setr(10);
	b.setx(10);
	b.sety(9);
	fun(a, b);
	system("pause");
	return 0;
}