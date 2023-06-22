#include<stdio.h>
int main()
{
	unsigned int n,temp,rev=0;
	printf("ENter the number\n");
	scanf("%d",&n);
	temp=n;
	while(temp!=0)
	{
		int dig=temp%10;
		rev=rev*10+dig;
		temp=temp/10;
	}
	printf("Reverse of %d=%d\n",n,rev);
}
