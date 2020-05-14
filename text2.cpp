#include<iostream>
using namespace std;
int main()
{
	int i, sum;
	for (i = 1, sum = 0; i <= 10; i++)
	{
		sum += i;
	}
	cout << "sum=" << sum << endl;
	return 0;
}