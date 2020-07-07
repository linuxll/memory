#pragma once
#include<iostream>
#include"point.h"
using namespace std;
class Circle
{
private:
	int m_R;
	Point m_P;
public:
	void setr(int r);
	void setp(Point p);
	int getr();
	Point getp();
};