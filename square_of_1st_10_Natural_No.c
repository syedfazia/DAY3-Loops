#include<stdio.h>
#define n 10
int main()
{
	int i;
	for(i=1;i<=n;i++)
		printf("%d^%d=%d\t",i,i,i*i);
	return 0;
}
