#include<stdio.h>
int main()
{
	int n,i,j,count;
	printf("\n Enter n value\n");
	scanf("%d",&n);
	printf("\n The prime numbers between 1 to %d\n",n);
	for (i=1;i<=n;i++)
	{
		count=0;
		for (j=1;j<=i;j++)
		if (i%j==0)
		{
			count++;
		}
		if (count==2)
		    printf("%d\n",i);
		
	}
	
	
}
