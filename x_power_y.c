#include<stdio.h>
int main()
{
	int x,y,n,i,res=1;
	printf("1-x const y vary \t 2-x vary y const \t 3-x vary y vary\n");
	printf("Enter number\n");
	scanf("%d",&n);
	switch(n)
	{
		case 1:
			x=2;
			printf("Enter y value\n");
			scanf("%d",&y);
			for(i=1;i<=y;i++)
				res=res*x;
			printf("2^%d=%d\n",y,res);
			break;
		case 2:
			y=2;
			printf("Enter x value\n");
			scanf("%d",&x);
			for(i=1;i<=y;i++)
				res=res*x;
			printf("%d^2=%d\n",x,res);
			break;
		case 3:
			printf("Enter x and y values\n");
			scanf("%d %d",&x,&y);
			for(i=1;i<=y;i++)
				res=res*x;
			printf("%d^%d=%d\n",x,y,res);
			break;
		default:
			printf("Invalid Input\n");	
	}
}
