#include<stdio.h>
int main()
{
	int a,b,c,d,e,add;
	scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
	add=0;
	if (a%2==1)
	  add+=a;
	if (b%2==1)
	    add+=b;
	if (c%2==1)
	    add+=c;
	if (d%2==1)
	    add+=d;
	if (e%2==1)
	    add+=e;
	printf("sum of odd values is %d",add);
	
	
	
	
}
