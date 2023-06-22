#include<stdio.h>
#define n 4
int main()
{
	int i,j,k,l;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n-i;j++)
			printf(" ");
		for(k=1;k<=2*i-1;k++)
			printf("*");
		for(j=1;j<=n-i;j++)
			printf(" ");
		printf("\n");
	}
}
