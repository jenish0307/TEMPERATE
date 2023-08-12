#include<stdio.h>
main()
{
	int n, a=0,b=1,c=0;
	
	printf("ENTER THE VALUE :- ");
	scanf("%d",&n);
	printf("%d\t",a,b);
	
	while(c<=n)
	{
		c=a+b;
		a=b;
		b=c;
		
		printf("%d\t",a);
	}
	
}