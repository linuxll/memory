#include<stdio.h>
int main()
{
	char c[9];
	int a[9][9]={0};
	int i,j,k,sum1,t,sum2,sum3,sum4;
	gets(c);
	for(j=0;j<8;j++)
	{
		i=c[j]-48-1;
		if(i<0)
		{
			k=j;
			continue;
		}
		a[i][j]=1;
	}
	for(i=0;i<8;i++)
	{
		for(j=0,sum1=0;j<8;j++)
		{
			sum1=sum1+a[i][j];
		}
		if(sum1==0)
		{
			t=i;
			break;
		}
	}
	for(i=t,j=k,sum1=0;;)
	{
		if(i<0||j==8)
			break;
		sum1=sum1+a[i][j];
		i=i-1;
		j=j+1;
	}
	for(i=t,j=k,sum2=0;;)
	{
		if(i<0||j<0)
			break;
		sum2=sum2+a[i][j];
		i=i-1;
		j=j-1;
	}
	for(i=t,j=k,sum3=0;;)
	{
		if(i==8||j<0)
			break;
		sum3=sum3+a[i][j];
		i=i+1;
		j=j-1;
	}
	for(i=t,j=k,sum4=0;;)
	{
		if(i==8||j==8)
			break;
		sum4=sum4+a[i][j];
		i=i+1;
		j=j+1;
	}
	k=sum1+sum2+sum3+sum4;
	t=t+1;
	if(k==0)
		printf("%d\n",t);
	else
		printf("No Answer\n");
	return 0;
}

