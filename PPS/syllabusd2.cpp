#include<stdio.h>
int main()
{
	int num,sum=0,digit;
	printf("\n Enter num value\n");
	scanf("%d",&num);
	while (num!=0)
	{
		digit=num%10;
		sum=sum+digit;
		num=num/10;
	}
	printf("\n sum of indivdual digits of a given number is %d\n",sum);
	
	
}
