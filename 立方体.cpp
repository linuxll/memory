#include<iostream>
using namespace std;
class Cube
{
private:
	int m_L, m_W, m_H;
public:
	void setl(int n)
	{
		m_L = n;
	}
	int getl()
	{
		return m_L;
	}
	void setw(int n)
	{
		m_W = n;
	}
	int getw()
	{
		return m_W;
	}
	void seth(int n)
	{
		m_H = n;
	}
	int geth()
	{
		return m_H;
	}
	int nums()
	{
		return 2 * m_L * m_W + 2 * m_L * m_H + 2 * m_W * m_H;
	}
	int numv()
	{
		return m_L * m_H * m_W;
	}
	bool fun2(Cube& c)
	{
		if (m_L == c.getl() && m_W == c.getw() && m_H == c.geth())
		{
			cout << "c1和c2相等" << endl;
			return true;
		}
		else
		{
			cout << "c1和c2不相等" << endl;
			return false;
		}
	}
};
bool fun1(Cube& c1, Cube& c2)
{
	if (c1.getl() == c2.getl() && c1.getw() == c2.getw() && c1.geth() == c2.geth())
	{
		cout << "c1和c2相等" << endl;
		return true;
	}
	else
	{
		cout << "c1和c2不相等" << endl;
		return false;
	}
}
int main()
{
	Cube c1;
	c1.setl(10);
	c1.setw(10);
	c1.seth(10);
	cout << "c1的面积" << c1.nums() << endl << "c1的体积" << c1.numv() << endl;
	Cube c2;
	c2.setl(10);
	c2.setw(10);
	c2.seth(10);
	fun1(c1, c2);
	c1.fun2(c2);
	system("pause");
	return 0;

}