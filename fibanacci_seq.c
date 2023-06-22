#include<stdio.h>
int main()
{
	int a=0,b=1,n,res,i;
	printf("Enter the number");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		printf("%d ",a);
		res=a+b;
		a=b;
		b=res;
	}
	
}
