#include<stdio.h>
main()
{
	int n,i,c=0;
	
	printf("ENTER THE VALUE :- ");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		if(n%i==0)
		{
			c++;
		}
	}
	if(c==2)
	{
		printf("NUMBER IS PRIME");
	}
	else
	{
		printf("NUMBER IS NOT PRIME");
	}
}