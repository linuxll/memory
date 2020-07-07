#pragma once
#include<iostream>
using namespace std;
class Point
{
private:
	int m_X, m_Y;
public:
	void setx(int x);
	void sety(int y);
	int getx();
	int gety();
};