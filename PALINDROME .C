#include<stdio.h>
main()
{
	int n,temp,a,b=0;
	printf("ENTER VALUE :- ");
	scanf("%d",&n);
	temp=n;
	while(n!=0)
	{
		a=n%10;
		b=b*10+a;
		n=n/10;
	}
	if(temp==b)
	{
		printf("NUMBER IS PALINDROME");
	}
	else
	{
		printf("NUMBER IS NOT PALINDROME");
	}
}
