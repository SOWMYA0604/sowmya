#include<stdio.h>
int main()
{
	int a,b,c,max=0,min=653875696;
	printf("\n Enter a,b,c values\n");
	scanf("%d%d%d",&a,&b,&c);
	if (a>max)
	    max=a;
	if (b>max)
	    max=b;
	if (c>max)
	    max=c;
	printf("\n The maximum of %d, %d and %d is %d",a,b,c,max);
	if (a<min)
	    min=a;
	if (b<min)
	    min=b;
	if (c<min)
	    min=c;
	printf("\n the minimum of %d,%d and %d is %d",a,b,c,min);
	
	
	
}
