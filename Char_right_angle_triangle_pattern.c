#include<stdio.h>
#define n 4
int main()
{
	int i,j;
	for(i=1;i<=n;i++)
	{
		char ch='A';
		for(j=1;j<=i;j++)
		{
			printf("%c ",ch);
			ch++;
		}
		printf("\n");
	}
}
