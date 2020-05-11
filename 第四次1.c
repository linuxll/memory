#include<stdio.h>
#include<string.h>
int main()
{
	char s[50],t[50],str1[50];
	char str2[50]={'i'};
	int n,i,j,k1,k2,a,b,c;
	gets(s);
	gets(t);
	a=strlen(s);
	b=strlen(t);
	k2=0;
	for(i=0;i<a;i++)
		for(j=0;j<b;j++)
		{
			for(n=0,k1=0;;n++)
			{
				if(s[i+n]==t[j+n]&&s[i+n]!=0)
					{
						str1[n]=s[i+n];
						k1=k1+1;
						continue;
				}
				else
					break;
			}
			if(n>0)
			{
				if(k1>k2)
				{
					for(c=0;c<k1;c++)
						str2[c]=str1[c];
					k2=k1;
				}
			}
		}
	if(k2==0)
		printf("No Answer");
	else
		puts(str2);
	return 0;
}


