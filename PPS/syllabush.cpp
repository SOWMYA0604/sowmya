#include<stdio.h>
int main()
{
	int i=1,rem,num,binary=0;
	printf("ENTER NUM");
	scanf("%d",&num);
	while ((num>0) && (num<256))
	{
		rem=num%2;
		num=num/2;
		binary=binary+i*rem;
		i=i*10;
		
	}
	printf("%d",binary);
	
}
