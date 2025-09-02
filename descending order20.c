#include<stdio.h>
void main()
{
	int x[5],t,i,j;
	for(i=0;i<=4;i++)
	{
		printf("enter number %d ",i);
		scanf("%d",&x[i]);
		
	}
	for(i=0;i<4;i++)
	{
		for(j=0;j<4-i;j++)
		{
			if(x[j+1]>x[j])
			{
				t=x[j];
				x[j]=x[j+1];
				x[j+1]=t;
			}
			
		}
	}
	for(i=0;i<=4;i++)
	{
		printf("%d,",x[i]);
	}
}
