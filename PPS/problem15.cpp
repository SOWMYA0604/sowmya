#include<stdio.h>
int main()
{
	int a,b,c,d,e,positivec,negativec;
	printf("enter");
	scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
	positivec=0;
	negativec=0;
	if (a>0)
	   positivec+=1;
	else
	    negativec+=1;
	if (b>0)
	    positivec+=1;
	else
	    negativec+=1;
	if (c>0)
	    positivec+=1;
	else
	    negativec+=1;
	if (d>0)
	    positivec+=1;
	else
	    negativec+=1;
	if (e>0)
	    positivec+=1;
	else
	    negativec+=1;
	printf("count of positive numbers is %d and count of negative numbers is %d",positivec,negativec);
	
	
	
}
