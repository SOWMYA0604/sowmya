#include<stdio.h>
int main()
{
	int A[5],i,max=0;
	printf("enter 5 numbers\n");
	for (i=0;i<5;i++)
	    scanf("%d",&A[i]);
	    printf("\n");
	for (i=0;i<5;i++)
	{
		
		if (A[i]>max)
		max = A[i];			
	}
	    printf("%d",max);
	return 1;
	
	
	
}
