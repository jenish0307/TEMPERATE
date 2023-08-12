#include<stdio.h>
main()
{
	int a,last,first,sum;
	printf("ENTER VALUE :- ");
	scanf("%d",&a);
	last= a % 10;
	while(a>=10)
	{
	
		a=a/10;
    }
	first=a;
	sum=first+last;
	printf("SUM OF FIRST DIGIT AND LAST DIGIT = %d",sum);
}