#include<stdio.h>
void main()
{
	int i,j,s,a=1,b=5;
	for(i=5;i<=9;i++)
	{
		for(s=2;s>=a;s--)
		{
			printf(" ");
		}
		for(j=1;j<=i;j++)
		{
			printf("*");
		}
		for(s=1;s<=b;s++)
		{
			printf(" ");
		}
		for(j=1;j<=i;j++)
		{
			printf("*");
		}
		a++;
		i++;
		b=b-2;
		printf("\n");
		
	}
	int c=1,x;
	for(x=19;x>=0;x--)
	{
		for(s=2;s<=c;s++)
		{
			printf(" ");
		}
	
		for(j=1;j<=x;j++)
		{
			printf("*");
			
		}
		
	
		c=c+1;
		x=x-1;
		printf("\n");
	}
}
