#include<stdio.h>
int main()
{
	int a,b,max;
	printf("Enter 2 numbers");
	scanf("%d%d",&a,&b);
	if (a==b)
	printf("Both are equal");
	max= (a>b) ?a :b;
	printf("%d is maximum among %d and %d",max,a,b);
	
	
}
