#include<stdio.h>
#define n 4
int main()
{
	int i,j,k;
	for(i=1;i<=n;i++)
	{
		for(k=1;k<=i;k++)
			printf("*");
		for(j=1;j<=n-i;j++)
			printf(" ");
		printf("\n");	
	}
	for(i=n-1;i>=1;i--)
	{
		for(k=1;k<=i;k++)
			printf("*");
		for(j=1;j<=n-i;j++)
			printf(" ");
		printf("\n");
	}
	
}
