#include<stdio.h>
#define n 4
int main()
{
	int i,j,k;
	for(i=n;i>=1;i--)
	{
		for(k=1;k<=i;k++)
			printf("*");
		for(j=1;j<=n-i;j++)
			printf(" ");
		printf("\n");
	}
}
