#include<stdio.h>
main()
{
	int a,count=0;
	printf("ENTER VALUE :- ");
	scanf("%d",&a);
	
	while(a>0)
	{
		a=a/10;
		count++;
	}
	printf("TOTAL DIGIT = %d",count);
}