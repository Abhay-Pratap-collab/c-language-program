#include<stdio.h>
//void main()
//{
//	int i=2,j,n;
//	printf("enter number :");
//	scanf("%d,",&n);
//	// i=3 hoga tb condition true hogi
//	while(i<=n)
//	{
//		
//		j=2;
//		while(j<i)
//		// j=2 and i=3 true
//		{
//			if(i%j==0)
//			// 3/2==0 false hoga
//			{
//				break;
//			}
//			// niche ayga j==3 hoga fir upr jayga
//			j++;
//		}
//		if(j==i)
//		// j==3 & i==3 print i hoga 
//		{
//			printf("%d,",i);
//		}
//		i++;
//		
//	}
//}
void main()
{
	int n,i=2,j;
	printf("Enter n number ");
	scanf("%d",&n);
	for( i=2;i<=n;i++)
	{
		for( j=2;j<i;j++)
		{
			if(i%j==0)
			{
				break;
			}
			
		}
		if(j==i)
		{
			printf("%d,",i);
		}
	}
}
