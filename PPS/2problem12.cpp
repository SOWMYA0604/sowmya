#include<stdio.h>
#include<math.h>
int main()
{
	int a,b,c,m1,m2;
	printf("enter a,b,c values");
	scanf("%d%d%d",&a,&b,&c);
	m1=(-b+sqrt(b*b-4*a*c))/2*a;
	m2=(-b-sqrt(b*b-4*a*c))/2*a;
	printf("the roots of the equation are %d and %d",m1,m2);
	
	
	
}
