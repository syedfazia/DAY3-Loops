#include<stdio.h>
#define n 4
int main()
{
	int i,j;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
			printf("%d ",i);
		printf("\n");
	}
}
