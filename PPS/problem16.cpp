#include<stdio.h>
int main()
{
	int a,b,c,d,e,positive,negative;
	printf("enter");
	scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
	positive=0;
	negative=0;
	if (a>0)
	   positive+=a;
	else
	    negative+=a;
	if (b>0)
	    positive+=b;
	else
	    negative+=b;
	if (c>0)
	    positive+=c;
	else
	    negative+=c;
	if (d>0)
	    positive+=d;
	else
	    negative+=d;
	if (e>0)
	    positive+=e;
	else
	    negative+=e;
	printf("sum of positive numbers is %d and sum of negative numbers is %d",positive,negative);
	
	
	
}
