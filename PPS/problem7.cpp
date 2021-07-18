#include<stdio.h>
int main()
{
	int a,b,c,sum,product;
	float avg;
	printf("enter values");
	scanf("%d%d%d",&a,&b,&c);
	sum=a+b+c;
	product=a*b*c;
	avg=sum/3;
	printf("found sum,product,avg as %d,%d,%f",sum,product,avg);
	
	
	
}
