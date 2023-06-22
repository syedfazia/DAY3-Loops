#include<stdio.h>
int main()
{
	int i;
	unsigned int num,n,sum=0;
	printf("Enter the number");
	scanf("%d",&n);
	num=n;
	while(n!=0)
	{
		int dig=n%10;
		sum=sum+dig;
		n=n/10;
	}
	printf("Sum of digits of %d =%d\n",num,sum);
}
