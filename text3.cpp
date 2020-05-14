#include<iostream>
using namespace std;
int main()
{
	int i;
	float a, b, area;
	cout << "请选择图形（圆：1，长方形：2，正方形：3）" ;
	cin >> i;
	switch (i)
	{
	case 1:
		cout << "请输入半径 " ;
		cin >> a;
		area = a * a * 3.14;
		break;
	case 2:
		cout << "请输入长宽 " ;
		cin >> a >> b;
		area = a * b;
		break;
	case 3:
		cout << "请输入边长 ";
		cin >> a;
		area = a * a;
		break;

	}
	cout << "面积=" << area << endl;
	return 0;
}