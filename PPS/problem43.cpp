#include<stdio.h>
int main()
{
	int a,b,c,max;
	printf("Enter 3 numbers \n");
	scanf("%d%d%d",&a,&b,&c);
	max=(a>b&&a>c ?a :b>c ?b :c);
	printf("%d is maximum among three numbers\n",max);
	
	
	
}
