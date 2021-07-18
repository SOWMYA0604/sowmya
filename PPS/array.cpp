#include<stdio.h>
int main()
{
	int arr[100],value,i=0,n;
	int position;
	printf("enter position");
	scanf("%d",&position);
	printf("enter value");
	scanf("%d",&value);
	printf("enter the number of elements in array\n");
	scanf("%d",&n);
	printf("enter the elements in array\n");
	for (i=0;i<n-1;i++)
	scanf("%d\n",&arr[i]);
	for (i=n;i>=position;i--)
	{
		arr[i+1]=arr[i];
	}
	arr[position]=value;
	printf("resultant array\n");
	for (i=0;i<=n;i++)
	    printf("%4d\n",arr[i]); 
	
		
	
	
	
	
}
