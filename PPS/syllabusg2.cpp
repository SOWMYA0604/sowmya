#include<stdio.h>
#include<math.h>
int main()
{
	int a,b,c;
	float r1,r2;
	printf("\n Enter a,b,c values\n");
	scanf("%d%d%d",&a,&b,&c);
	r1=(-b+sqrt(b*b-4*a*c))/2*a;
	r2=(-b-sqrt(b*b-4*a*c))/2*a;
	printf("\n The roots  of quadratic equation is %.1f and %.1f\n",r1,r2);	
	
}
