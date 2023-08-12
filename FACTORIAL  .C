#include<stdio.h>
main()
{
	int i=1,n,f=1;
	printf("ENTER THE NUMBER :- ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		f = f * i;
	}
	printf("FACTORIAL OF %d = %d",n,f);
}
