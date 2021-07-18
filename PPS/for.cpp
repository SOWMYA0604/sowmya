#include<stdio.h>
#include<string.h>
int main()
{
	int fibo[15],i;
	fibo[0]=0;
	fibo[1]=1;
	for (i=2;i<15;++i)
	{
	    fibo[i]=fibo[i-2]+fibo[i-1];
    for (i=0;i=15;++i)
        printf("%d\n",fibo[i]);
    }
}
	
	
