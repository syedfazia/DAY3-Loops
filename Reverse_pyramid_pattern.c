#include<stdio.h>
#define n 4
int main()
{
	int i,j,k;
	for(i=n;i>=1;i--)
	{
		for(j=1;j<=n-i;j++)
			printf(" ");
		for(k=2*i-1;k>=1;k--)
			printf("*");
		for(j=1;j<=n-i;j++)
			printf(" ");
		printf("\n");
	}
}
