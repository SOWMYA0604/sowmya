#include<stdio.h>
int main()
{
	int a,b,c;
	printf("enter angles of a triangle\n");
	scanf("%d%d",&a,&b);
	c=180-(a+b);
	printf("the third angle of a triangle is %d",c);	
	
}
