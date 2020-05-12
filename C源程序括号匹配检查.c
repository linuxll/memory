#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
	FILE *in;
	int a,b,i;
	a=0;
	i=0;
	b=0;
	char ch;
	char c[100]={'0'};
	in=fopen("input.c","r");
	ch=fgetc(in);
	for(;ch!=-1;)
	{
		if(ch==47)
		{
			ch=fgetc(in);
			for(;ch!=47;)
			{
				ch=fgetc(in);
			}
		}
		if(ch==123)
		{
			a=a+1;
			c[i]=ch;
			i=i+1;
		}
		if(ch==125)
		{
			b=b+1;
			c[i]=ch;
			i=i+1;
		}
		ch=fgetc(in);
	}
	if(a==b)
		printf("1\n");
	else
		printf("0\n");
	puts(c);
	fclose(in);
	return 0;
}
