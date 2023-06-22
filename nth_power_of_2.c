#include<stdio.h>
int main()
{
	int n,i,res=1;
	printf("Enter the number\n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
		res=res*n;
	printf("2^%d=%d\n",n,res);
}
