#include<math.h>
#include<stdio.h>
int main()
{
	int x1,y1,x2,y2,d,D;
	scanf("%d%d%d%d",&x1,&y1,&x2,&y2);
	d=(y2-y1)*(y2-y1)+(x2-x1)*(x2-x1);
	D=sqrt(d);
	printf("the distance between two points is %d",D);
	
	
	
	
}
