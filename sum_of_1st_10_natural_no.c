#include<stdio.h>
#define n 10
int main()
{
	int i,sum=0;
	for(i=1;i<=n;i++)
		sum+=i;
	printf("Sum of 1st %d Natural numbers is %d\n",n,sum);
}
