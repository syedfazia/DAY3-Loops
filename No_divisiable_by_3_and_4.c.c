#include<stdio.h>
#define n 100
int main()
{
	int i;
	for(i=1;i<=n;i++)
		if(i%3==0 && i%4==0)
			printf("%d ",i);
}
