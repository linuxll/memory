#include<iostream>
using namespace std;
struct Time
{
	int year, month, day, hour, minute, second;
};
int main()
{
	Time time;
	cout << "�����������꣬�£��գ�ʱ���֣���" << endl;
	cin >> time.year >> time.month >> time.day >> time.hour >> time.minute >> time.second;
	cout << time.year << "��" << time.month << "��" << time.day << "��" << time.hour << "ʱ" << time.minute << "��" << time.second << "��" << endl;
	return 0;
}