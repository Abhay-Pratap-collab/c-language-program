// call by value
#include<stdio.h>
void swap(int a,int b)
{
	int t;
	t=a;
	a=b;
	b=t;
	
}
void main()
{
	int fn,sn;
	printf("enter first number ");
	scanf("%d",&fn);
	printf("enter second number ");

	scanf("%d",&sn);
	swap(fn,sn);
	printf("%d,%d",fn,sn);
}
