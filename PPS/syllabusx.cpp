#include<stdio.h>
#include<math.h>
int main()
{
	int i,x,sum,power,n,m;
	printf("enter x");
	scanf("%d",x);
	for (i=0;i<=2;i++)
	{
		power=pow(-1,i);
		n=pow(x,i);
		sum=sum+((power*n)/2*i));
	}
	printf("%d",sum);
	
		
	}
	
	
	
}
