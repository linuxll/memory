#include<stdio.h>
int main()
{
	int n,i;
	scanf("%d", &n);
	n = n / 10;
	i = 0;
	for (; n >= 5;)
	{
		n = n - 5;
		i = i + 7;
	}
	for (; n >= 3;)
	{
		n = n - 3;
		i = i + 4;
	}
	i = i + n;
	printf("%d\n", i);
	return 0;
}
