#include<iostream>
using namespace std;
int main()
{
	int i;
	float a, b, area;
	cout << "��ѡ��ͼ�Σ�Բ��1�������Σ�2�������Σ�3��" ;
	cin >> i;
	switch (i)
	{
	case 1:
		cout << "������뾶 " ;
		cin >> a;
		area = a * a * 3.14;
		break;
	case 2:
		cout << "�����볤�� " ;
		cin >> a >> b;
		area = a * b;
		break;
	case 3:
		cout << "������߳� ";
		cin >> a;
		area = a * a;
		break;

	}
	cout << "���=" << area << endl;
	return 0;
}